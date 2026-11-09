
#include <stdio.h>

int main()
{
    int n, temp, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    printf("Reverse of the number = %d\n", reverse);

    if (n == reverse)
        printf("%d is a Palindrome Number", n);
    else
        printf("%d is not a Palindrome Number", n);

    return 0;
}
