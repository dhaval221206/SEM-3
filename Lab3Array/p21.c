// replace 1st and 2nd number from array

#include <stdio.h>

void main(){
     int n,x,y;

    printf("Enter the value of n :");
    scanf("%d",&n);

    int arr[n];
    for(int i=1 ; i<n ; i++){
        printf("Enter the number :");
        scanf("%d",&arr[i]);
    }
    for(int i=1 ; i<n ; i++){
         printf("%d",arr[i]);
    }

    printf("Enter the number for replace :");
    scanf("%d %d",&x, &y);

    int found=0;

    for(int i=0; i < n ; i++){
        if(arr[i]==x){
            arr[i]=y;
            printf("%d",i);
            found = 1;
        }
    }
    if (!found) {
        printf("None");
    }

    printf("\n After replace element Final array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}