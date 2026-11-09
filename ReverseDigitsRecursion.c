#include <stdio.h>

int reverseNumber(int n, int rev) {
    if (n == 0)
        return rev;

    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main() {
    int n, result;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    result = reverseNumber(n, 0);

    printf("Reversed number: %d", result);

    return 0;
}