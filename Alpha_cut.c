#include <stdio.h>

int main()
{
    int n, i;
    float A[20], alpha;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter membership values of A:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &A[i]);
    }

    printf("Enter alpha value: ");
    scanf("%f", &alpha);

    printf("\nAlpha-cut Matrix:\n");

    for(i = 0; i < n; i++)
    {
        if(A[i] >= alpha)
            printf("1 ");
        else
            printf("0 ");
    }

    return 0;
}