#include <stdio.h>
#include <math.h>

void main(){

    int n;

    printf("Enter the value of n :");
    scanf("%d",&n);

    int arr[n];
    for(int i=1;i<n;i++){
        printf("Enter the number :");
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
         printf("%d",arr[i]);
    }
}