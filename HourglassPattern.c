#include <stdio.h>

int main()
{
    int n = 7;

    for (int i = n; i >= 1; i -= 2)
    {
        for (int j = 0; j < (n - i) / 2; j++)
            printf("  ");

        for (int j = 0; j < i; j++)
            printf("* ");

        printf("\n");
    }

    for (int i = 3; i <= n; i += 2)
    {
        for (int j = 0; j < (n - i) / 2; j++)
            printf("  ");

        for (int j = 0; j < i; j++)
            printf("* ");

        printf("\n");
    }

    return 0;
}