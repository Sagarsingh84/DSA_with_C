#include<stdio.h>
int main()
{
    int n = 0;
    int i = 0;
    int key = 0;

    printf("Enter Length of Array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements : \n",n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key elements to search: ");
    scanf("%d",&key);
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at index %d\n", i);
            return 0;
        }
    }
    printf("Element not found\n");
    return 0;
}
