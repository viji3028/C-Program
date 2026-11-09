#include <stdio.h>
#include <string.h>

int expand(char str[], int left, int right) {
    while (left >= 0 && right < strlen(str) &&
           str[left] == str[right]) {
        left--;
        right++;
    }

    return right - left - 1;
}

void longestPalindrome(char str[]) {
    int start = 0;
    int maxLength = 1;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {

        int len1 = expand(str, i, i);
        int len2 = expand(str, i, i + 1);

        int currentLength;

        if (len1 > len2)
            currentLength = len1;
        else
            currentLength = len2;

        if (currentLength > maxLength) {
            maxLength = currentLength;

            if (currentLength % 2 == 1)
                start = i - currentLength / 2;
            else
                start = i - currentLength / 2 + 1;
        }
    }

    printf("Longest Palindromic Substring: ");

    for (int i = start; i < start + maxLength; i++) {
        printf("%c", str[i]);
    }

    printf("\n");
}

int main() {

    char str1[] = "babad";
    char str2[] = "cbbd";

    printf("Input: %s\n", str1);
    longestPalindrome(str1);

    printf("\nInput: %s\n", str2);
    longestPalindrome(str2);

    return 0;
}