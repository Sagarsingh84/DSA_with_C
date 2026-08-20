#include <stdio.h>

int binarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1, mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            return mid;
        }
        else if(key > arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int n, arr[100], key, i, result;

    printf("Enter length of array: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, n, key);

    if(result != -1)
    {
        printf("Element found at index %d", result);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}
