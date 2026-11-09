#include <stdio.h>

int countDigit(int n, int digit) {
    if (n == 0)
        return 0;

    if (n % 10 == digit)
        return 1 + countDigit(n / 10, digit);
    else
        return countDigit(n / 10, digit);
}

int main() {
    int n, digit, count;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Enter the digit to count: ");
    scanf("%d", &digit);

    count = countDigit(n, digit);

    printf("Digit %d occurs %d times", digit, count);

    return 0;
}