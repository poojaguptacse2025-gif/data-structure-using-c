#include <stdio.h>

int main()
{5
    int a[100], n, i, j;
    int max, exp, digit;
    int output[100];
    int count[10];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (exp = 1; max / exp > 0; exp *= 10)
    {
        for (i = 0; i < 10; i++)
        {
            count[i] = 0;
        }

        for (i = 0; i < n; i++)
        {
            digit = (a[i] / exp) % 10;
            count[digit]++;
        }
        for (i = 1; i < 10; i++)
        {
            count[i] += count[i - 1];
        }
        for (i = n - 1; i >= 0; i--)
        {
            digit = (a[i] / exp) % 10;
            output[count[digit] - 1] = a[i];
            count[digit]--;
        }
        for (i = 0; i < n; i++)
        {
            a[i] = output[i];
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}