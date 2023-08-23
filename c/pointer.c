// #include<stdio.h>
// int main(){
//    int a=10;
//    int *p=&a;
//    printf("%d\n",a);
//    printf("%p\n",&a);
//    printf("%p\n",p);
//    printf("%d",*p);
// }

// #include<stdio.h>
// int main(){
//     int a=10,b=20,c=30,d;
//     int *p=&a;
//     int *q=&b;
//     int *r=&c;
//     printf("value of int a=%d b=%d c=%d \n",a,b,c);
//     printf("address of a=%p \n",&a);
//     printf("address of b=%p \n",&b);
//     printf("address of c=%p \n",&c);
//     printf("address of a under p=%p\n",p);
//     printf("address of b under q=%p\n",q);
//     printf("address of c under r=%p\n",r);
//     d=*p+*q+*r;
//     int *s=&d;
//     printf("sum of a+b+c answer: %d\n",d);
//     printf("address of s=%p",s);
// }

//pointer swap using third variable.......
// #include<stdio.h>
// int main(){
//     int a=1,b=2,c;
//     int *p=&a;
//     int *q=&b;
//     int *r=&c;
//     printf("address of a=%p\n",p);
//     printf("address of b=%p\n",q);
//     printf("address of c=%p\n",r);
//     *r=*p,*p=*q,*q=*r;
//     printf("now val of a=%d\n",*p);
//     printf("now val of b=%d\n",*q); 
// }

//pointer swap using two variable.......
// #include<stdio.h>
// int main(){
//     int a=10,b=5;
//     int *p=&a;
//     int *q=&b;
//     printf("address of a=%p\n",p);
//     printf("address of b=%p\n",q);
//     //a=a+b;b=a-b;a=a-b;
//     *p=*p+*q;*q=*p-*q;*p=*p-*q;
//     printf("now value of a=%d\n",*p);
//     printf("now value of b=%d",*q);
// }

//pointer even & odd.....
// #include<stdio.h>
// int main(){
//     int a=1;
//     int *p=&a;
//     if(*p%2==!0){
//         printf("even\n");
//     }else{
//         printf("odd\n");
//     }
//     printf("address of a=%p",p);
// }

//pointer sum using scanf.......
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter 1st no:");
//     scanf("%d",&a);
//     printf("enter 2nd n0:");
//     scanf("%d",&b);
//     int *p=&a;
//     int *q=&b;
//     int *r=&c;
//     *r=*p+*q;
//     printf("answer=%d\n",*r);
//     printf("address of a=%p\n",p);
//     printf("address of b=%p\n",q);
//     printf("address of c=%p\n",r);
// }

//pointer simple intrest......
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
// int main(){
//     int a=10;
//     int *p=&a;
//     printf("%d\n",a);
//     printf("%u\n",&a);
//     printf("%u\n",p);
//     printf("%u\n",&p);
//     printf("%u",*p);
// }

// #include<stdio.h>
// int main(){
//     int a=10;
//     int *p;
//     int **pp;
//     p=&a;
//     pp=&p;
//     printf("%d\n",a);
//     printf("%u\n",p);
//     printf("%u\n",pp);
//     printf("%d\n",*p);
//     printf("%d\n",**pp);
//     printf("%d\n",&p);
//     printf("%d\n",&pp);
// }

// #include<stdio.h>
// int main(){
//     int a=10,b=20,c=30;
//     int *p;
//     p=&a;
//     printf("%d\n",*p);
//     p=&b;
//     printf("%d\n",*p);
//     p=&c;
//     printf("%d\n",*p);
// }

// #include<stdio.h>
// int main(){
//     int a=10;
//     int *p1,*p2,*p3;
//      p1=&a;
//      p2=&a;
//      p3=&a;
//     printf("%d\n",*p1);
//     printf("%d\n",*p2);
//     printf("%d\n",*p3);
//     *p2=50;
//     printf("%d\n",*p1);
//     printf("%d\n",*p2);
//     printf("%d\n",*p3);
//     *p3=*p1+*p2;
//     printf("%d\n",*p1);
//     printf("%d\n",*p2);
//     printf("%d\n",*p3);
// }

