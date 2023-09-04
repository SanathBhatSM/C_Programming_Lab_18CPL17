// Develop a program to introduce 2D Array manipulation and implement Matrix multiplication and ensure the rules of multiplication are checked.

#include <stdio.h>

int main() {
    int m1, n1, m2, n2;

    // Input dimensions of the first matrix
    printf("Enter the dimensions of the first matrix (m x n): ");
    scanf("%d %d", &m1, &n1);

    // Input dimensions of the second matrix
    printf("Enter the dimensions of the second matrix (m x n): ");
    scanf("%d %d", &m2, &n2);

    // Check if matrix multiplication is possible
    if (n1 != m2) {
        printf("Matrix multiplication is not possible. Column count of the first matrix must be equal to the row count of the second matrix.\n");
        return 1;
    }

    int matrix1[100][100], matrix2[100][100], result[100][100];

    // Input elements of the first matrix
    printf("Enter elements of the first matrix (%d x %d):\n", m1, n1);
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix (%d x %d):\n", m2, n2);
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result matrix
    printf("Resultant matrix after multiplication (%d x %d):\n", m1, n2);
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
