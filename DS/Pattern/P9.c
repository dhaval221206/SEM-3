//* * * * * 
// * * * *
//  * * *
//   * *
//    *
//   * *
//  * * *
// * * * *
//* * * * *
//  if print number then change printf("%d ", j);
#include <stdio.h>
void main(){
    int i, j, n, space=0;

    printf("Enter the value of n :");
    scanf("%d", &n);

    for(i = n; i >= 1; i--){
        for(space = 1; space <= n-i; space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    
    for (i=2;i<=n;i++) {
        for(space=1;space<=n-i;space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
}
}