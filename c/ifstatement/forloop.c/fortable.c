

//#include<stdio.h>
//int main(){
//    int x;
//    for(x=1;x<=10;x++){
//        printf("2*%d=",x);
    
//        printf("%d\n",x*2);
//    }
//}

#include<stdio.h>
int main(){
    int j;
    int k;
    printf("enter no\n");
    scanf("%d",&k);
    for(j=1;j<=10;j++){
        printf("%d",k);
        printf("*%d=",j);
        printf("%d\n",k*j);
    }
}
