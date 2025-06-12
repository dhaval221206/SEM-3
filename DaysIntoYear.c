#include<stdio.h>
void main(){
    int yy,ww,dd,days;
    printf("Enter days :");
    scanf("%d",&days);
    yy=days/365;
    days=days-(yy*365);
    ww=days/7;
    days=days-(ww*7);
    dd=days;

    printf("yy:ww:dd %d,%d,%d",yy,ww,dd);
}