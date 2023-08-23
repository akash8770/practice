//string......
// #include<stdio.h>
// int main(){
//     int i;
//     int a[5]={1,2,3,4,5};
//     for(i=0;i<5;i++){
//       printf("%d",a[i]);
//     }
// }

// #include<stdio.h>
// int main(){
//     char a[20];
//  //   printf("enter name:\n");
//  //   scanf("%s",&a);
//  //   printf("my name is %s\n",a);

//    // printf("name is:");
//    // puts(a);
    
//     printf("enter last name:");
//     gets(a);
//     printf("last name is:");
//     puts(a);
// }

// #include<stdio.h>
// int main(){
//     char s1[]="NIIT";
//    char s2[]={'N','I','I','T','\0'};
//     char s3[5];
//     s3[0]='N';
//     s3[1]='I';
//     s3[2]='I';
//     s3[3]='T';
//     s3[4]='\0';
//     printf("\ns1=%s",s1);
//     printf("\ns2=%s",s2);
//     printf("\ns3=%s",s3);
// }

//  #include<stdio.h>
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

// #include<stdio.h>
// int main(){
//     int i=0;
//     char a[5]="NIIT";
//     while(a[i]!='\0'){
//         printf("%c",a[i]);
//         i++;
//     }
// }

// #include<stdio.h>
// int main(){
//     int i;
//     char a[5]="NIIT";
//     for(i=0;a[i]!='\0';i++){
//         printf("%c",a[i]);
//     }
// }

// #include<stdio.h>
// int main(){
//     int i=0;
//     char a[5]="NIIT";
//     do{
//         printf("%c\n",a[i]); 
//         i++;
//     }
//     while(a[i]!='\0');
// }

//  #include<stdio.h>
// int main(){
//     int i;
//     char a[5]="NIIT";
//     for(i=0;a[i]!='\0';i++){
//         printf("%c\n",a[i]);
//     }
//     printf("total=%d",i);
// }


//reverse in for loop....
// #include<stdio.h>
// int main(){
//     int i;
//     char a[5]="NIIT";
//     for(i=3;a[i]!=0;i--){
//         printf("%c",a[i]);
//     }
// }

//reverse in while loop....
// #include<stdio.h>
// int main(){
//     int i=3;
//     char a[5]="NIIT";
//     while(a[i]!=0){
//         printf("%c",a[i]);
//         i--;
//     }
// }

//reverse in do while.....
// #include<stdio.h>
// int main(){
//     int i=3;
//     char a[5]="NIIT";
//     do{
//         printf("%c",a[i]);
//         i--;
//     }
//     while(a[i]!=0);
// }

//find vowel in str.....
// #include<stdio.h>
// int main(){
//     int i;
//     char a[5]="akash";
//     for(i=0;a[i]!='\0';i++){
//         printf("%c",a[i]); 
//     } 
// }

//find length...
// #include<stdio.h>
// int main(){
//     char ch[]="NIIT";
//     char ch1[4]={'a','\0'};
//     strcat(ch,ch1);
//     printf("%s",ch);
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//    char source[]="RAM";
//    char target[20];
//    strcpy(target,source);
//    printf("\nsource string=%s",source);
//    printf("\ntarget string=%s",target);
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
// char name[10];
// char name2[10];
// printf("enter name:\n");
// fgets(name,10,stdin);
// printf("%s",name);
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
//    char str1[100],str2[100];
//    int i,count=0;
//    printf("enter 1st string:\n");
//    fgets(str1,100,stdin);
//    printf("enter 2nd string:\n");
//    fgets(str2,100,stdin);
//    for(i=0;str1[i]!=0;i++){
//     if(str1[i]==str2[i]){
//         count++;
//     }
//    }
//    if(count==i){
//        printf("both are equal");
//    }else{
//        printf("both are not equal");
//    }
// }


// #include<stdio.h>
// #include<string.h>
// int main(){
//     int a,b=0;
//     char ch[50];
//     printf("enter string\n");
//     scanf("%s",ch);
//     for(a=0;ch[a]!='\0';a++){
//         if((ch[a]=='a')||(ch[a]=='e')||(ch[a]=='i')||(ch[a]=='o')||ch[a]=='u'){
//             b++;
//         }
//     }
//     printf("vowels=%d",b);
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     int a,b=0;
//     char ch[50],ch2[50];
//     printf("enter string\n");
//     scanf("%s",ch);
//     for(a=0;ch[a]!='\0';a++){
//         if((ch[a]=='a')||(ch[a]=='e')||(ch[a]=='i')||(ch[a]=='o')||ch[a]=='u'){
//            // b++;
//            printf("%s",ch);
//         } 
//     }
//    // printf("%d",b);
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char ch[50];
//     int i,b=0;
//     printf("enter string\n");
//     scanf("%s",ch);
//     for(i=0;ch[i]!='\0';i++){
//          switch (ch[i]){
//             case 'a':
//             case 'e':
//             case 'i':
//             case 'o':
//             case 'u':
        