//pointer array........
// #include<stdio.h>
// int main(){
//     int a[]={1,2,3,4};
//     for(int b=0;b<4;b++){
//          printf("%d",a[b]);
//     }
// }

//pointer using function........
// #include<stdio.h>
// int main(){
//     int a=1,b=2;
//     void value(int a,int b);
//     void refer(int *x,int *y);
//     printf("\n before calling value: a=%d\tb=%d",a,b);
//     value(a,b);
//     printf("\n after calling value: a=%d\tb=%d",a,b);
//     printf("\n before calling value: a=%d\tb=%d",a,b);
//     refer(&a,&b);
//     printf("\n after calling value: a=%d\tb=%d",a,b);
// }
// void value(int a,int b){
//     a=5;
//     b=10;
//     printf("\nvalue with function: a=%d\tb=%d",a,b);
// }
// void refer(int *x,int *y){
//     *x=5;
//     *y=10;
//     printf("\nvalue with function: *x=%d\t*y=%d",*x,*y);
// }

//pointer argument swap using 3rd variable.......
// #include<stdio.h>
// int main(){
//     void swap(int,int,int);
//     void swap2(int,int,int);
//     int a=1,b=2,c;
//     int *x=&a,*y=&b,*z=&c;
//     printf("pointer argument swap\n");
//     swap(a,b,c);
// //    swap2(&x,&y);
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
// void change(int *a,int *b){
//     int *c;
//     *c=*a;
//     *a=*b;
//     *b=*c;
// }
// int main(void){
//     int a,b;
//     printf("\n enter the value of a:-");
//     scanf("%d",&a);
//     printf("enter the value of b:-");
//     scanf("%d",&b);
//     change(&a,&b);
//     printf("\n\n after interchange the new value are:-a=%d,b=%d",a,b);
// }

// #include<stdio.h>
// int main(){
//     int a=10,b=20,*x,*y;
//     printf("a=%d\nb=%d\n",a,b);
//     printf("&a=%p\n&b=%p\n",&a,&b);
//     x=&a;
//     y=&b;
//     printf("x=%p\ny=%p\n",x,y);
//     printf("*x=%d\n*y=%d\n",*x,*y);
//     if(a>b){
//         printf("a is greater");
//     }else{
//         printf("b is greater");
//     }
// }
 
 //swap pointer pro. using 3 var.....
//  #include<stdio.h>
//  int main(){
//     int a=10,b=20,c;
//     int *aa=&a,*bb=&b,*cc=&c;
//     *cc=*aa;*aa=*bb;*bb=*cc;
//     printf("a=%d\n",a);
//     printf("b=%d\n",b);
//     printf("*aa=%d\n",*aa);
//     printf("*bb=%d\n",*bb);
//  }

//pointer swap using function.....
// #include<stdio.h>
// void swap();
// int main(){
//     printf("pointer swap pro. using function\n");
//     swap();
// }
// void swap(){
//     int a=10,b=20,c;
//     int *aa=&a,*bb=&b,*cc=&c;
//     *cc=*aa;*aa=*bb;*bb=*cc;
//     printf("a=%d\n",a);
//     printf("b=%d\n",b);
//     printf("*aa=%d\n",*aa);
//     printf("*bb=%d\n",*bb);
// }

//pointer swap using argument.....
// #include<stdio.h>
// void swap(int *num1,int *num2);
// int main(){ 
//     int num1,num2;
//     printf("enter two numbers:\n");
//     scanf("%d%d",&num1,&num2);
//     printf("before swaping in main\n");
//     printf("value of num1=%d\n",num1);   
//     printf("value of num2=%d\n\n",num2); 
//     swap(&num1,&num2);  
//     printf("after swapped in main\n");
//     printf("value of num1=%d\n",num1);   
//     printf("value of num2=%d\n\n",num2);  
//     return 0;                                         
// }
// void swap(int *num1,int *num2){
//     int temp;
//     temp=*num1;
//     *num1=*num2;
//     *num2=temp;
//     printf("after swaping in swap function\n");
//     printf("value of num1=%d\n",*num1);   
//     printf("value of num2=%d\n\n",*num2);
// }

