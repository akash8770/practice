#include<stdio.h>
int main(){
    void add(int,int);
   // void sub(int,int);
    int a,b;
    printf("enter 1st value\n");
    scanf("%d",&a);
    printf("enter 2nd value\n");
    scanf("%d",&b);
    add (a,b);
  //  sub (a,b);
}
void add(int a,int b){
    printf("addition is%d\n",a+b);
}
void sub(int a,int b){
    printf("subtraction is%d\n",a-b);
}