//              b++;
//         }
//     }
//     printf("%d",b);
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char ch[50];
//     int i,b=0;
//     printf("enter string\n");
//     scanf("%s",ch);
//     for(i=0;ch[i]!='\0';i++){
//          switch (ch[i]){
//             case 'a':
//             case 'e':
//             case 'i':
//             case 'o':
//             case 'u':
        
//              b++;
//         }
//     }
//     printf("%d",b);
// }

// #include<stdio.h>
//  void g();
// int main(){
//    printf("count str\n");
//    g();
// }
// void g(){
//   int i;
//   char a[]="hello";
//   for(i=0;a[i]!=0;i++){ 
//   }
//   printf("total str=%d",i);
// }

//no arg return type...
// #include<stdio.h>
// int g();
// int main(){
//     int i;
//     printf("count str\n");
//     i=g();
//     printf("total=%d",i);
// }
//   int g(){
//       int i;
//   char a[]="hello";
//   for(i=0;a[i]!=0;i++){ 
//   }
//          return i;
//   }

// #include<stdio.h>
// int main(){
//     int g(int);
//     int i;
//     printf("count str\n"); 
// }
//   int g(){
//       int i;
//   char a[]="hello world";
//   for(i=0;a[i]!=0;i++){ 
//   }
//          return i;
//   }

// #include<stdio.h>
// int main(){
//     char a[]="hello";
//     int i;
//     for(i=0;a[i]!=0;i--){
//         printf("%s",a);
//     }
// }


// #include<stdio.h>
// struct a1{
//     char rev[25];
// };
// int main(){
//     struct a1 d1;
//     d1.rev[25];
//     printf("enter string:-");
//     scanf("%s",&d1.rev);
//     printf("%s\n",d1.rev);
//    for(int i=5;i>0;i--){
//        printf("%c",d1.rev[i]);
//    }
// }

// #include<stdio.h>
// int main(){
//     int len,w,h;
//     scanf("%d",&len);
//     scanf("%d",&w);
//     scanf("%d",&h);
//     printf("%d",len*w*h);
// }

// #include<stdio.h>
// int main(){
//     char c;
//     int i;
//     long l;
//     float f;
//     double d;
//     long double ld;
//     c='a';
//     i=10;
//     l=100L;
//     f=12.3f;
//     d=12.34;
//     ld=12.34;
//     printf("c=%c\n",c);
//     printf("i=%d\n",i);
//     printf("l=%ld\n",l);
//     printf("f=%f\n",f);
//     printf("d=%lf\n",d);
//     printf("ld=%Lf",ld);
// }

// #include<stdio.h>
// int main(){
//     printf("my\0name is ak");
// }

// #include<stdio.h>
// int main(){
//     unsigned int u;
//     long l;
//     short int s;
//     scanf("%u",&u,printf("ent unsigned\n"));
//     scanf("%ld",&l);
//     scanf("%hd",&s);
//     printf("%u",u);
//     printf("%ld",l);
//     printf("%hd",s);
// }

//pointer.....
// #include<stdio.h>
// int main(){
//     int a=10;
//     int *p;
//     p=&a;
//     printf("a=%d\n",a);
//     printf("&a=%u\n",&a);
//     printf("p=%u\n",p);
//     printf("*p=%d\n",*p);
//     printf("&p=%u",&p);
// }

//  #include<stdio.h>
// int main(){
//     int a=1,b=2,c;
//     int *p=&a;
//     int *q=&b;
//     int *r=&c;
//   //  printf("address of a=%p\n",p);
//   //  printf("address of b=%p\n",q);
//   //  printf("address of c=%p\n",r);
//     *r=*p,*p=*q,*q=*r;
//     printf("now val of a=%d\n",*p);
//     printf("now val of b=%d\n",*q); 
// }

// #include<stdio.h>
// int main(){
//     int p,r,t,si;
//     printf("enter principle:");
//     scanf("%d",&p);
//     printf("enter rate:");
//     scanf("%d",&r);
//     printf("enter time:");
//     scanf("%d",&t);
//     int *a=&p;
//     int *b=&r;
//     int *c=&t;
//     int *d=&si;
//     *d=*a**b**c/100;
//     printf("answer=%d\n",*d); 
// }

// #include<stdio.h>
// void add();
// int main(){
//     printf("addition\n");
//     add();
// }
// void add(){
//     int a=10;
//     int b=20;
//     int *p=&a;
//     int *q=&b;
//     printf("%d",*p+*q);
// }

// #include<stdio.h>
// void add();
// int main(){
//     int a;
//     printf("addition\n");
//     a=add();
//     printf("%d",a);
// }
// void add(){
//     int a=10;
//     int b=20;
//     int *p=&a;
//     int *q=&b;
//     *p=*p+*q;
//     return a;
// }

