#include<stdio.h>
float max(float a, float b) {
    return (a > b) ? a : b;
}

float min(float a, float b) {
    return (a < b) ? a : b;
}

int main() {
    int n, i;
    float A[100], B[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter membership values of A:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &A[i]);
    }

    printf("Enter membership values of B:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &B[i]);
    }

    // First De Morgan's Law
    printf("\nFirst De Morgan's Law:");
    printf("\n(A union B)' = A' n B'\n");

    printf("\n(A union B)': ");
    for (i = 0; i < n; i++) {
        printf("%.2f ", 1 - max(A[i], B[i]));
    }

    printf("\nA' intersection B': ");
    for (i = 0; i < n; i++) {
        printf("%.2f ", min(1 - A[i], 1 - B[i]));
    }

    // Second De Morgan's Law
    printf("\n\nSecond De Morgan's Law:");
    printf("\n(A intersection B)' = A' union B'\n");

    printf("\n(A intersection B)': ");
    for (i = 0; i < n; i++) {
        printf("%.2f ", 1 - min(A[i], B[i]));
    }

    printf("\nA' union B': ");
    for (i = 0; i < n; i++) {
        printf("%.2f ", max(1 - A[i], 1 - B[i]));
    }

    printf("\n");

    return 0;
}