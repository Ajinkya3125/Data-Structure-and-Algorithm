#include <stdio.h>

int main() {
    int n, i;
    float A[100], B[100];
    float Union[100], Intersection[100], ComplementA[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter membership values of fuzzy set A:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &A[i]);
    }

    printf("Enter membership values of fuzzy set B:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &B[i]);
    }

    // Calculate union, intersection and complement
    for (i = 0; i < n; i++) {
        // Union = maximum
        if (A[i] > B[i])
            Union[i] = A[i];
        else
            Union[i] = B[i];

        // Intersection = minimum
        if (A[i] < B[i])
            Intersection[i] = A[i];
        else
            Intersection[i] = B[i];

        // Complement of A = 1 - A
        ComplementA[i] = 1 - A[i];
    }

    printf("\nUnion (A U B):\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", Union[i]);
    }

    printf("\n\nIntersection (A n B):\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", Intersection[i]);
    }

    printf("\n\nComplement of A (A'):\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", ComplementA[i]);
    }

    printf("\n");

    return 0;
}