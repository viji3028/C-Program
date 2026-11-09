#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int n1 = 5;
    int n2 = 5;

    int i, j;

    printf("Intersection: [");

    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {

            if (arr1[i] == arr2[j]) {
                printf("%d", arr1[i]);

                if (arr1[i] != 5)
                    printf(", ");

                break;
            }
        }
    }

    printf("]");

    return 0;
}