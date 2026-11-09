#include <stdio.h>

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;
    int i, j = 0;
    int temp;

    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    printf("Output: [");

    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);

        if (i < n - 1)
            printf(", ");
    }

    printf("]");

    return 0;
}