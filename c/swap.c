// #include<stdio.h>
// int main(){
//    int a,b,c;
//    printf("enter first no:-\n");
//    scanf("%d",&a);
//    printf("enter second no:-\n");
//    scanf("%d",&b);
//    c=a;a=b;b=c;
//    printf("value of a%d",a);
//    printf("value of b%d",b);
// }

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter a value:-\n");
//     scanf("%d",&a);
//     printf("enter b value:-\n");
//     scanf("%d",&b);
//     a=a+b;b=a-b;a=a-b;
//     printf("value of a %d\n",a);
//     printf("value of b %d",b);
// }

#include<stdio.h>
int main(){
    int a,b;
    printf("enter a value:-\n");
    scanf("%d",&a);
    printf("enter b value:-\n");
    scanf("%d",&b);
    a=a*b;b=a/b;a=a/b;
    printf("value of a %d\n",a);
    printf("value of b %d",b);
}