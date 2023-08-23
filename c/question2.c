//while questions......
// #include<stdio.h>
// int main(){
//     int i=1;
//     while(i<=10){
//         printf("%d\n",i);
//         i++;
//     }
// }
// #include<stdio.h>
// int main(){
//      int i=10;
//      while(i>0){
//      printf("%d\n",i);
//      i--;
//      }    
// }

// #include<stdio.h>
// int main(){
//     int i=1;
//     int j;
//     printf("table of\n");
//     scanf("%d",&j);
//     while(i<=10){
//         printf("%d*%d=%d\n",j,i,i*j);
//         i++;    
//     }
// }


//count no. and sum .......
// #include<stdio.h>
// int main(){
//     int i;
//     int sum=0,j,count=0;
//     printf("enter no:\n");
//     scanf("%d",&i);
//     while(i>0){ 
//          j=i%10;
//          sum=sum+j; 
//          i=i/10;
//          count++;
//     }
//     printf("total sum=%d",sum);
//     printf("total count=%d",count);
// }

//goto even;
// #include<stdio.h>
// int main(){
//    int age;
//    scanf("%d",&age);
//    printf("vote\n");
//    goto a;
//     b:printf("invalid");
//     goto d;
//     c:printf("valid");
//     goto e;
//    a:if(age<=18){
//        goto b;
//    }else{
//        goto c;
//    }
//    d:;  
//    e:; 
// }

// #include<stdio.h>
// int main(){
//     int i=10;
//     goto a;
//     b:printf("16\n17\n18\n19\n20");
//     goto c;
//     c:;
//     a:while(i<=15){
//             goto b;
//         printf("%d\n",i);
//         i++;
//     }
// }

// #include<stdio.h>
// int main(){
//     char a=hello;
//     fgets("hello");

// }

// #include<stdio.h>
// int main(){
//     int i,x;
//     printf("enter i\n");
//     scanf("%d",&i);
//     printf("enter x\n");
//     scanf("%d",&x);
//     while(i<=x){
//         if(i%2==0){
//             printf("ans=%d\n",i);
//         }
//         i++;
//     }
// }

// #include<stdio.h>
// int main(){
//     int a,i;
//     printf("enter no\n");
//         scanf("%d",&a);
//         for(i=2;i<=a;i++){
//             if(i%2==0&&i%3==0&&5==0){
//                 printf("%d is divisible by 2,3,5\n",i); 
//             }if(i%2==0&&i%3==0){
//                 printf("%d is divisible by 2&3 both\n",i);
//             }if(i%2==0&&i%5==0){
//                 printf("%d is divisible by 2&5 both\n",i);
//             }if(i%2==0){
//                 printf("%d is divisible by 2\n",i);
//             }if(i%3==0&&i%5==0){
//                 printf("%d is divisible by 3&5 both\n",i);
//             }if(i%3==0){
//                 printf("%d is divisible by 3\n",i);
//             }if(i%5==0){
//                 printf("%d is divided by 5\n",i);
//             } 
//     }
// }


// #include<stdio.h>
// int main(){
//     int i=2,a;
//     printf("enter no\n");
//     scanf("%d",&a);
//     while(i<=a){
//         if(i%2==0&&i%3==0&&5==0){
//                 printf("%d is divisible by 2,3,5\n",i); 
//             }if(i%2==0&&i%3==0){
//                 printf("%d is divisible by 2&3 both\n",i);
//             }if(i%2==0&&i%5==0){
//                 printf("%d is divisible by 2&5 both\n",i);
//             }if(i%2==0){
//                 printf("%d is divisible by 2\n",i);
//             }if(i%3==0&&i%5==0){
//                 printf("%d is divisible by 3&5 both\n",i);
//             }if(i%3==0){
//                 printf("%d is divisible by 3\n",i);
//             }if(i%5==0){
//                 printf("%d is divided by 5\n",i);
//             } 
//             i++;
//     }
// }

