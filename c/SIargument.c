//argument with no return type:

//#include<stdio.h>
//int main(){
//    void si(int,int,int);
//    int p,r,t;
//    printf("enter principle\n");
//    scanf("%d",&p);
//    printf("enter rate\n");
//    scanf("%d",&r);
//    printf("enter time\n");
//    scanf("%d",&t);
//    si(p,r,t);
//}
//void si(int p,int r,int t){
//    printf("answer is%d",p*r*t/100);
//}

//argumemnt with return type:

//#include<stdio.h>
//int si();
//int main(){
//    int a;
//    printf("simple intrest\n");
//    a=si();
//    printf("%d",a);
//}
//int si(){
//    int p,r,t,n;
//    printf("enter principle\n");
//    scanf("%d",&p);
//    printf("enter rate\n");
//    scanf("%d",&r);
//    printf("enter time\n");
//    scanf("%d",&t);
//    n=(p*r*t)/100;
//    return n;

//}

//no argumnet no returntype:

// #include<stdio.h>
// void si();
// int main(){
//     printf("simple intrest\n");
//     si();
// }
// void si(){
//     int p,r,t,n;
//      printf("enter principle\n");
//      scanf("%d",&p);
//      printf("enter rate\n");
//      scanf("%d",&r);
//      printf("enter time\n");
//      scanf("%d",&t);
//      n=(p*r*t)/100;
//      printf("answer is%d",n);
// }

#include<stdio.h>
int main(){
     int i=10;
     while(i<0){
     printf("%d",i);
     i--;
     }    
}