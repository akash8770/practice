//#include<stdio.h>
//int main(){
//    int i=1;
//    while(i<=10){
//        printf("2*%d=",i);
//        printf("%d\n",i*2);
//        i++;
 //   }

//}

#include<stdio.h>
int main(){
    int i=1;
    int j;
    printf("table of\n");
    scanf("%d",&j);
    while(i<=10){
        printf("%d*%d=%d\n",j,i,i*j);
        i++;
        
    }
}