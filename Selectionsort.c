//Selelction sort
#include<stdio.h>
void selectionsort(int arr[], int n)
{
    int i,j,temp,minIndex;
    for(i=0;i<n-1;i++)
    {
        minIndex = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionsort(arr,n);
    printf("Sorted array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}