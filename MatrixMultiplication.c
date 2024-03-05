#include<stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int multi[rows][cols];

    printf("Enter the elements of the first matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter the element mat1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter the element mat2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("The element-wise multiplication of the two matrices is:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            multi[i][j] = matrix1[i][j] * matrix2[i][j];
            printf("%d\t", multi[i][j]);
        }
        printf("\n");
    }
    return 0;
}