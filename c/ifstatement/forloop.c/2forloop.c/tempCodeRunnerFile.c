#include<stdio.h>
#include<string.h>
int main(){
   char str[20];
   printf("ent string:");
   scanf("%s",str);
   printf("string is:%s",str);
   printf("\nreverse string is:%d",strrev(str));
   return 0;
}