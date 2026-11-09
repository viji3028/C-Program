
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i;
    int *arr, *temp;

    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of new elements: ");
    scanf("%d", &m);

    temp = (int *)realloc(arr, (n + m) * sizeof(int));

    if (temp == NULL)
    {
        printf("Memory reallocation failed");
        free(arr);
        return 1;
    }

    arr = temp;

    printf("Enter %d new elements:\n", m);
    for (i = n; i < n + m; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("All elements are:\n");
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
