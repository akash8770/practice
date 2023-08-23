//no argument no return type....
// #include<stdio.h>
// void convert();
// int main(){
//     printf("convert fahrenheit into celsius\n");
//     convert();
// }
// void convert(){
//     float f;
//     printf("enter fahrenheit temp:");
//     scanf("%f",&f);
//     printf(celsius="%f",(f-32)*5/9);
// }

//no argument with return type....
// #include<stdio.h>
// int convert();
// int main(){
//     float a;
//     printf("convert fahrenheit into celsius\n");
//     a=convert();
//     printf("celsius=%f",a);
// }
// int convert(){
//     float f;
//     printf("enter fahrenheit temp:");
//     scanf("%f",&f);
//     f=(f-32)*5/9;
//     return f;   
// }

//argument with no return type....
// #include<stdio.h>
// int main(){
//     void convert(float);
//     float f;
//     printf("enter fahrenheit temp:");
//     scanf("%f",&f);
//     convert(f);
// }
// void convert(float f){
//     printf("celsius=%f",(f-32)*5/9);
// }

// argument with return type....
#include<stdio.h>
int main(){
    int convert(float);
    float f,a;
    printf("enter fahrenheit temp:");
    scanf("%f",&f);
    a=convert(f);
    printf("celsius=%f",a);
}
int convert(float f){
    return (f-32)*5/9;
}