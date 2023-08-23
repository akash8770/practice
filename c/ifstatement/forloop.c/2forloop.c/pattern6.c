#include<stdio.h>
int main(){
    int a,b;
     for(a=1;a<=4;a++){
         for(b=1;b<=a;b++){
            printf("%c",b+96);
         }//64 for capital..
         printf("\n");
    }
}