//argument with return type.....

// #include<stdio.h>
// int main(){
//     int sum(int,int);
//     int a,b,r;
//     printf("enter 1st value:");
//     scanf("%d",&a);
//     printf("enter 2nd value:");
//     scanf("%d",&b);
//     r=sum(a,b);
//     printf("%d",r);

// }
// int sum(int a,int b){
//     return a+b;
// }

// #include<stdio.h>
// int main(){
//     int sum(int,int);
//     int sub(int,int);
//     int a,b,r,f;
//     printf("enter 1st value:");
//     scanf("%d",&a);
//     printf("enter 2nd value:");
//     scanf("%d",&b);
//     r=sum(a,b);
//     printf("sum is%d\n",r);
//     f=sub(a,b);
//     printf("sub is%d",f);

// }
// int sum(int a,int b){
//     return a+b;
// }
// int sub(int a,int b){
//     return a-b;
// }

#include<stdio.h>
int main(){
    int cir(float,int);
    float pie=3.14;
    int r,c;
    printf("enter radius");
    scanf("%d",&r);
    c=cir(pie,r);
    printf("area of circle is%d",c);
}
int cir(float pie,int r){
    return pie*r*r;

}