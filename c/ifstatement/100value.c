#include<stdio.h>
int main(){
    int a;
    printf("enter value here\n");
    scanf("%d",&a);
    if(a<=100){
        printf("smaller");
    }else{
        printf("greater");
    }
}