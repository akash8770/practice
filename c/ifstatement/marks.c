#include<stdio.h>
int main(){
    int a;
    printf("enter marks here:-\t");
    scanf("%d",&a);
    if(a>=33&&a<=49){
        printf("pass");
    }else if(a>=50&&a<=59){
        printf("second");
    }else if(a<=32){
        printf("fail");
    }else{
        printf("first");
    }
}