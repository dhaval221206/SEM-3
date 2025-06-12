#include<stdio.h>
void main(){
    int y;
    printf("Enter the year :");
    scanf("%d",&y);

    if((y%4==0 && y%100!=0)||(y%400==0)){
        printf("Given year is Leap year");

    }
    else{
        printf("Given year is not Leap year");
    }
}