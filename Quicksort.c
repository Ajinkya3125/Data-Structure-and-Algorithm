#include<stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    
    while(1)
    {
        while(i<=high && arr[i] <= pivot)
            i++;
        
        while(arr[j] > pivot)
            j--;
            
        if(i > j)
            break;
        
        swap(&arr[i],&arr[j]);
    }
    swap(&arr[low],&arr[j]);
    return j;
}

void quicksort(int arr[], int low, int high)
{
    int pi = partition(arr,low,high);
    if(low<high)
    {
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}

int main()
{
    int i,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,n-1);
    printf("Sorted array:");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}