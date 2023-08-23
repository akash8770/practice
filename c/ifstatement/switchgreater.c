#include<stdio.h>
int main(){
    char ch;
printf("enter any +,-,*,/\n");
scanf("%c",&ch);
// THIS IS FIRST SWITCH
switch(ch){
     case 'a':printf("first vowel is a");
     int a;
     printf("put no for day\n");
     scanf("%d",&a);
     break;
     case 'b':printf("second vowel is e");
     break;
     case 'c':printf("third vowel is i");
     break;
     case 'd':prntf("fourth vowel is o");
     break;
     case 'e':printf("last vowel is u");
     break;
     default:printf("opps");
   }
}