// #include<stdio.h>
// void display(int *p){
//    int i;
//          for(i=0;i<5;i++){
//         printf("%3d",*(p+i));
//     }  
// }
// int main(){
//     int a[5]={1,2,3,4};
//     disply(a);
// }

// #include<stdio.h>
// int main(){
//     void dis(int);
//     int a[5]={1,2,3,4};
//     int *p=&a;
//     dis(a);
// }
// void dis(int i,int *p){
//     for(i=0;i<5;i++){
//        printf("%d",*(p+i));
//     }  
// }

// #include<stdio.h>
// int main(){
//     int a[3]={1,2,3};
//     int *p=a;
//     for(int i=0;i<3;i++){
//         printf("%d",*p);
//     p++;
//     }
// }


// #include<stdio.h>
// int main(){
//     void swap(int,int,int);
//     void swap2(int,int,int);
//     int a=1,b=2,c;
//     int *x=&a,*y=&b,*z=&c;
//     printf("pointer argument swap\n");
//     swap(a,b,c);
//  //   swap2(&x,&y);
//     swap2(*x,*y,*z);
// }
// void swap(int a,int b,int c){
//    c=a,a=b,b=c;
//    printf("value of a:%d\nvalue of b:%d",a,b);
// }
// void swap2(int *x,int *y,int *z){
//     *z=*x,*x=*y,*y=*z;
//     printf("value of *x:%d\nvalue of *z:%d",*x,*z);   
// }


// #include<stdio.h>
// int main(){
//     void great(int,int);
//     int a=1,b=2;
//     int *p=&a;
//     int *q=&b;
//     great(*p,*q);
// }
// void great(int *p,int *q)

// #include<stdio.h>
// int main(){
//     int i=5;
//     int *p1,**p2,***p3,****p4,*****p5,******p6,*******p7,********p8,*********p9,**********p10,***********p11,************p12,*************p13,**************p14;
//     p1=&i,p2=&p1,p3=&p2,p4=&p3,p5=&p4,p6=&p5,p7=&p6,p8=&p7,p9=&p8,p10=&p9,p11=&p10,p12=&p11,p13=&p12,p14=&p13;
//     printf("1=%d\n",*p1);
//     printf("2=%d\n",**p2);
//     printf("3=%d\n",***p3);
//     printf("4=%d\n",****p4);
//     printf("5=%d\n",*****p5);
//     printf("6=%d\n",******p6);
//     printf("7=%d\n",*******p7);
//     printf("8=%d\n",********p8);
//     printf("9=%d\n",*********p9);
//     printf("10=%d\n",**********p10);
//     printf("11=%d\n",***********p11);
//     printf("12=%d\n",************p12);
//     printf("13=%d\n",*************p13);
//     printf("14=%d\n",**************p14);
// }

// #include<stdio.h>
// int main(){
//    if(printf("hello world")){
//    }
//    printf("hello"):printf("world")?
// }

// #include<stdio.h>
// int main(){
//     char a[]="hello world";
//     for(int i=0;a[i]!='\0';i++){
//          printf("%c",a[i]);
//     } 
// }

// #include<stdio.h>
// int main(){
//     while(printf("hello world")){
//         break;
//     }
// }

// #include<stdio.h>
// #define ak main
// int ak(){
//     printf("hello world");
// }

// #include<stdio.h> 
// int main(){
//     int n;
//     printf("enter no:");
//     scanf("%d",&n);
//     for(int i=0;i>0;i++){
//     }
// }

// #include<stdio.h>    
// #include<stdlib.h>  
// int main(){  
// long int n,sum=0,r;    
// printf("enter number=");    
// scanf("%ld",&n);    
// while(n>0)    
// {    
// r=n%10;    
// sum=sum*10+r;    
// n=n/10;    
// }    
// n=sum;    
// while(n>0)    
// {    
// r=n%10;    
// switch(r)    
// {    
// case 1:    
// printf("one ");    
// break;    
// case 2:    
// printf("two ");    
// break;    
// case 3:    
// printf("three ");    
// break;    
// case 4:    
// printf("four ");    
// break;    
// case 5:    
// printf("five ");    
// break;    
// case 6:    
// printf("six ");    
// break;    
// case 7:    
// printf("seven ");    
// break;    
// case 8:    
// printf("eight ");    
// break;    
// case 9:    
// printf("nine ");    
// break;    
// case 0:    
// printf("zero ");    
// break;    
// default:    
// printf("tttt");    
// break;    
// }    
// n=n/10;    
// }    
// return 0;  
// }  

