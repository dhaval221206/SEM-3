// Write a program to delete a number from a given location in an array.
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

        printf("Enter the number for delete :");
        scanf("%d",&num);

        printf("Enter the index to delete :");
        scanf("%d",&index);

        for(int i = index; i < n-1; i++){
                arr[i] = arr[i+1];
        }

        for(int i  = 0; i < n-1; i++){
         printf("%d", arr[i]);
    }

}