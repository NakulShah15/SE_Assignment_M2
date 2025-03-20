//6. WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include <stdio.h>

void inputMatrix(int matrix[][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int A[][10], int B[][10], int result[][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrix(int A[][10], int B[][10], int result[][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplyMatrix(int A[][10], int B[][10], int result[][10], int row1, int col1, int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int row1, col1, row2, col2;
    int A[10][10], B[10][10], result[10][10];

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &row2, &col2);

    if (row1 != row2 || col1 != col2) {
        printf("Addition and Subtraction are only possible for same-sized matrices.\n");
    }

    printf("Enter elements of first matrix:\n");
    inputMatrix(A, row1, col1);

    printf("Enter elements of second matrix:\n");
    inputMatrix(B, row2, col2);

    if (row1 == row2 && col1 == col2) {
        printf("Addition of matrices:\n");
        addMatrix(A, B, result, row1, col1);
        printMatrix(result, row1, col1);

        printf("Subtraction of matrices:\n");
        subtractMatrix(A, B, result, row1, col1);
        printMatrix(result, row1, col1);
    }

    if (col1 == row2) {
        printf("Multiplication of matrices:\n");
        multiplyMatrix(A, B, result, row1, col1, col2);
        printMatrix(result, row1, col2);
    } else {
        printf("Multiplication not possible (columns of A must equal rows of B).\n");
    }

    return 0;
}

