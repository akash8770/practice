//#include<stdio.h>
//int main(){
//      int a,b;
//    for(a=1;a<=4;a++){
//        for(b=1;b<=a;b++){
//            if(a==1||a==3){
//                printf("1");
               
//                } else{
//                    printf("0");
//            }
//        }
//        printf("\n");
//    }
//}

#include<stdio.h>
int main(){
    int a=0;
    while(a<=3){
        int b=0;
        while(b<=a){
            b++;
            if(a==1||a==3){
                printf("0");
            }else{
                printf("1");
            }
        }
          a++;
          printf("\n");
    }
}