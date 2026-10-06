#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    float A[20];
    float very[20], somewhat[20], notA[20];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter membership values of linguistic term:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%f", &A[i]);
    }

    // Applying linguistic hedges
    for(i = 0; i < n; i++)
    {
        // Very A = A^2
        very[i] = A[i] * A[i];

        // Somewhat A = sqrt(A)
        somewhat[i] = sqrt(A[i]);

        // Not A = 1 - A
        notA[i] = 1 - A[i];
    }

    printf("\nOriginal Linguistic Term A:\n");
    for(i = 0; i < n; i++)
        printf("%.2f ", A[i]);

    printf("\n\nVery A:\n");
    for(i = 0; i < n; i++)
        printf("%.2f ", very[i]);

    printf("\n\nSomewhat A:\n");
    for(i = 0; i < n; i++)
        printf("%.2f ", somewhat[i]);

    printf("\n\nNot A:\n");
    for(i = 0; i < n; i++)
        printf("%.2f ", notA[i]);

    return 0;
}