#include<stdio.h>

void selectionsort(int arr[],int n)
{
    int min=0;

    for(int i=0;i<n-1;i++)
    {
        min = i;
        for(int j =i+1;j<n;j++)
        {
            if(arr[min]<arr[j])
            {
                min = j;
            }

        }
     int temp;
     temp = arr[min];
     arr[min] = arr[i];
     arr[i] = temp;
    }
}

int main()
{
    int n;
    printf("Enter length of array: ");
    scanf("%d",&n);

    int arr[100];
    printf("Enter %d Elements: ",n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionsort(arr,n);
    printf("Sorted Array:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}
    
