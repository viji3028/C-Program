
#include <stdio.h>

int main()
{
    int limit, num, temp, digit, sum, i;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Armstrong numbers are: ");

    for (i = 1; i <= limit; i++)
    {
        num = i;
        temp = num;
        sum = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            sum = sum + digit * digit * digit;
            temp = temp / 10;
        }

        if (sum == num)
            printf("%d ", num);
    }

    return 0;
}
