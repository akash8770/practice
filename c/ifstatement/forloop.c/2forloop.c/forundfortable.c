#include<stdio.h>
int main(){
    int a,b;
    for(a=1;a<=10;a++){
        for(b=1;b<=9;b++){
            if(a==11||b==1){
                 printf("%2d",a*2);
            }if(a==11||b==2){
                printf(" %2d",a*3);
            }if(a==11||b==3){
                printf(" %2d",a*4);
            }if(a==11||b==4){
                printf(" %2d",a*5);
            }if(a==11||b==5){
                printf(" %2d",a*6);
            }if(a==11||b==6){
                printf(" %2d",a*7);
            }if(a==11||b==7){
                printf(" %2d",a*8);
            }if(a==11||b==8){
                printf(" %2d",a*9);
            }if(a==11||b==9){
                printf("%3d",a*10);
            }
           
           
           
           
           
           

        }
        printf("\n");
    }
}