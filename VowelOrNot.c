#include<stdio.h>
void main(){
    char x;
    printf("Enter character :");
    scanf("%c",&x);

    if(x=='A'|| x=='E'|| x=='I'|| x=='O'||x=='U'||x=='a'|| x=='e'|| x=='i'|| x=='o'||x=='u'){
        printf("Given character is Vowel");
    }
    else{
        printf("Given character is cons.");
    }
}