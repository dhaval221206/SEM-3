#include <stdio.h>
void main(){
    int n,i;
    printf("Enter n :");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("Given number factor is :%d \n ",i);
        }
    }
}