//which is greater using function..
// #include<stdio.h>
// void greater();
// int main(){
//     printf("greater function...\n");
//     greater();
// }
// void greater(){
//     int a;
//     int b;
//     printf("enter 1st value\n");
//     scanf("%d",&a);
//     printf("enter 2nd value\n");
//     scanf("%d",&b);
//     if(a>b){
//         printf("%d is greater",a);
//     }else{
//         printf("%d is greater",b);
//     }
// }

//which is greater using function & pointer...
// #include<stdio.h>
// void greater();
// int main(){
//     printf("greater function using [pointer]\n");
//     greater();
// }
// void greater(){
//     int a,b,*x,*y;
//     printf("enter 1st value\n");
//     scanf("%d",&a);
//     printf("enter 2nd value\n");
//     scanf("%d",&b);
//     x=&a;
//     y=&b;
//     if(a>b){
//         printf("%d is greater",*x);
//     }else{
//         printf("%d is greater",*y);
//     }
// }

//which is greater using argument...
// #include<stdio.h>
// void greater(int *x,int *y);
// int main(){
//     int x,y;
//     printf("greater fun. with argument\n");
//     printf("enter 1st value\n");
//     scanf("%d",&x);
//     printf("enter 2nd value\n");
//     scanf("%d",&y);
//     printf("x=%d\n",x);
//     printf("y=%d\n",y);
//     printf("x=%p\n",&x);
//     printf("y=%p\n",&y);
//     greater(&x,&y);   
// }
// void greater(int *x,int *y){
//     if(*x>*y){
//         printf("%d is greater\n",*x);
//     }else{
//         printf("%d is greater\n",*y);
//     }
// }

//even odd with argument......
// #include<stdio.h>
// void evenodd(int *a);
// int main(){
//     printf("even odd function:-\n");
//     int a;
//     printf("enter value:\n");
//     scanf("%d",&a);
//     evenodd(&a);
// }
// void evenodd(int *a){
//     if(*a%2==0){
//         printf("%d is even",*a);
//     }else{
//         printf("%d is odd",*a);
//     }
// }

//even odd no argument no return..
// #include<stdio.h>
// void evenodd();
// int main(){
//     printf("even odd\n");
//     evenodd();
// }
// void evenodd(){
//     int a,*x;
//     printf("enter value:");
//     scanf("%d",&a);
//     x=&a;
//     if(*x%2==0){
//         printf("%d is even",*x);
//     }else{
//         printf("%d is odd",*x);
//     }
// }

//even odd with return...
// #include<stdio.h>
// int evenodd();
// int main(){
//     int x;
//     printf("even odd with return type\n");
//     x=evenodd();
// }
// int evenodd(){
//     int x,*y;
//     printf("enter value\n");
//     scanf("%d",&x);
//     y=&x;
//     if(*y%2==0){
//         printf("%d is even",*y);
//     }else{
//         printf("%d is odd",*y);
//     }
//     return x;
// }

//even odd with argu. & return..
// #include<stdio.h>
// int main(){
//     int evenodd(int *x);
//     int x,y;
//     printf("enter value:-\n");
//     scanf("%d",&x);
//     y=evenodd(&x);
// }
// int evenodd(int *x){
//     if(*x%2==0){
//         printf("%d is even",*x);
//     }else{
//         printf("%d is odd",*x);
//     }
//     return *x;
// }

// pointer with 1d [array].....
// #include<stdio.h>
// int main(){
//     int x[5]={1,2,3,4,5};
//     for(int i=0;i<3;i++){
//         printf("%d\n",x[i]);
//         printf("%d\n",&x[i]);
//         printf("%d\n",*x[i]);
//     }
// }

