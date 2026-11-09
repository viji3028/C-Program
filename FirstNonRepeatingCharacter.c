#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "swiss";
    int frequency[256] = {0};
    int i;
    int found = 0;

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        frequency[(unsigned char)str[i]]++;
    }

    // Find first character with frequency 1
    for (i = 0; str[i] != '\0'; i++) {
        if (frequency[(unsigned char)str[i]] == 1) {
            printf("First Non-Repeating Character: %c\n", str[i]);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Output: -1\n");
    }

    return 0;
}