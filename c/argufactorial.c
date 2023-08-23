//no argument no return type....
// #include<stdio.h>
// void facto();
// int main(){
//     printf("factorial\n");
//     facto();
// }
// void facto(){
//     int n,f=1;
//     printf("enter factorial value:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){  
//     f=f*i;
//     }
//     printf("answer=%d",f);  
// }

//no argument with return type....
// #include<stdio.h>
// int fact();
// int main(){
//     printf("factorial");
//     int a=fact();
//     printf("answer=%d",a);
// }
// int fact(){
//     int n,f=1;
//     printf("enter factorial value:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){  
//     f=f*i;  
//     }
//     return f;
// }

//argument with no return type....
// #include<stdio.h>
// int main(){
//     void fact(int,int,int);
//     int n,f=1,i;
//     printf("enter factorial value:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){  
//     f=f*i;     
//     }
//     fact(n,f,i);
// }
// void fact(int n,int f,int i){
//     printf("answer=%d",f);
// }

//argument with return type....
#include<stdio.h>
int main(){
    int fact(int,int);
    int n,f=1,i,r;
    printf("enter factorial value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){  
    f=f*i;     
    }
    r=fact(n,f);
    printf("answer=%d",r);
}
int fact(int n,int f){
    return f;
}