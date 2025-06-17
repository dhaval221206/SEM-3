//  Write a program to merge two unsorted arrays.

#include <stdio.h>

void main(){
    int n;
    printf("enter the size of first array ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
       printf("enter the %d element ",i+1);
       scanf("%d",&a[i]);
    }


    int m;
    printf("enter the size of second array ");
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++){
        printf("enter the %d element ",i+1);
        scanf("%d",&b[i]);
    }

    int final[n+m];

    for(int i=0;i<n+m;i++){
        final[i]=a[i];
    }

     for(int i=0;i<m;i++){
         final[i+n]=b[i];
     }
    
    for(int i=0;i<n+m;i++){
        printf("%d ",final[i]);
    }
}