// #include<stdio.h>
// int main(){
//     int i=2,a,incr,c;
//     printf("enter no\n");
//     scanf("%d",&a);
   
//     incr:i++;
//     if(i<=a){
//         goto b;
//     }
//        b: if(i%2==0&&i%3==0&&5==0){
//                 printf("%d is divisible by 2,3,5\n",i); 
//             }if(i%2==0&&i%3==0){
//                 printf("%d is divisible by 2&3 both\n",i);
//             }if(i%2==0&&i%5==0){
//                 printf("%d is divisible by 2&5 both\n",i);
//             }if(i%2==0){
//                 printf("%d is divisible by 2\n",i);
//             }if(i%3==0&&i%5==0){
//                 printf("%d is divisible by 3&5 both\n",i);
//             }if(i%3==0){
//                 printf("%d is divisible by 3\n",i);
//             }if(i%5==0){
//                 printf("%d is divided by 5\n",i);
//             }if(i==a){
//                 goto c;
//             } 
//              goto incr;
//              c:;    
// }

// #include<stdio.h>
// int main(){
//     float a=1.1,b,sum=0;
//     printf("enter value a & b");
//     scanf("%f",&b);
//     while(a<=b){
//         printf("%f\n",a);
//         a++;
//     }
// }

// #include<stdio.h>
// int main(){
//     float a,b,c;
//     printf("enter value a & b");
//     scanf("%f",&a);
//     scanf("%f",&b);
//     c=a+b;
//     printf("%f\n",c);
// }

// #include<stdio.h>
// int main(){
//     char a[]="hell heven";
//     int i;
//     for(i=3;i>=0;i--){
//         printf("%c",a[i]);
//     }
// }

// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1;i<=10;i++){
//         printf("%d\n",i);
//     }
// }

//do while......table...
// #include<stdio.h>
// int main(){
//     int i=1;
//     do{
//         printf("2*%d=%d\n",i,i*2);
//         i++;
//     }
//     while(i<=10);
// }

//do while......
// #include<stdio.h>
// int main(){
//         int a;
//         char z;
//     do{
//      printf("1.addition,2.sub,3.multi");
//     scanf("%d",&a);
//     switch(a){
//         case 1:
//         printf("addition\n");
//         int b,c;
//         printf("enter 1 no:\n");
//         scanf("%d",&b);
//         printf("enter 2 no:\n");
//         scanf("%d",&c);
//         b=b+c;
//         printf("sum is=%d\n",b);
//         scanf("continue yes/no%s",&z);
//         break;
//         case 2:
//         printf("subtraction\n");
//         int sub1,sub2;
//         printf("enter 1 no:\n");
//         scanf("%d",&sub1);
//         printf("enter 2 no:\n");
//         scanf("%d",&sub2);
//         sub2=sub1-sub2;
//         printf("ans is=%d\n",sub2);
//         break;
//         case 3:
//         printf("multiplication\n");
//         int mul1,mul2;
//         printf("enter 1 no:\n");
//         scanf("%d",&mul1);
//         printf("enter 2 no:\n");
//         scanf("%d",&mul2);
//         mul2=mul1*mul2;
//         printf("ans is=%d\n",mul2);
//         break;
//         default:;
//     }
//     }
//     while(a);
// }