// #include<stdio.h>
// int main(){
//     int x[5]={1,2,3,4};
//      printf("%p\n",x);
//      printf("%p\n",&x);
//      printf("%d\n",*x);
//      printf("%p\n",&x);
//      printf("%p\n",*(&x));
//      printf("%p\n",&x[0]);
// }

// #include<stdio.h>
// int x[5]={1,2,3,4,5};
// printf("%p%d",x,*x);
// printf("%p%d",&x,*(x));
// printf("%p%d",&x[0],*(&x[0]));

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
//     int a[5];
//     printf("enter no:\n");
//     int *p=a;
//     for(int i=0;i<1;i++){
//         scanf("%d",&a[i]);
//         printf("%d",*p);
//         p++;
//     }
// }


// #include<stdio.h>
// int main(){
//     int b,c;
//     int a[5];
//     printf("ent five value\n");
//     for( b=0;b<2;b++){
//         scanf("%d",&a[b]);
//     }
//     printf("value is\n");
//         for( c=0;c<2;c++){
//             printf("%d\n",a[c]);
//         }
//     }

//array  
// #include<stdio.h>
// int main(){
//     int b;
//     int a[2];
//     int c[2];
//     int d[2];
//     printf("ent a value\n");
//     for( b=0;b<1;b++){
//         scanf("%d",&a[b]);
//     }
//     printf("value is\n");
//         for( b=0;b<1;b++){
//             printf("%d\n",a[b]);
//         }
//         printf("enter c value\n");
//          for( b=0;b<1;b++){
//         scanf("%d",&c[b]);
//     }
//     printf("value is\n");
//         for( b=0;b<1;b++){
//             printf("%d\n",c[b]);
//              d[b]=a[b]+c[b];
//         }    
//         printf("addition\n");
//         for(b=0;b<1;b++){
//             printf("answer:%d",d[b]);
//         }
//  }

// #include<stdio.h>
// int main(){
//     int id;
//     char name;
//     printf("enter id\n");
//     scanf("%d",&id);
//     printf("id=%d\n",id);
//     printf("enter name\n");
//     scanf("%s",&name);
//     printf("name=%c",name);
// }

// #include<stdio.h>
// struct a1{
//     int feet;
//     float inch;
// };
// int main(){
//     struct a1 d1;
//     d1.feet=12;
//     d1.inch=9.5;
//     printf("%d\n",d1.feet);
//     printf("%f",d1.inch);
// }

// #include<stdio.h>
// struct a1{
//     int feet;
//     float inch;
// };
// int main(){
//     struct a1 d1;
//     d1.feet;
//     d1.inch;
//     printf("feet is");
//     scanf("%d",&d1.feet);
//     printf("feet=%d",d1.feet);
//     printf("inch is");
//     scanf("%f",&d1.inch);
//     printf("inch=%f",d1.inch);
// }

// #include<stdio.h>
// struct a1{
//     int feet;
//     float inch;
//     float add;
// };
// int main(){
//     struct a1 d1;
//     d1.feet;
//     d1.inch;
//     d1.add;
//     printf("feet is-");
//     scanf("%d",&d1.feet);
//     printf("feet=%d\n",d1.feet);
//     printf("inch is-");
//     scanf("%f",&d1.inch);
//     printf("inch=%f\n",d1.inch);
//     d1.add=d1.feet+d1.inch;
//     printf("ans=%f",d1.add);
// }

// #include<stdio.h>
// struct a1{
//     int feet;
//     float inch;
//     float sub;
// };
// int main(){
//     struct a1 d1;
//     d1.feet;
//     d1.inch;
//     d1.sub;
//     printf("feet is-");
//     scanf("%d",&d1.feet);
//     printf("feet=%d\n",d1.feet);
//     printf("inch is-");
//     scanf("%f",&d1.inch);
//     printf("inch=%f\n",d1.inch);
//     d1.sub=d1.feet-d1.inch;
//     printf("ans=%f",d1.sub);
// }

