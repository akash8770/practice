//argument with return type.....
// #include<stdio.h>
// int main(){
//     int p(int,int);
//     int a,b,c;
//     int n;
//     for(a=1;a<=4;a++){
//         for(b=1;b<=a;b++){
//             n=p(a,b);
//             printf("%d",n);
//         }
//         printf("\n");
//     }    
// }
// int p(int a,int b){
//     return 1;
// }

//argument with no return type.....

// #include<stdio.h>
// int main(){
//     void p(int,int);
//     int a,b;
//     for(a=1;a<=4;a++){
//         for(b=1;b<=a;b++){
//             p(a,b);
//         }
//         printf("\n");
//     }
// }
// void p(int a,int b){
//     printf("*");
// }

//no argument with return type....

#include<stdio.h>
int p();
int main(){
    int c;
    c=p();
    printf("%d",c);   
}
int p(){
    int a,b;
    for(a=1;a<=4;a++){
        for(b=1;b<=a;b++){
            printf("%d",a);      
        }
         printf("\n");  
             
    }
     return ; 
}