//patern print....
// #include<stdio.h>
// int main(){
//     int i,j,k;
//     scanf("%d",&k);
//     for(i=0;i<k;i++){
//         for(j=0;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int i=0,j,k;
//     scanf("%d",&k);
//     while(i<k)
//     {
//         j=0;
//         while(j<=i)
//         {
//             printf("*");
//             j++;
//         }
//         printf("\n");
//          i++;
//     }  
// }

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<5;i++){
//         for(j=1;j<=i;j++){
//             printf("%d",j);
//         }
//          printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<5;i++){
//         for(j=1;j<=i;j++){
//             printf("%d",i);
//         }
//          printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=0;i<4;i++){
//         for(j=0;j<=i;j++){
//             printf("%c",'A'+j);
//         }
//          printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=0;i<4;i++){
//         for(j=0;j<=i;j++){
//             printf("%c",'a'+j);
//         }
//          printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=0;i<4;i++){
//         for(j=0;j<=i;j++){
//             printf("%c",'A'+i);
//         }
//          printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=0;i<5;i++){
//         for(j=1;j<=i;j++){
//             if(i%2==0){
//               printf("0");
//             }else{
//                 printf("1");
//             }  
//         }
//          printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=0;i<5;i++){
//         for(j=1;j<=i;j++){
//             if(j%2==0){
//               printf("0");
//             }else{
//                 printf("1");
//             }  
//         }
//          printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int i=1,a;
//     printf("ent no:\n");
//     scanf("%d",&a);
//     do{
//         printf("%d\n",i++);
//         i++;
//     }while(i<a);
// }

// #include<stdio.h>
// int main(){
//     int i=2,a;
//     printf("ent no:\n");
//     scanf("%d",&a);
//     do{
//         printf("%d\n",i++);
//         i++;
//     }while(i<=a);
// }

//#include<stdio.h>
//int main(){
//    int i=1;
//    do{
//        printf("2*%d=%d\n",i,i*2);
//        i++;
//    }while(i<=10);
//}


//print 1 to 10......
// #include<stdio.h>
// int main(){
//     int i=1,a;
//     for(;;){
//         if(i<=10){
//             printf("%d\n",i);
//           i++;
//         }
//     }
// }

//without arthmetical operator print 3 table...
// #include<stdio.h>
// int main(){
//     int i;
//     for(i=3;i<=30;i++){
//         printf("%d\n",i);
//         i++;
//         i++;
//     }
// }

// #include<stdio.h>
// int main(){
//     int i=2;
//     for(;;){
//         printf("%d\n",i++);
//         i++;
//         if(i==22){
//             break;
//         }  
//     }
// }

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1,j=10;i<=j;i++,j--){
//         printf("\n%d %d",i,j);
//     }
// }

// #include<stdio.h>
// int main(){
//     int a,j;
//     for(a=1;a<=4;a++){
//         for(j=1;j<=a;j++){
//           // printf("%d",j);
//            printf("|",a);
//         }
//          printf(" ");
//     }
// }

// #include<stdio.h>
// int main(){
//     int i,x;
//     for(i=1;i<=10;i++){
//         printf("%d\n",i*i);
//     }
// }

// #include<stdio.h>
// int main(){
//     int a;
//     for(a=1;a<=10;a++){
//         printf("| ",a*a);
//     }
// }

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=6;i++){
//         for(j=1;j<=6-i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=5;i>=1;i--){
//         for(j=5;j>=i;j--){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

//pattern print while loop....
// #include<stdio.h>
// int main(){
//     int i=1,j;
//     while(i<=3){
//         j=1;
//         while(j<=i){    
//             printf("*");
//             j++;  
//         }
//             printf("\n"); 
//         i++;
//     }   
// }

//pattern print 
// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=3;i++){
//         for(j=1;j<=4;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }

//pattern do while...
// #include<stdio.h>
// int main(){
//     int i=1,j;
//     do{
//         j=1;
//         while(j<=4){
//             printf("%d",j);
//             j++;
//         }
//         printf("\n");
//         i++; 
//     }
//     while(i<=3);
// }

// #include<stdio.h>
// int main(){
//     int i,j,n=1;
//     for(i=2;i>=0;i--){
//         for(j=0;j<=i;j++){
//             printf("%d",n);
//             n++;
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=6;i++){
//         for(j=1;j<=i;j++){
//             if(j%2==1){
//                 printf("%d",j);
//             }else{
//                 printf("x");
//             }
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int i,j,n=1;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             printf("%d",n);
//             n++;
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int i,j,k,m=0;
//     for(i=4;i>=0;i--){
//         for(j=0;j<=i-1;j++){
//             printf(" ");
//         }
//         for(k=0;k<=m;k++){
//            printf("%d",k+1);
//         }
//         printf("\n");
//         m++;
//         }
// }

// #include<stdio.h>
// int main(){
//     int i,j,k;
//     for(i=1;i<=4;i++){
//         for(j=5;j>=i;j--){
//             printf(" ");
//         }
//         for(k=1;k<=i;k++){
//             printf("%d",k);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int i,j,k;
//     for(i=1;i<=4;i++){
//         for(j=i;j<4;j++){
//             printf(" ");
//         }
//         for(k=1;k<=i;k++){
//             printf("%d",k);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int a=10,b=10,c;
//     c=a-(-b);
//     printf("%d",c);
// }

//print triangle.......
// #include<stdio.h>
// int main(){
//     int i,j,k;
//    for(i=5;i>=1;i--){
//     for(j=1;j<=i;j++){
//         printf(" ");
//     }
//     for(k=i;k<=5;k++){
//         printf("* ");
//     }
//     printf("\n");
//    }
// }

//print ulta triangle.....
// #include<stdio.h>
// int main(){
//     int i,j,k;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             printf(" ");
//         }
//         for(k=i;k<=5;k++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

//print ("burjkhalifa")....
// #include<stdio.h>
// int main(){
//     int i,j,k,m;
//     for(i=5;i>=1;i--){
//         for(m=1;m<=4;m++){
//         for(j=1-5;j<=i;j++){
//             printf(" ");
//         }
//         for(k=i;k<=5;k++){
//             printf("%d ",i);
//         }
//         printf("\n");
//         }
//     }
// }

//print rombus("kajukatri")
// #include<stdio.h>
// int main(){
//     int i,j,k,m;
//     for(i=5;i>=1;i--){
//         for(j=1;j<=i;j++){
//             printf(" ");  
//         }
//         for(k=i;k<=5;k++){
//             printf("* ");
//         }
//         printf("\n");
//         }
//         for(m=2;m<=5;m++){
//             for(j=1;j<=m;j++){
//                 printf(" ");
//             }
//             for(k=m;k<=5;k++){
//                 printf("* ");
//             }
//             printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int i,j,k,m;
//         for(m=1;m<=5;m++){
//             for(j=1;j<=m;j++){
//                 printf(" ");
//             }
//             for(k=m;k<=5;k++){
//                 printf("* ");
//             }
//             printf("\n");
//     }
//     for(i=5;i>=1;i--){
//         for(j=1;j<=i;j++){
//             printf(" ");  
//         }
//         for(k=i;k<=5;k++){
//             printf("* ");
//         }
//         printf("\n");
//         }
// }

// #include<stdio.h>
// int main(){
//     int i,j,k,m;
//     for(i=4;i>=1;i--){
//         printf("* ");
//     }
//      for(j=1;j<=5;j++){
//             printf("*");
//             printf("\n"); 
//      }   
// }

// #include<stdio.h>
// int main(){
//     int i,n;
//     scanf("%d",&n);
//     if(n>0){
//         for(i=1;i<=n;i++){
//             printf("%d",i);
//         }
//     }else{
//         for(i=-1;i>=n;i--){
//             printf("%d",i);
//         }
//     }
// }


//array .......

// #include<stdio.h>
// int main(){
//     int a[5]={1,2,3,4,5};
//     printf("%d",a[3]);
// }

//  #include<stdio.h>
// int main(){
//    int i[5];
//    int a;
//    for(a=0;a<5;a++){
//            printf("enter no here\n");
//            scanf("%d",&i[a]);
//    }
//     printf("1d \n");
//            for(a=0;a<5;a++){
//            printf("%d",i[a]);
//        printf("\n");
//    }
// }

// #include<stdio.h>
// int main(){
//     int a[5]={1,2,3,4,5};
//     int b[5]={6,7,8,9,10};
//     for(int i=0;i<5;i++){
//         printf("%d\n",a[i]+b[i]);
//     }   
// }

// #include<stdio.h>
// int main(){
//     int a[5];
//     int b[5];
//     for(int i=0;i<5;i++){
//         printf("enter no:\n");
//         scanf("%d",&a[i]);
//     }   
//     for(int j=0;j<5;j++){
//         printf("%d",a[j]);
//     }
//     for(int i=0;i<5;i++){
//         printf("enter b value:\n");
//         scanf("%d",&b[i]);
//     }
//     for(int j=0;j<5;j++){
//         printf("answer=%d\n",a[j]+b[j]);
//     }
// }

// #include<stdio.h>
// int main(){
//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//     for(int i=9;i>0;i--){
//            printf("%d\n",a[i]);
//     }
// }

// #include<stdio.h>
// int main(){
//     int a[5],s;
//     for(int i=0;i<5;i++){
//         printf("enter no\n");
//         scanf("%d",&a[i]);
//     }
//     for(int j=0;j<5;j++){
//         if(a[j]%2==0){
//              printf("even=%d",a[j]);
//         }   
//     }
// }

// #include<stdio.h>
// int main(){
//     int a[5],s;
//     for(int i=0;i<5;i++){
//         printf("enter no:\n");
//         scanf("%d",&a[i]);
//     }
//    for(int j=0;j<5;j++){
//      //  printf("%d",a[j]);
//           int s=a[0];
//         if(a[j]>s){
//           //  printf("%d",j[s]);
//           s=a[j];
//         }
//      }   
//      printf("%d",s); 
// }

// #include<stdio.h>
// int main(){
//     int a[5],i,j,s=0;
//     for(i=0;i<5;i++){
//         printf("enter no:");
//         scanf("%d",&a[i]);
//     }
//     for(j=0;j<5;j++){
//         if(a[j]%2==0){
//             s=s+a[j];
//         }  
//     }
//     printf("ans=%d",s);
// }

// #include<stdio.h>
// int main(){
//     int a[2][2]={{1,2},{3,4}};
//     printf("%d",a[0][0]);
//     printf("%d",a[0][1]);
//     printf("%d",a[1][0]);
//     printf("%d",a[1][1]);
// }

// #include<stdio.h>
// int main(){
//     int a[2][2],i,j;
//       for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//              scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//              printf("%d",a[i][j]);
//         }
//     }
// }

// #include<stdio.h>
// int main(){
//     int a[2][2],b[2][2],i,j;
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("%d",a[i][j]);
//         }
//     }
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("\nans=%d",b[i][j]+a[i][j]);
//         }
//     }
// }

// #include<stdio.h>
// int main(){
//     int a[2][2];
//     int b[2][2];
//     int c[2][2];
//     int i,j,k;
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
//         c[i][j]=0;
//         for(k=0;k<2;k++){
//              c[i][j]+=a[i][k]*b[k][j];
//             }
//         }          
//     }
//     printf("ans is:-\n");
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("%d",c[i][j]);
//         }
//         printf("\n");
//     }
// }

//function.........
//no argu no return type....
// #include<stdio.h>
// void sub();
// void multi();
// void sum();
// int main(){
//     printf("hello\n");
//     multi();
// }
// void sum(){
//     int a=10,b=5;
//     a=a+b;
//     printf("sum=%d\n",a);
// }
// void sub(){
//     int a=10,b=5;
//     a=a-b;
//     printf("sub=%d\n",a);
// }
// void multi(){
//     int a=10,b=5;
//     a=a*b;
//     sum();
//     sub();
//     printf("multi=%d",a);
// }

//no arg no return si...
// #include<stdio.h>
// void si();
// int main(){
//     printf("simple intrest\n");
//     si();
// }
// void si(){
//     int p=89,r=5,t=2,s;
//     s=p*r*t/100;
//     printf("ans=%d",s);
// }

//no argu with return type si.....
// #include<stdio.h>
// int si();
// int main(){
//     int a;
//     printf("simple intrest\n");
//     a=si();
//     printf("ans=%d",a);
// }
// int si(){
//     int p=89,r=5,t=2,s;
//     s=p*r*t/100;
//     return s;
// }

//argu with no return type si.....
// #include<stdio.h>
// int main(){
//    void si(int,int,int,int);
//     int p,r,t,s;
//  printf("enter p");
//  scanf("%d",&p);
//  printf("enter r");
//  scanf("%d",&r);
//  printf("enter t");
//  scanf("%d",&t);
//  s=p*r*t/100;
//     si(p,r,t,s);
// }
//      void si(int p,int r,int t,int s){
//     printf("ans=%d",s);
// }

//argu with return type si......
// #include<stdio.h>
// int main(){
//     int si(int,int,int);
//     int p,r,t,s;
//      printf("enter p");
//      scanf("%d",&p);
//      printf("enter r");
//      scanf("%d",&r);
//      printf("enter t");
//      scanf("%d",&t);
//      s=si(p,r,t);
//      printf("ans=%d",s);
// }
// int si(int p,int r,int t){
//     return p*r*t/100;
// }

//no argument with return type......
// #include<stdio.h>
// int facto();
// int main(){
//     int b;
//     printf("factorial\n");
//     b=facto();
//     printf("%d",b);
// }
// int facto(){
//     int a,f=1;
//     for(a=1;a<=4;a++){
//         f=f*a;       
//     }
//     return f;  
// }

//no argu no return type....
// #include<stdio.h>
// void facto();
// int main(){
//     printf("factorial\n");
//     facto();
// }
// void facto(){
//     int a,f=1;
//     for(a=1;a<=4;a++){
//         f=f*a;       
//     }
//     printf("%d",f);
// }

//argu with no return type.....
// #include<stdio.h>
// int main(){
//     void facto(int,int);
//     int a,f=1;
//     for(a=1;a<=4;a++){
//         f=f*a;       
//     }
//     facto(a,f);
// }
//   void facto(int a,int f){
//     printf("facto=%d",f);
// }

//argu with return type.....
// #include<stdio.h>
// int main(){
//     int facto(int,int);
//         int a,f=1,r;
//     for(a=1;a<=4;a++){
//         f=f*a;       
//     }
//       r=facto(a,f);
//       printf("%d",r);
 
// }
// int facto(int a,int f){
//     return f;  
// }

//no argu no return type pattern.....
// #include<stdio.h>
// int main(){
//     void pat();
//     printf("pattern print\n");
//     pat();
// }
// void pat(){
//     int i,j;
//     for(i=1;i<=4;i++){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

//no argu no return type table.....
// #include<stdio.h>
// int main(){
//     void table();
//     printf("table\n");
//     table();
// }
// void table(){
//     int i,j;
//     for(i=1;i<=10;i++){
//         for(j=1;j<=10;j++){
//                printf("%4d",i*j);
//         }
//         printf("\n");
//     }
// }

//no argu with return type table....
// #include<stdio.h>
// int main(){
//     int table();
//     printf("table\n");
//     int b;
//     b=table();
//     printf("%4d",b);
// }
// int table(){
//     int i,j;
//     for(i=1;i<=10;i++){
//         for(j=1;j<=10;j++){
//                return j*i;
//         }
//        // printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//    int i=0,j=6,b,c;
//    b: i++;
//    if(i<j){
//     printf("*\n");
//     goto b;
//     c:j++;  
//    }if(j<i){
//     printf("*");
//     goto c;
//    }  
// }

// #include<stdio.h>
// int main(){
//     int i=0,j,c;
//     scanf("%d",&j);
//     c:i++;
//     if(i<=j){
//         printf("%d\n",i);
//         goto c;
//     }
// }


//no argu no return type......
// #include<stdio.h>
// int main(){
//     void nat();
//     printf("naturals num\n");
//     nat();
// }
// void nat(){
//     int i=0,j,c;
//     scanf("%d",&j);
//     c:i++;
//     if(i<=j){
//         printf("%d\n",i);
//         goto c;
//     }
// }

// #include<stdio.h>
// int main(){
//     int i=1,j,sum=0,c,d;
//     scanf("%d",&j);
//     c:i++;
//     if(i<=j){
//         goto d;
//     d:j%i==0
//       sum=sum+i;
//     }if(sum==j){
//         printf("%d",j);
//         goto c;
//     } 
// }

// #include<stdio.h>
// int main(){
//     int i,j,k,f;
//     printf("enter no:\n");
//     scanf("%d",&f);
//     for(i=1;i<=f*2;i++){
//         for(j=1;j<=i;j++){
//               printf(" ");
//         }
//           for(k=i;k<=f*2;k++){
//             printf("* ");
//           }
//           printf("\n");
//     }
// }

// #include <stdio.h>  
// int main() {  
//     int i,j,r;
//     printf("Enter no:\n");
//     scanf("%d", &r);  
//     for(i = r/2; i <= r; i+=2){
//         for(j = 1; j < r-i; j+=2) {  
//             printf(" ");  
//         }
//         for(j = 1; j <= i; j++){  
//             printf("*");  
//         }  
//         for(j = 1; j <= r-i; j++){  
//             printf(" ");  
//         }  
//         for(j = 1; j <= i; j++){  
//             printf("*");  
//         }  
//         printf("\n");  
//     }  
//     for(i = r; i >= 1; i--){  
//         for(j = i; j < r; j++){  
//             printf(" ");  
//         }  
//         for(j = 1; j <= (i*2)-1; j++){  
//             printf("*");  
//         }  
//         printf("\n");  
//     }  
// }

//print circle......
// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=6;i++){
//         for(j=1;j<=i;j++){
//               printf("%d",i);
//         }   
//         printf("\n");
//     }
// }

// #include<stdio.h>
// void pattern1();
// void pattern2();
// void pattern3();
// int main(){
//     printf("pattern print\n");
//     pattern1();
//     pattern2();
//     pattern3();
// }
// void pattern1(){
//     int i,j,k;
//     printf("enter no for pattern 1: ");
//     scanf("%d",&k);
//     for(i=1;i<=k;i++){
//       for(j=1;j<=i;j++){
//            printf("%d",j);
//       }
//       printf("\n");
//     }
// }
// void pattern2(){
//     int i,j,k;
//     printf("enter no for pattern 2: ");
//     scanf("%d",&k);
//     for(i=k;i>=1;i--){
//       for(j=1;j<=i;j++){
//            printf("%d",j);
//       }
//       printf("\n");
//     }
// }
// void pattern3(){
//      int i,j,k;
//     printf("enter no for pattern 3: ");
//     scanf("%d",&k);
//     for(i=k;i>=1;i--){
//       for(j=i;j>=1;j--){
//            printf("%d",j);
//       }
//       printf("\n");
//     }
// }



// #include<stdio.h>
// int main(){
//     int i;
//     int sum=0,j,count=0;
//     printf("enter no:\n");
//     scanf("%d",&i);
//     while(i>0){ 
//          j=i%10;
//          sum=sum+j; 
//          i=i/10;
//          count++;
//     }
//     printf("total sum=%d",sum);
//     printf("total count=%d",count);
// }

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter number");
//     scanf("%d",&a);
    
// }


// #include<stdio.h>
// int main()
// {
// int i,j,sum=0,sum1=0;
// for(i=1;i<=10;i++){
//     if(i%2==0){
//         sum=sum+i;
//        printf("even %d\n",i);
//     }else{
//        sum1=sum1+i;
//        printf("odd %d\n",i);
//    }   
// }
// printf("total even num=%d\n",sum);
// printf("total odd num=%d",sum1);
// }

// #include <stdio.h>
// int main() {
//   int a, b;
//   printf("Enter num 1: ");
//   scanf("%d", &a);
//   printf("Enter num 2: ");
//   scanf("%d", &b);
//   switch(a > b) {
//     case 1:
//       printf(" greater num is %d.\n", a);
//       break;
//     case 0:
//       printf(" greater num is %d.\n", b);
//       break;
//     default:
//       printf(" nums are equal.\n");
//   }
// }