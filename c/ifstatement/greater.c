#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter value a\n");
    scanf("%d",&a);
    printf("enter value b\n");
    scanf("%d",&b);
    printf("enter value c\n");
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