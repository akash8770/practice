#include<stdio.h>
int main(){
    char ch;
    printf("enter any vowel\n");
    scanf("%c",&ch);

    switch (ch){
        case 'a':printf("vowel 1");
        break;
        case 'e':printf("vowel 2");
        break;
        case 'i':printf("vowel 3");
        break;
        case 'o':printf("vowel 4");
        break;
        case 'u':printf("vowel 5");
        break;
        default:printf("cons");

    }
}