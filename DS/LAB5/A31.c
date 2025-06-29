//   Read two 2x2 matrices and perform addition of matrices into third matrix and print it
#include <stdio.h>
void main(){

    int mat1[2][2],mat2[2][2],finalmat[2][2];

    printf("Enter the first matrix element ;\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the second matrix element :");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            finalmat[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
       printf("Resultant matrix after addition:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", finalmat[i][j]);
        }
        printf("\n");
    }

}