//argument with return type...

// #include<stdio.h>
// int main(){
//     int cube(int);
//     int a,c;
//     printf("enter no:");
//     scanf("%d",&a);
//     c=cube(a);
//     printf("%d",c);
// }
// int cube(int a){
//     return a*a*a;
// }

//argument with no return type...

// #include<stdio.h>
// int main(){
//     void cube(int);
//     int a;
//     printf("enter no:");
//     scanf("%d",&a);
//     cube(a);
// }
// void cube(int a){
//     printf("%d",a*a*a);
// }

//no argument with return type....

// #include<stdio.h>
// int cube();
// int main(){
//     int x;
//     printf("cube\n");
//     x=cube();
//     printf("%d",x);
// }
// int cube(){
//     int a;
//     printf("enter no:");
//     scanf("%d",&a);
//     a=a*a*a;
//     return a;
// }

//no argument no return type....

#include<stdio.h>
void cube();
int main(){
    printf("cube\n");
    cube();
}
void cube(){
    int a;
    printf("enter no:");
    scanf("%d",&a);
    printf("%d",a*a*a);
}