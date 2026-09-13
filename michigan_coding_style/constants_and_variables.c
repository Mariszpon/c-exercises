/* Program: Character and countdown printer
   Author: Mariana
   Date: 13/09/2026
   Purpose: Print a character multiple times and then print a countdown.
*/

#include <stdio.h>

#define PRINT_CHARACTER 'H'     // character to be printed
#define NUM_REPETITIONS 10      // number of times to print the character

int main(void) {
    // Print the character NUM_REPETITIONS times
    for (int index = 0; index < NUM_REPETITIONS; index++) {
        putchar(PRINT_CHARACTER);
    }
    putchar('\n');

    // Print a countdown from NUM_REPETITIONS to 1
    int current_value = NUM_REPETITIONS;
    while (current_value > 0) {
        printf("%d ", current_value);
        current_value--;
    }
    putchar('\n');

    return 0;
}

