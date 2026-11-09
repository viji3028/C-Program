#include <stdio.h>

int main() {
    char str[] = "programming";
    int seen[256] = {0};
    int i;

    printf("Input: %s\n", str);
    printf("Output: ");

    for (i = 0; str[i] != '\0'; i++) {

        if (seen[(unsigned char)str[i]] == 0) {
            printf("%c", str[i]);
            seen[(unsigned char)str[i]] = 1;
        }
    }

    printf("\n");

    return 0;
}