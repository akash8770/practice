#include<stdio.h>
int main(){
    int a;
    printf("switch value\n");
    scanf("%d",&a);
    switch(a){
        case 1: printf("hello");
             break;
        case 2: printf("world");
             break;
        default: printf("invalid");
    }
}