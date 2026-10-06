#include <stdio.h>

// Function for minimum
float min(float a, float b)
{
    return (a < b) ? a : b;
}

// Function for maximum
float max(float a, float b)
{
    return (a > b) ? a : b;
}

int main()
{
    int n, i, j;
    float A[20], B[20], Y[20];
    float R[20][20];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter membership values of A:\n");
    for(i = 0; i < n; i++)
        scanf("%f", &A[i]);

    printf("Enter membership values of B:\n");
    for(i = 0; i < n; i++)
        scanf("%f", &B[i]);

    printf("Enter membership values of Y:\n");
    for(i = 0; i < n; i++)
        scanf("%f", &Y[i]);

    // R = (A x B) U (A' x Y)

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            // A x B
            float AxB = min(A[i], B[j]);

            // A' = 1 - A
            float Adash = 1 - A[i];

            // A' x Y
            float AdashY = min(Adash, Y[j]);

            // Union
            R[i][j] = max(AxB, AdashY);
        }
    }

    printf("\nR = (A x B) U (A' x Y):\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%.2f ", R[i][j]);
        }
        printf("\n");
    }

    return 0;
}    