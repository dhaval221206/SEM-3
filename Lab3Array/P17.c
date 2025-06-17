// Calculate sum of numbers from m to n

#include <stdio.h>
#include <math.h>

void main(){
    int first,last,sum=0;
    printf("Enter the first and last :");
    scanf("%d %d",&first,&last);

    for(int i=first;i<=last;i++){
        sum=sum+i;
    }
    printf("%d",sum);

}