// #include<stdio.h>
// int main(){
//     int a[2][2];
//     int b[2][2];
//     int i,j;
//     printf("enter first no\n");
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){  
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("%d",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("enter second no\n");
//      for(i=0;i<2;i++){
//         for(j=0;j<2;j++){   
//             scanf("%d",&b[i][j]);    
//         }   
//     }
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){   
//             printf("%d",b[i][j]);
//         } 
//         printf("\n");         
//     }
//     printf("ans is:-\n");
//         if(a[i][j]==b[i][j]){
//         printf("both are equal");
//      }else{
//         printf("not equal");
//      }
// }

// #include<stdio.h>
// int main(){
//     int a[3][3];
//     int b[3][3];
//  //   int c[3][3];
//     int i,j;
//     printf("enter first no\n");
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){  
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("%d",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("enter second no\n");
//      for(i=0;i<2;i++){
//         for(j=0;j<2;j++){   
//             scanf("%d",&b[i][j]);
//         }   
//     }
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("%d",b[i][j]);
//            // c[i][j]=a[i][j]==b[i][j];
//         //   c[i][j]=a[i][j];
//         }
//         printf("\n");
//     }
//     printf("ans is:-\n");
//    // for(i=0;i<3;i++){
//    //     for(j=0;j<3;j++){
//         //    printf("%d",c[i][j]);
//    //     }
//    //     printf("\n");
//    // }
//    if( a[i][j]==b[i][j]){
//     printf("both are equal");

//     }else{
//         printf("not equal");
//     }
// }

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
// int main(){
//     int a[3][3];
//     int b[3][3];
//     int c[3][3];
//     int i,j,k;
//     printf("enter first no\n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){  
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%4d",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("enter second no\n");
//      for(i=0;i<3;i++){
//         for(j=0;j<3;j++){   
//             scanf("%d",&b[i][j]);    
//         }   
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){   
//         c[i][j]=0;
//         for(k=0;k<3;k++){
//              c[i][j]+=a[i][k]*b[k][j];
//             }
//         }          
//     }
//     printf("ans is:-\n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%5d",c[i][j]);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=0;i<6;i++){
//         for(j=0;j<8;j++){
//          printf("*");
//         }  
//         printf("\n");
//     }
// }



//............................
// #include<stdio.h>
// int main()
// {
//     int i,j,k;
//     for(i=0;i<=5;i++){
//         for(j=0;j<=5;j++){
           
//         }
//          if(i==0||i==5||j==0||j==5){
//             printf("*");
//          }else{
//             printf(" ");
//          }
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int a[10];
//     int b[10];
//     int c,d,e;
//     int i,j,k,m;
//     printf("enter num \n");
//     for(i=0;i<10;i++){
//        scanf("%d",&a[i]);
//     }
//     for(j=0;j<10;j++){
//        printf("%d",a[j]);
//     }
//     printf("enter number\n");
//     scanf("%d",&c);
//     for(k=c;k<10;k++)
//     {
       
//         printf("%d",a[k]); 
//         d=c-10;
//     }
//     for(m=0;m<d;m++){
//         printf("%d",b[m]);
//     }
    
// }

// #include<stdio.h>
// int main(){
//     int i,j,k,f;
//     printf("enter no:\n");
//     scanf("%d",&f);
//     for(i=1;i<=f;i++){
//         for(j=1;j<=i;j++){
//               printf(" ");
//         }
//           for(k=i;k<=f;k++){
//             printf("* ");
//           }
//           printf("\n");
//     }
// }

//#include<stdio.h>
//int main(){
//    int a;

//}


// #include<stdio.h>
// int main()
// {
//     int a=10;
//     int b=20;
//     int c=30;
//     int d=40;
//     (a>b&&a>c&&a>d)?printf("a is greater"):(b>a&&b>c&&b>d)?printf("b is greater"):(c>a&&c>b&&c>d)?printf("c is greater"):(d>b&&d>c&&d>a)?printf("d is greater");
// }

// #include <stdio.h>
// int main() {
//   char name[20];
//   int i, j, height;
//   printf("Enter your name: ");
//   scanf("%s", name);
//   for (i = 0; i < 10; i++) {
//     //for(j=0;j< 10;j++){
//     //}
//     printf(" * ");
//   }
//   printf("\n");
//   for (i = 0; i < height - 2; i++) {
//    printf("*");
//   }
   
//   for (i = 0; i < 10; i++) {
//     printf(" * ");
//   }
//   printf("\n");

//   return 0;
// }


 //printf(" %s \n", name);


 //pattern print square under name.....
// #include <stdio.h>
// int main(){
//     int i, j,k;
//     for(i=1; i<=10; i++)
//     {
//         for(j=1; j<=10; j++)
//         {     
//             if(i==1 || i==10 || j==1||j==10 )
//             { 
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//             printf(" ");          
//     }
//      printf("\n"); 
//                if(i==5){
//         printf("       akash");
//      } 
//   } 
// }