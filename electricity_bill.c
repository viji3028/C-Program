
#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
        bill = units * 1.5;
    else if (units <= 200)
        bill = 100 * 1.5 + (units - 100) * 2.5;
    else if (units <= 300)
        bill = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4;
    else
        bill = 100 * 1.5 + 100 * 2.5 + 100 * 4 + (units - 300) * 5;

    if (units < 0)
        printf("Invalid units");
    else
        printf("Electricity Bill = Rs. %.2f", bill);

    return 0;
}
