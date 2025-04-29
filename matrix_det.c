//C program to find the determinant of the Matrix
//Not yet working...
#include <stdio.h>

int determinant(int matrix[][100], int n) {
    if (n == 1) {
        return matrix[0][0]; // Base case: determinant of 1x1 matrix
    }

    int det = 0;
    // Iterate through the first row
    for (int i = 0; i < n; i++) {
        // Calculate cofactor of the current element
        int cofactor = ((i % 2) == 0) ? 1 : -1; // Alternate signs for cofactors
        cofactor *= determinant(minor(matrix, n, 0, i), n - 1); // Get determinant of minor

        // Add the product of element and cofactor to the determinant
        det += matrix[0][i] * cofactor;
    }

    return det;
}

// Function to create a minor matrix by removing the specified row and column
int minor(int matrix[][100], int n, int row, int col) {
    int minor_matrix[100][100];
    int row_index = 0, col_index = 0;

    for (int i = 0; i < n; i++) {
        if (i != row) {
            for (int j = 0; j < n; j++) {
                if (j != col) {
                    minor_matrix[row_index][col_index] = matrix[i][j];
                    col_index++;
                }
            }
            row_index++;
            col_index = 0;
        }
    } 

    return determinant(minor_matrix, n - 1); // Calculate determinant of the minor matrix
}

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    if (n > 100) {
        printf("Error: Matrix size cannot exceed 100.\n");
        return 1;
    }

    int matrix[100][100];
    printf("Enter the elements of the matrix:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int det = determinant(matrix, n);
    printf("Determinant of the matrix: %d\n", det);

    return 0;
}
