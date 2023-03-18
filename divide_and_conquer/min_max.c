#include <stdio.h>
void minmax(int arr[], int n, int *min, int *max)
{
    int i;
    *min = *max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > *max)
            *max = arr[i];
        else if (arr[i] < *min)
            *min = arr[i];
    }
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min, max;
    minmax(arr, n, &min, &max);
    printf("Minimum element is %d\n", min);
    printf("Maximum element is %d \n", max);
    return 0;
}