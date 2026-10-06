#include <stdio.h>

float min(float a, float b)
{
    return (a < b) ? a : b;
}

int main()
{
    int n, m, i, j;
    float A[100], B[100];

    printf("Enter number of elements in A: ");
    scanf("%d", &m);

    printf("Enter membership values of A:\n");
    for (i = 0; i < m; i++)
        scanf("%f", &A[i]);

    printf("Enter number of elements in B: ");
    scanf("%d", &n);

    printf("Enter membership values of B:\n");
    for (i = 0; i < n; i++)
        scanf("%f", &B[i]);

    printf("\nCartesian Product A x B:\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%.2f\t", min(A[i], B[j]));
        }
        printf("\n");
    }

    return 0;
}