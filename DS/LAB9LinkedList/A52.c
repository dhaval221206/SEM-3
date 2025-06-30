// WAP to find the largest element in the array using Pointer. 

#include <stdio.h>
#include <stdlib.h>


void main(){
    int n, max=0;
    printf("Enter the value of n :");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", arr + i);
    }
    for(int i = 0; i < n; i++){
       if(max < *(arr + i)){
        max = *(arr + i);
       }
    }
    printf("Max Element is :%d", max);

    free(arr);

}