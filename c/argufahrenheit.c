//no argument no return type......
// #include<stdio.h>
// void cnvt();
// int main(){
//     printf("celsius convert into fahrenheit\n");
//     cnvt();
// }
// void cnvt(){
//     float c;
//     printf("enter celsius temp:");
//     scanf("%f",&c);
//     printf("fahrenheit=%f",(c*9/5)+32);
// }

//no argument with return type....
// #include<stdio.h>
//  int convert();
//  int main(){
//      float a;
//      printf("convert celsius into fahrenheit\n");
//      a=convert();
//      printf("fahrenheit=%f",a);
// }
//  int convert(){
//      float c;
//      printf("enter celsius temp:");
//      scanf("%f",&c);
//      c=(c*9/5)+32;
//      return c;   
// }

//argument with no return type....
//  #include<stdio.h>
//  int main(){
//      void convert(float);
//      float c;
//      printf("enter celsius temp:");
//      scanf("%f",&c);
//      convert(c);
//  }
//  void convert(float c){
//      printf("fahrenheit=%f",(c*9/5)+32);
//  }

// argument with return type....
#include<stdio.h>
int main(){
    int convert(float);
    float c,a;
    printf("enter celsius temp:");
    scanf("%f",&c);
    a=convert(c);
    printf("fahrenheit=%f",a);
}
int convert(float c){
    return (c*9/5)+32;
}