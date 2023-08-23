// arr pass string
#include<stdio.h>
#include<string.h>
void str(char x[]);
int main(){
    char a[]="chunnu";
    str(a);
}
void str(char x[]){
      int i;
      printf("%s",x);
      for(i=0;x[i]!='\0';i++){
        printf("%c",x[i]);
      }
}

// #include<stdio.h>
// void printstring(char s1[]);
// int main(){
//    char name[25];
//    printf("enter name here:-");
//    scanf("%s",name);
//    printf("your name is %s",name);
//    return 0;
// }
// void printstring(char s1[]){
//    for(int i=0;s1[i]!='\0';i++){
//        printf("%c",s1[i]);
//    }
// }

