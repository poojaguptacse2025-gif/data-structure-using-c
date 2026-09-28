// C Program to Traverse an Array using a for Loop
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int N = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements using loop: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}