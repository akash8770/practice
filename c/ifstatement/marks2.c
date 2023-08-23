#include<stdio.h>
int main(){
    int m;
    printf("enter marks here\n");
    scanf("%d",&m);
    if(m>=80){
        printf("A+");
    }else
    if(m>=70){
        printf("A");
    }else
    if(m>=60){
        printf("B");
    }else
    if(m>=40){
        printf("C");
    }else{
        printf("F");
    }
}