//in swap argument with no return type.....

#include<stdio.h>
int main(){
    void swap(int,int);
       int a,b;
    printf("enter a value:-\n");
    scanf("%d",&a);
    printf("enter b value:-\n");
    scanf("%d",&b);
    a=a+b;b=a-b;a=a-b;
    swap(a,b);
}
   void swap(int a,int b){
    printf("a is%d",a+b);
    printf("b is%d",b);
}

//swap no argument with return type.....

// #include<stdio.h>
// int swap();
// int main(){
//     int a;
//     printf("swap function\n");
//     a=swap();
//     printf("%d",a);
// }
// int swap(){
//         int a,b;
//     printf("enter a value:-\n");
//     scanf("%d",&a);
//     printf("enter b value:-\n");
//     scanf("%d",&b);
//     a=a+b;b=a-b;a=a-b;
//     return a;
// }

//no argument no return......

// #include<stdio.h>
// void swap();
// int main(){
//     printf("swap funtion\n");
//     swap();
// }
// void swap(){
//         int a,b;
//     printf("enter a value:-\n");
//     scanf("%d",&a);
//     printf("enter b value:-\n");
//     scanf("%d",&b);
//     a=a+b;b=a-b;a=a-b;
//     printf("a is%d",a+b);
//     printf("b is%d",b);

// }