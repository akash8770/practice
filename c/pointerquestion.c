//1.write a pointer program to find maximum b/w two num..
// #include<stdio.h>
// int main(){
//     int a=10,b=20;
//     printf("a=%d\nb=%d\n",a,b);
//     printf("&a=%p\n&b=%p\n",&a,&b);
//     int *p,*q;
//      p=&a;
//      q=&b;
//      printf("p=%p\nq=%p\n",p,q);
//      printf("*p=%d\n*q=%d\n",*p,*q);
//     if(a>b){
//         printf("%d is max",*p);
//     }else{
//         printf("%d is max",*q);
//     }
// }

//2.write a pointer c program to find max b\w three num..
// #include<stdio.h>
// int main(){
//     int a=5,b=10,c=15;
//     printf("a=%d\nb=%d\nc=%d\n",a,b,c);
//     printf("&a=%p\n&b=%p\n&c=%p\n",&a,&b,&c);
//     int *aa,*bb,*cc;
//     aa=&a;bb=&b;cc=&c;
//     printf("aa=%p\nbb=%p\ncc=%p\n",aa,bb,cc);
//     printf("*aa=%d\n*bb=%d\n*cc=%d\n",*aa,*bb,*cc);
//     if(a>b&&a>c){
//         printf("%d is max",a);
//     }else if(b>a&&b>c){
//         printf("%d is max",b);
//     }else{
//         printf("%d is max",c);
//     }  
// }

//3.write a pointer c pro. to check whether a num is neg pos or zero.
// #include<stdio.h>
// int main(){
//     int num=-0,*adrs;
//     printf("num=%d\n",num);
//     printf("&num=%p\n",&num);
//     adrs=&num;
//     printf("adrs=%p\n",adrs);
//     printf("*adrs=%d\n",*adrs);
//     if(num<0){
//         printf("neg");
//     }if(num>0){
//         printf("posi");
//     }if(num==0){
//         printf("zero");
//     }
// }

//4.write a pointer pro. to check whether a num is div by 5 & 11 or not..
// #include<stdio.h>
// int main(){
//     int num=110,*adrs;
//     printf("num=%d\n",num);
//     printf("&num=%p\n",&num);
//     adrs=&num;
//     printf("adrs=%p\n",adrs);
//     printf("*adrs=%d\n",*adrs);
//     if(num%5==0&&num%11==0){
//         printf("divisible");
//     }else{
//         printf("not divisible");
//     }
// }

//5.write a pro. to check whether a num is even or odd.
// #include<stdio.h>
// int main(){
//     int a=101,*adrs;
//     printf("a=%d\n",a);
//     printf("&a=%p\n",&a);
//     adrs=&a;
//     printf("adrs=%p\n",adrs);
//     printf("*adrs=%d\n",*adrs);
//     if(a%2==0){
//         printf("even");
//     }else{
//         printf("odd");
//     }
// }

//6.write a c pro. to check whether a year is leap year or not.
// #include<stdio.h>
// int main(){
//     int year=2024,*adrs;
//     printf("year=%d\n",year);
//     printf("&year=%p\n",&year);
//     adrs=&year;
//     printf("adrs=%p\n",adrs);
//     printf("*adrs=%d\n",*adrs);
//     if(year%4==0){
//         printf("leap year");
//     }else{
//         printf("not leap year");
//     }
// }

//7.write a c program to check whether a char is alphabet or not.
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("enter alphabet\n");
//     scanf("%c",&ch);
//     if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
//         printf("alphabet");
//     }else{
//         printf("not alpha");
//     }
// }

//8.write a c pro. to input any alphabet and check whether it is vowel or consonant.
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("enter alphabet:");
//     scanf("%c",&ch);
//     if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')){
//         printf("vowel");
//     }else{
//         printf("consonant");
//     }
// }

//question 9 ascii value.......
//9.write a c prog to input any char and check whether it is alphabet,digit or special char.
// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter ascii no");
//     scanf("%d",&a);
//     if((a>=97&&a<=122)||(a>=65&&a<=90)){
//         printf("alphabet");
//     }else if(a>=48&&a<=57){
//         printf("digit");
//     }else{
//         printf("special character");
//     }
// }

//10.write a pro. to check whether a char is uppercase or lowercase alphabet.
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("enter alphabet to find upper or lower case:");
//     scanf("%c",&ch);
//     if(ch>='a'&&ch<='z'){
//         printf("lower case alphabet");
//     }if(ch>='A'&&ch<='Z'){
//         printf("upper case alphabet");
//     }else{
//         printf("opps");
//     }
// }
