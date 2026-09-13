/* Program: Patient information input
   Author: Mariana
   Date: 13/09/2026
   Purpose: Read patient's name and age, then display them.
*/

#include <stdio.h>
#include <locale.h>

#define NAME_MAX_LENGTH 50  // maximum length for patient name

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // enable Portuguese accents

    char patient_name[NAME_MAX_LENGTH]; // patient's name
    int patient_age = 0;                // patient's age

    // Input: name
    printf("Enter your name: ");
    if (fgets(patient_name, sizeof(patient_name), stdin) == NULL) {
        printf("Error reading name.\n");
        return 1;
    }

    // Input: age
    printf("Enter your age: ");
    if (scanf("%d", &patient_age) != 1) {
        printf("Invalid age input.\n");
        return 1;
    }

    // Output
    printf("%s, you are %d years old.\n", patient_name, patient_age);

    return 0;
}
