#include <stdio.h>
void main(){
    int base,power,ans=1,i;
    printf("Enter the value of base:"); 
    scanf("%d",&base);

    printf("Enter the value of power:");
    scanf("%d",&power);

    for(i=1;i<=power;i++){
        ans=ans*base;
    }
    printf("%d",ans);

}