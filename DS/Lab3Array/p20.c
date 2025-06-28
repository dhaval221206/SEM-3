// wap to find the whether the array contains a duplicate number or not 

#include <stdio.h>

void main(){
    
     int n,flag=0;

    printf("Enter the value of n :");
    scanf("%d",&n);

    int arr[n];
    for(int i=1;i<n;i++){
        printf("Enter the number :");
        scanf("%d",&n);
    }
    for(int i=1;i<n;i++){
         printf("%d",arr[i]);
        
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j] && flag==0){
                printf("Array have duplicate number...");
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        printf("no duplicate....");
    }

}