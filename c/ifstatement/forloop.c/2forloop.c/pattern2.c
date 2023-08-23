//#include<stdio.h>
//int main(){
//    int a,b;
//    for(a=1;a<=4;a++){

//        for(b=1;b<=a;b++){
//            printf("%d",a);
           
//            }
//             printf("\n");
//        }
        
       
//    }
    
#include<stdio.h>
int main(){
    int a=1;
    while(a<=4){
        int b=1;
        while(b<=a){
            b++;
            printf("%d",a);
        }
        a++;
        printf("\n");
    }
}    