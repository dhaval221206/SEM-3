//  Write a program to insert a number in an array that is already sorted in an ascending order. 


#include <stdio.h>

void main(){

     int n,num,index;

    printf("Enter the value of n :");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the number :");
        scanf("%d",&arr[i]);
    }

        for(int i = n; i < index; i--){
                arr[i]=arr[i-1];

        }
        arr[index] = num;

        for(int i=0;i<n;i++){
         printf("%d",arr[i]);
    }   
}