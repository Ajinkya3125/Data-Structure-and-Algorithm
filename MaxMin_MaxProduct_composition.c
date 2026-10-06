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
    int m, n, p;
    int i, j, k;

    float R[20][20], S[20][20];
    float MaxMin[20][20], MaxProduct[20][20];

    // Input dimensions
    printf("Enter rows and columns of Relation R: ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of Relation S: ");
    scanf("%d %d", &n, &p);

    // Input R
    printf("\nEnter elements of Relation R:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%f", &R[i][j]);
        }
    }

    // Input S
    printf("\nEnter elements of Relation S:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < p; j++)
        {
            scanf("%f", &S[i][j]);
        }
    }

    // Initialize result matrices
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < p; j++)
        {
            MaxMin[i][j] = 0;
            MaxProduct[i][j] = 0;
        }
    }

    // Max-Min Composition
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < p; j++)
        {
            for(k = 0; k < n; k++)
            {
                float value = min(R[i][k], S[k][j]);
                MaxMin[i][j] = max(MaxMin[i][j], value);
            }
        }
    }

    // Max-Product Composition
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < p; j++)
        {
            for(k = 0; k < n; k++)
            {
                float value = R[i][k] * S[k][j];
                MaxProduct[i][j] = max(MaxProduct[i][j], value);
            }
        }
    }

    // Display Max-Min
    printf("\nMax-Min Composition:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < p; j++)
        {
            printf("%.2f ", MaxMin[i][j]);
        }
        printf("\n");
    }

    // Display Max-Product
    printf("\nMax-Product Composition:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < p; j++)
        {
            printf("%.2f ", MaxProduct[i][j]);
        }
        printf("\n");
    }

    return 0;
}