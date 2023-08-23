#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter value of a\n");
    scanf("%d",&a);
    printf("enter value of b\n");
    scanf("%d",&b);
    printf("enter value of c\n");
    scanf("%d",&c);
    if(a>b){
        if(a>c)
        printf("a is greater");
        else
        printf("c is greater");
    }else{
        if(b>c)
        printf("b is greater");
        else
        printf("c is greater");
    }
}