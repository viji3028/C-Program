#include <stdio.h>

int main() {
    int n = 4;
    int i, j, spaces;

    // Upper half
    for (i = 1; i <= n; i++) {

        for (spaces = 1; spaces <= n - i; spaces++)
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++) {

            if (j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) {

        for (spaces = 1; spaces <= n - i; spaces++)
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++) {

            if (j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}