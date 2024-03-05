#include<stdio.h>
int main(){
    int rows,cols;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);

    printf("Enter the number of coloumns\n");
    scanf("%d",&cols);

    int matrix1[rows][cols];
    int  matrix2[rows][cols];
    int  sum[rows][cols];

    printf("Enter the elements of the first matrix\n");
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            printf("Enter the elements of mat1[%d][%d]",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix\n");
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            printf("Enter the elements of mat2[%d][%d]",i,j);
            scanf("%d",&matrix2[i][j]);
}
    }

    printf("the sum of two ,matrix is:\n");
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            sum[i][j] = matrix1[i][j]+matrix2[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}