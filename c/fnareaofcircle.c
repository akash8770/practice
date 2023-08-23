#include<stdio.h>
int main(){
    void area(float,int);
    float pi;
    int r;
    printf("area of circle\n");
    printf("enter value of r:");
    scanf("%d",&r);
    pi=3.14;
    area(pi,r);
}
void area(float pi,int r){
    printf("answer is%f",pi*r*r);
}






