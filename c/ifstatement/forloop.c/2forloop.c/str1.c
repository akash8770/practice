// #include<stdio.h>
// int main(){
// char str[25];
// printf("enter name:-");
// scanf("%s",str);
// printf("\nname=%s",str);
// printf("\nname=");
// puts(str);
// }

//#include<stdio.h>
//int main(){
//    char str[100];
//    printf(" ---------------\n");
//    printf("| name:- akash  |\n");
//    printf("| adrs:-bhilai  |\n");
//    printf("| cls:-14       |\n");
//    printf(" ---------------");

//}

// #include<stdio.h>
// int main(){
//    char s1[]="RAM";
//    char s2[]={'R','A','M'};
//    char s3[5];
//    s3[0]='R';
//    s3[1]='A';
//    s3[2]='M';
//    printf("\ns1=%s",s1);
//    printf("\ns2=%s",s2);
//    printf("\ns3=%s",s3);
// }

//#include<stdio.h>
//int main(){
//    char s1[]="RAM";
//    int i=0;
//    while(s1[i]!='\0'){
//        printf("\n%c",s1[i]);
//        i++;
//    }
//}

//take a string input from the user using %c.
//#include<stdio.h>
//int main(){
//    char s1[100];
//    char ch;
//    int i=0;
//    while(ch!='\n'){
//        scanf("%c",&ch);
//        s1[i]=ch;
//        i++;
//    }
//    s1[i]='\0';
//    puts(s1);
//}

// #include<stdio.h>
// void printstring(char s1[]);
// int main(){
//    char firstname[]="akash ";
//    char secondname[]="gill";
//    printstring(firstname);
//    printstring(secondname);
//    return 0;
// }
// void printstring(char s1[]){
//    for(int i=0;s1[i]!='\0';i++){
//        printf("%c",s1[i]);
//    }
// }

// #include<stdio.h>
// //void printstring(char s1[]);
// int main(){
//    char name[25];
//    printf("enter name here:-");
//    scanf("%s",name);
//    printf("your name is %s",name);
//    return 0;
// }
//  void printstring(char s1[]){
//     for(int i=0;s1[i]!='\0';i++){
//         printf("%c",s1[i]);
//     }
// }

// count string length...........
// #include<stdio.h>
// int countlength(char s1[]);
// int main(){
//    char name[100];
//    printf("enter name here:");
//    fgets(name,100,stdin);
//    printf("length is:%d",countlength(name));
//    return 0;
// }
// int countlength(char s1[]){
// int count=0;
//    for(int i=0;s1[i]!='\0';i++){
//        count++;
//    }
//    return count-1;
// }

//#include<stdio.h>
//#include<string.h>
//void printstring(char s1[]);
//int countlength(char s1[]);
//int main(){
//    char name[]="akash";
//    int length=strlen(name);
//    printf("length is:%d",length);
//    return 0;
//}
//int countlength(char s1[]){
//int count=0;
//    for(int i=0;s1[i]!='\0';i++){
//        count++;
//    }
//    return count-1;
//}


//string copy....................
// #include<stdio.h>
// #include<string.h>
// int main(){
//    char source[]="RAM";
//    char target[20];
//    strcpy(target,source);
//    printf("\nsource string=%s",source);
//    printf("\ntarget string=%s",target);
// }

//concatinate........................
// #include<stdio.h>
// #include<string.h>
// int main(){
//    char firststr[100]="akash";
//    char secondstr[]="gill";
//    strcat(firststr,secondstr);
//    puts(firststr);
// }

//diffrence gap string num...................
// #include<stdio.h>
// #include<string.h>
// int main(){
//    char firststr[]="a";
//    char secondstr[]="e";
//    printf("%d\n",strcmp(secondstr,firststr));
// }

//compare string...................
// #include<stdio.h>
// #include<string.h>
// void printstring(char str1[],char str2[]);
// int main(){
//    char str1[100],str2[100];
//    printf("enter 1st string:\n");
//    fgets(str1,100,stdin);
//    printf("enter 2nd string:\n");
//    fgets(str2,100,stdin);
//    if(strcmp(str1,str2)){
//        printf("both are not equal");
//    }else{
//        printf("both are equal");
//    }
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//    char str[20];
//    printf("ent string:");
//    scanf("%s",str);
//    printf("string is:%s",str);
//    printf("\nreverse string is:%d",strrev(str));
//    return 0;
// }

//swap program...............................
// #include<stdio.h>
// #include<string.h>
// void printstring(char n1[],char n2[],char n3[]);
// int main(){
//     char n1[]="chunnu";
//     char n2[]="munnu";
//     char n3[]="";
//     n3=n1;n1=n2;n2=n3;
//     puts(n1);  
// }

// #include<stdio.h>
// int main(){
//     int i;
//     int n;
//     printf("enter no:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         printf("%d\n",i);
//     }
//     printf("%d",i+n);
// }