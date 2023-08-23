#include<stdio.h>
int main(){
   int a;
   
    printf("enter any value\n");
    scanf("%d",&a);
    
    if(a==1){
    printf("monday");
    }else if(a==2){
        printf("tuesday");
    }else if(a==3){
        printf("wed");
    }else if(a==4){
        printf("thurs");
    }else if(a==5){
        printf("friday");
    }else if(a==6){
        printf("sat");
    }else if(a==7){
        printf("sun");
    }else{
        printf("wrong value");
    }
}
