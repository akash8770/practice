#include<stdio.h>
int main(){
    int a,b;
    printf("enter first value\n");
    scanf("%d",&a);
    printf("enter second value\n");
    scanf("%d",&b);
    if(a>b){
        printf("a is greater");
    }else{
        printf("b is greater");
    }
}