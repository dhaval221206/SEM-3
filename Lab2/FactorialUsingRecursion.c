#include <stdio.h>
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n,ans;
    printf("enter the value of n :");
    scanf("%d",&n);
    ans=fact(n);
    printf("%d",ans);
}