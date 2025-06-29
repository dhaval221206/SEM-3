//  Read two matrices, first 3x2 and second 2x3, perform multiplication operation and store result in third matrix and print it.

#include <stdio.h>
void main(){

    int mat1[3][2],mat2[2][3],finalmat[3][3];
printf("Enter the first matrix element ;\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the second matrix element :");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            finalmat[i][j] = 0;
            for(int k = 0; k < 2; k++){

                  finalmat[i][j] += mat1[k][j] * mat2[j][k];
            }
        }
    }
    for(int i = 0; i < 3; i++){
        printf("\n");
        for(int j = 0; j < 3; j++){
             printf("%d ", finalmat[i][j]);
        }
        printf("\n");
    }
}