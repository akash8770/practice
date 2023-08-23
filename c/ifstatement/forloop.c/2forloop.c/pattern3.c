//#include<stdio.h>
//int main(){
//    int a,b;
//    for(a=1;a<=4;a++){

//        for(b=1;b<=a;b++){
//                printf("%d",b);
           
//            }
//             printf("\n");
//        }
        
       
//    }
    
#include<stdio.h>
int main(){
    int a=0;
    while(a<=3){
        int b=0;
        while(b<=a){
            b++;
            printf("%d",b);
        }
        a++;
        printf("\n");
    }
}    