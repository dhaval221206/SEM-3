//  Write a program to delete a number from an array that is already sorted in an ascending order.
#include <stdio.h>

void main(){
    int n;
    printf("enter the numbar of elements that you want to add");
    scanf("%d",&n);

    int array[n];

    for(int i=0;i<n;i++){
        printf("enter the %d element :",i+1);
        scanf("%d",&array[i]);
    }

    int a;
    printf("enter the element the you delete ");
    scanf("%d",&a);

    for(int i=0;i<n;i++){
        if(array[i]==a){
            for(int j=i;j<n-1;j++){
                array[j]=array[j+1];
            }
        }
    }

    for(int i=0;i<n-1;i++){
        printf("%d ",array[i]);
    }
}