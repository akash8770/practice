//return argument;

#include<stdio.h>
int add();
int sub();
int main(){
    int i,j;  
    printf("hello\n");
    i=add();
    printf("%d",i);
    j=sub();
    printf("%d",j);  
}
int add(){
    int a,b;
    printf("enter add 1st value\n");
    scanf("%d",&a);
    printf("enter add 2nd value\n");
    scanf("%d",&b);
    return a+b;

}
int sub(){
    int a,b;
    printf("enter sub value\n");
    scanf("%d",&a);
    printf("enter sub 2nd value\n");
    scanf("%d",&b);
    return a-b;
}