#include<stdio.h>
int main(){
    int n=1;
    int a;
    printf("enter no.");
    scanf("%d",&a);
    while(n<11){
        printf("%d\n",n*a);
        
        n++;
    }
}