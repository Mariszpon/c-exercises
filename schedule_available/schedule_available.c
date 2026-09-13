#include <stdio.h>

int main() {
    long T, D;
    int M;
    scanf("%ld %ld %d", &T, &D, &M);

    long z[1000];
    int k = 0;

    for (int i = 0; i < M; i++) {
        long y;
        scanf("%ld", &y);
        if (y < D) {
            z[k] = y;
            k++;
        }
    }

    int ok = 0;

    if (k == 0) {

        if (D >= T) ok = 1;
    } else {

        if (z[0] >= T) ok = 1;


        for (int i = 0; i + 1 < k && !ok; i++) {
            if (z[i + 1] - z[i] >= T + 1) ok = 1;
        }


        if (D - z[k - 1] >= T + 1) ok = 1;
    }

    printf("%c\n", ok ? 'Y' : 'N');

    return 0;
}
