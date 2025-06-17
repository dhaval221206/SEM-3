// avg of n number

#include <stdio.h>
#include <math.h>

void main(){

     int n;
     float avg,sum=0;
    printf("Enter the n :");
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++){
        sum=sum+++i;
    }
       avg=sum/n;
    printf("%f",avg);
 
}