// #include<stdio.h>
// struct a1{
//     int feet;
//     float inch;
//     float div;
// };
// int main(){
//     struct a1 d1;
//     d1.feet;
//     d1.inch;
//     d1.div;
//     printf("feet is-");
//     scanf("%d",&d1.feet);
//     printf("feet=%d\n",d1.feet);
//     printf("inch is-");
//     scanf("%f",&d1.inch);
//     printf("inch=%f\n",d1.inch);
//     d1.div=d1.feet/d1.inch;
//     printf("ans=%f",d1.div);
// }

// #include<stdio.h>
// struct a1{
//     int feet;
//     float inch;
//     float multi;
// };
// int main(){
//     struct a1 d1;
//     d1.feet;
//     d1.inch;
//     d1.multi;
//     printf("feet is-");
//     scanf("%d",&d1.feet);
//     printf("feet=%d\n",d1.feet);
//     printf("inch is-");
//     scanf("%f",&d1.inch);
//     printf("inch=%f\n",d1.inch);
//     d1.multi=d1.feet*d1.inch;
//     printf("ans=%f",d1.multi);
// }

// #include<stdio.h>
// int main(){
// char str[25];
// printf("enter name:-");
// scanf("%s",str);
// printf("\nname=%s",str);
// }

// #include<stdio.h>
// struct a1{
//     int feet;
//     float inch;
//     float assign;
// };
// int main(){
//     struct a1 d1;
//     struct a1 d2;
//     struct a1 d3;
//     d1.feet;
//     d2.inch;
//     printf("feet is-");
//     scanf("%d",&d1.feet);
//     printf("%d\n",d1.feet);
//     printf("inch is-");
//     scanf("%f",&d2.inch);
//     printf("%f\n",d2.inch);
//     d3.assign=d1.feet;
//     printf("d3=%f\n",d3.assign);
//     d3.assign=d2.inch;
//     printf("d3=%f",d3.assign);
// }

// #include<stdio.h>
// struct a1{
//     char name[25];
//     int rollno;
//     int age;
//     char gender[20];
// };
// int main(){
//     struct a1 d1;
//     struct a1 d2;
//     struct a1 d3;
//     struct a1 d4;
//     d1.name[25];
//     d2.rollno;
//     d3.age;
//     d4.gender[20];
//     printf("enter name:-");
//     scanf("%s",&d1.name);
//     printf("your name is-%s\n",d1.name);
//     printf("enter rollno:-");
//     scanf("%d",&d2.rollno);
//     printf("your rollno is-%d\n",d2.rollno);
//     printf("enter age:-");
//     scanf("%d",&d3.age);
//     printf("your age is-%d\n",d3.age);
//     printf("enter gender:-");
//     scanf("%s",&d4.gender);
//     printf("your gender is-%s",d4.gender);
// }

// #include<stdio.h>
// struct a1{
//     char str1[25];
//     char str2[25];
// };
// int main(){
//     struct a1 d1;
//     struct a1 d2;
//     d1.str1[25];
//     d2.str2[25];
//    printf("enter 1st string:\n");
//    scanf("%s",&d1.str1);
//    printf("enter 2nd string:\n");
//    scanf("%s",&d2.str2);
//    if(d1.str1==d2.str2){
//        printf("both are equal");
//    }else{
//        printf("both are not equal");
//    }
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
// struct a1{
//     char name[20];
//     char name2[20];
// };
// int main(){
//     struct a1 d1;
//     struct a1 d2;
//     d1.name[20];
//     d2.name2[20];
//     printf("enter name:");
//     for(int i=0;i<=2;i++){
//          scanf("%c\n",&d1.name[i]);     
//     } 
//     for(int j=0;j<=1;j++){
//          printf("name=%c\n",d1.name[j]);
//     }
// }

