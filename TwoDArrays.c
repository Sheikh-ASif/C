#include<stdio.h>
int main(){

    int i,j,mat[3][3];

    printf("Enter the elements of the matrixces\n");
    for ( i = 0; i <3; i++)
    {
        for(j=0; j<3; j++){
            printf("mat[%d][%d]\n",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The elements of matrices are:\n");
    for(i=0; i<3; i++){
        printf("\n");
    for(j=0; j<3; j++)
    printf("mat[%d][%d]=%d",i,j,mat[i][j]);
}
    return 0;
}