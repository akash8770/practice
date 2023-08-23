#include<stdio.h>
void sum(int,int,int);
int main(){
    int a,b,c;
    printf("addition\n");
    printf("enter first value:");
    scanf("%d",&a);
    printf("enter second value:");
    scanf("%d",&b);
    printf("enter third value:");
    scanf("%d",&c);
    sum(a,b,c);
}
    void sum(int a,int b,int c){
        printf("answer:");
         printf("%d",a+b+c);

    }                                      
   
