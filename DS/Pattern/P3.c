//      * 
//     * * 
//    * * * 
//   * * * * 
//  * * * * * 


#include <stdio.h>
#include <math.h>

void main() {
    int n,i,j,space;

    printf("Enter the value of n :");
    scanf("%d",&n);

    for (i=1;i<=n;i++) {
        for(space=1;space<=n-i;space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}