// #include<stdio.h>
// struct a1{
//     int a;
//     int b; 
//     int c;
// };
// int main(){
//     struct a1 d1;
//     d1.a;
//     d1.b;
//     d1.c;
//     printf("enter value of a:");
//     for(int i=0;i<=4;i++){
//         scanf("%d",&d1.a);
//         printf("%d",d1.a);
//     }
//      for(int i=0;i<=4;i++){
//         scanf("%d",&d1.b);
//         printf("%d",d1.b);
//     }
//      for(int i=0;i<=4;i++){
//         scanf("%d",&d1.c);
//         printf("%d",d1.c);
//     }
// }

// #include<stdio.h>
// int main(){
//     int a[4];
//     int i;
//     for(i=0;i<4;i++){
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<4;i++){
//         printf("%d\n",a[i]);
//     }
// }

// #include<stdio.h>
// struct a1{
//     int a[4];
// };
// int main(){
//     struct a1 d1;
//     d1.a;
//     printf("enter value:");
//     for(int i=0;i<4;i++){
//         scanf("%d",&d1.a[i]);
//     }
//     for(int i=0;i<4;i++){
//         printf("%d",d1.a[i]);
//     }
// }

// #include<stdio.h>
// #include<string.h>
// struct a1{
//     char name[50];
// };
// int main(){
//     struct a1 d1;
//     d1.name;
//     printf("enter name:");
//     for(int i=0;i<4;i++){
//         scanf("%s",&d1.name[i]);
//     }
//     for(int i=0;i<4;i++){
//         printf("name=%s\n",d1.name[i]);
//     }
// }

// #include<stdio.h>
// struct a1{
//     int a;
// };
// struct a2{
//     int c;
// };
// int main(){
//     struct a1 d1;
//     struct a2 d2;
//     d1.a;
//     d2.c;
//     printf("enter value a&d:");
//     for(int i=0;i<2;i++){
//         scanf("value a=%dc=%d",&d1.a,&d2.c);
//         printf("a=%dc=%d",d1.a,d2.c);
//     }
// }

// #include<stdio.h>
// struct s1{
//     char a;
//     char c;
//     char b;
   // int d;
// };
// int main(){
//     struct s1 d1;
//     printf("%d",sizeof (d1));
// }

// #include<stdio.h>
// int main(){
//     int a=10;
//     printf("%d",sizeof (a));
// }

// #include<stdio.h>
// struct a1{
//     char name[5];
// };
// struct a2{
//     char surname[5];
// };
// int main(){
//     struct a1 d1;
//     struct a2 d2;
//     d1.name;
//     d2.surname;
//     printf("enter name");
//     scanf("%s",&d1.name);
//     printf("%s",d1.name);
//     printf("ent surname");
//     scanf("%s",&d2.surname);
//     printf("%s",d2.surname);
//  }

// #include<stdio.h>
// struct s1{
//     char name[10];
//     int age; 
// };
// void display(struct s1 d2);
// int main(){
//     struct s1 d1;
//     d1.name;
//     d1.age;
//     scanf("%s",&d1.name);
//     printf("name=%s",d1.name);
//     scanf("%d",&d1.age);
//     printf("age=%d",d1.age);
// display(d1);
// }
// void display(struct s1 d2){
//      printf("%s",d2.name);
//      printf("%d",d2.age);
// }

//addition struct pro.
// #include<stdio.h>
// struct s1{
//     int a;
//     int b;
// };
// void add(struct s1 d2);
// int main(){
//     struct s1 d1;
//     d1.a;
//     d1.b;
//     scanf("%d",&d1.a);
//     printf("a=%d\n",d1.a);
//     scanf("%d",&d1.b);
//     printf("b=%d\n",d1.b);
//     d1.a=d1.a+d1.b;
//     add(d1);
// }
// void add(struct s1 d2){
//     printf("ans-%d",d2.a);
// }

//struct fun swap...
// #include<stdio.h>
// struct s1{
//     int a;
//     int b;
//     int c;
// };
// void swap(struct s1 d2);
// int main(){
//     struct s1 d1;
//     d1.a;
//     d1.b;
//     d1.c;
//     scanf("%d",&d1.a);
//     printf("a=%d\n",d1.a);
//     scanf("%d",&d1.b);
//     printf("b=%d\n",d1.b);
//     d1.c=d1.a,d1.a=d1.b,d1.b=d1.c;
//     swap(d1);
// }
// void swap(struct s1 d2){
//     printf("after swap a is-%d\n",d2.a);
//     printf("after swap b is-%d",d2.b);
// }

//struct pointer swap.........
// #include<stdio.h>
// struct s1{
//     int a=10;
//     int b=20;
//     int c;
// } ;
// void swap(struct s1 d2);
// int main(){
//    swaped(d1);
//     swap(d1);
// }
// void swaped(struct s1 d1){
//     struct s1 d1;
//     d1.*p;
//     d1.*q;
//     d1.*r;
//     d1.*r=d1.*p,d1.*p=d1.*q,d1.*q=d1.*r;
// }
// void swap(struct s1 d2){
//     printf("a is-%d\n",d2.*p);
//     printf("b is-%d",d2.*q);
// }


//pointer swap using function.....
// #include<stdio.h>
// void swap();
// int main(){
//     printf("pointer swap pro. using function\n");
//     swap();
// }
// void swap(){
//     int a=10,b=20,c;
//     int *aa=&a,*bb=&b,*cc=&c;
//     *cc=*aa;*aa=*bb;*bb=*cc;
//     printf("a=%d\n",a);
//     printf("b=%d\n",b);
//     printf("*aa=%d\n",*aa);
//     printf("*bb=%d\n",*bb);
// }

// #include<stdio.h>
// struct a1{
//     int a=10;
//     int b=20;
//     int *z=&a;
//     int *y=&b;
// };
// int main(){
//     struct a1 d1;
//     struct a2 d2;
//     d1.*z;
//     d1.*y;
//     printf("%d",d1.*z);
//     printf("%d",d1.*y);
//  }

// #include<stdio.h>
// int main(){
//     int a,i,j;
//     printf("enter no.");
//     scanf("%d",&a);
//     for(i=1;i<=a;i++){
//         for(j=1;j<=i;j++){
//             printf("%d",1);
//         } 
//         printf(" ");
//     }   
// }

// #include<stdio.h>
// int main(){
//     int a,i,t;
//     printf("enter no:");
//     scanf("%d",&a);
//     t=0;
//     for(i=1;i<=a;i++){
//         t=t*10+1;
//          printf("%d ",t);
//     }     
// }

// #include<stdio.h>
// int main(){
//     int a,i,sum;
//     printf("ent no-");
//     scanf("%d",&a);
//     sum=0;
//     for(i=1;i<=a;i++){ 
//          sum=sum+i;   
//           printf("%d+",i);            
//     }
//     printf("=%d",sum);
// }

//odd no:
// #include<stdio.h>
// int main(){
//     int a=10,i,f;
//     printf("ent no-");
// //    scanf("%d",&a);
//     for(i=1;i<=a;i+3){
//          printf("%d",i);      
//     }   
    
// }

// #include<stdio.h>
// int main(){
//     int i;
//     for(i=0;i<=20;i++){
//         printf("%d",i);
//     }
// }

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     a=b=100;
//     scanf("%d%d",a,&b);
//     printf("a=%d,b=%d,c=%d",a,b,c);
// }

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     a=50;
//     b=100;
//     c=scanf("%d%d%d");
//     printf("a=%d,b=%d,c=%d",a,b,c);
// }

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     c=printf("\nwelcome%d",scanf("%d%d",&a,&b));
//     printf("a=%d b=%d c=%d",a,b,c);
// }

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     a=10;
//     b=20;
//     c=a>b?a:b;
//     printf("%d",c);
// }
