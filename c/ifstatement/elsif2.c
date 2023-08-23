#include<stdio.h>
int main(){
    int a;
    printf("enter marks here\n");
    scanf("%d",&a);
    if(a>=80){
        printf("A+");
    }else if(a>=60){
        printf("A");
    }else if(a>=50){
        printf("B");
    }else{
        printf("fail");
    }
    
}