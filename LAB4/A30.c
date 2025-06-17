//  WAP to replace lowercase characters by uppercase & vice-versa in a user specified string
#include<stdio.h>
#include<ctype.h>

void main(){

    char str[100];
    printf("enter the string :");
    scanf("%s",&str);

    for(int i=0;i<sizeof(str);i++){
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        }else{
            str[i]=tolower(str[i]);
        }
    }

    printf("%s",str);
}