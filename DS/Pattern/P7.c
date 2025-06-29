//       * * * * *
//      * * * * *
//     * * * * *
//    * * * * *
//   * * * * *

#include <stdio.h>

void main(){
    int n, i, j, space=0;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(space = 1; space <= n-i; space++){
            printf(" ");
        }
        for(j = 1; j <= n; j++){
            printf(" *");
        }
        printf("\n");
    }
}