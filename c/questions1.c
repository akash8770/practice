//1.write a program to find maximum b/w two num..
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter 1st no: ");
//     scanf("%d",&a);
//     printf("enter 2nd no: ");
//     scanf("%d",&b);
//     if(a>b){
//         printf("%d is max",a);
//     }else{
//         printf("%d is max",b);
//     }
// }

//2.write a c program to find max b\w three num..
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter 1st no: ");
//     scanf("%d",&a);
//     printf("enter 2nd no: ");
//     scanf("%d",&b);
//     printf("enter 3rd no: ");
//     scanf("%d",&c);
//     if(a>b&&a>c){
//         printf("%d is max",a);
//     }else if(b>a&&b>c){
//         printf("%d is max",b);
//     }else{
//         printf("%d is max",c);
//     }  
// }

//3.write a c pro. to check whether a num is neg pos or zero.
// #include<stdio.h>
// int main(){
//     int num;
//     printf("enter any number here\n");
//     scanf("%d",&num);
//     if(num<0){
//         printf("neg");
//     }if(num>0){
//         printf("posi");
//     }if(num==0){
//         printf("zero");
//     }
// }

// #include<stdio.h>
// int main(){
//     int num;
//     printf("enter any number here\n");
//     scanf("%d",&num);
//     if(num<0){
//         printf("neg");
//     }else if(num>0){
//         printf("posi");
//     }else{
//         printf("zero");
//     }
// }

//4.write a pro. to check whether a num is div by 5 & 11 or not..
// #include<stdio.h>
// int main(){
//     int num;
//     printf("enter any num\n");
//     scanf("%d",&num);
//     if(num%5==0&&num%11==0){
//         printf("divisible");
//     }else{
//         printf("not divisible");
//     }
// }

//5.write a pro. to check whether a num is even or odd.
// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter no:");
//     scanf("%d",&a);
//     if(a%2==0){
//         printf("even");
//     }else{
//         printf("odd");
//     }
// }

//6.write a c pro. to check whether a year is leap year or not.
// #include<stdio.h>
// int main(){
//     int year;
//     printf("enter year:");
//     scanf("%d",&year);
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

//11.write a prog to input week num and print week day...
// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter week no.");
//     scanf("%d",&a);
//     switch(a){
//         case 1: printf("sun");
//              break;
//         case 2: printf("mon");
//              break;
//         case 3: printf("tue");
//              break;
//         case 4: printf("wed");
//              break;
//         case 5: printf("thu");
//              break;
//         case 6: printf("fri");
//              break;
//         case 7: printf("sat");
//              break;
//         default: printf("opps");       
//     }
// }

//12.write a pro. to input month num and print num of days in that month..
// #include<stdio.h>
// int main(){
//     int a;
//     printf("to find no. of day enter month no.:");
//     scanf("%d",&a);
//     switch(a){
//         case 1: printf("31 days");
//              break;
//         case 2: printf("28 days");
//              break;
//         case 3: printf("31 days");
//              break;
//         case 4: printf("30 days");
//              break;
//         case 5: printf("31 days");
//              break;
//         case 6: printf("30 days");
//              break;
//         case 7: printf("31 days");
//              break;
//         case 8: printf("31 days");
//              break;
//         case 9: printf("30 days");
//              break;
//         case 10: printf("31 days");
//              break;
//         case 11: printf("30 days");
//              break;
//         case 12: printf("31 days");
//              break;
//         default: printf("opps");
//     }
// }

//13.write a c pro. to count total num of notes in given amount..
// #include<stdio.h>
// int main(){
//     int amt,notes,total;
//     printf("enter the amount=");
//     scanf("%d",&amt);
//     printf("enter the notes no=");
//     scanf("%d",&notes);
//     total=amt/notes;
//     if(notes==0){
//         printf("in this amount no of notes=%d",total);
//     }else if(notes==20){
//         printf
//     }
// }

//14. write a c pro. to input angles of a triangle and check whether triangle is valid or not.
// #include<stdio.h>
// int main(){
//     int a1,a2,a3;
//     printf("enter 3 angle of a triangle\n");
//     scanf("%d%d%d",&a1,&a2,&a3);
//     if(a1+a2+a3==180){
//         printf("it is valid triangle\n");
//     }else{
//         printf("it is not a valid triangle\n");
//     }
// }

//15.write a c pro. input all sides of a triangle and check wether triangle is valid or not. 
// #include<stdio.h>
// int main(){
    
// }

//16.write a c pro. to check whether the triangle is equilateral ,isosceles or scalene triangle...
// #include<stdio.h>
// int main(){
//     int a1,a2,a3;
//     printf("enter 3 angle of a triangle\n");
//     scanf("%d%d%d",&a1,&a2,&a3);
//     if(a1==a2&&a2==a3){
//         printf("it is equilateral triangle\n");
//     }else if(a1==a2||a2==a3||a3==a1){
//         printf("it is isosceles triangle\n");
//     }else{
//         printf("scalene triangle");
//     }
// }

//17.write a c pro. to find all roots of a quadratic equation..
// #include<stdio.h>
// int main(){
//     float a,b,c;
//     float
// }

//18.write a c pro. to calculate profit & loss..
// #include<stdio.h>
// int main(){
//     int sp,cp,amt;
//     printf("enter selling price\n");
//     scanf("%d",&sp);
//     printf("enter cost price\n");
//     scanf("%d",&cp);
//     if(sp>cp){
//         amt=sp-cp;
//         printf("profit=%d",amt);
//     }else if(cp>sp){
//         amt=cp-sp;
//         printf("loss=%d",amt);
//     }else{
//         printf("no loss no profit");
//     }
// }

//practice...switch case using 2 printf print no of days in 12 month...
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter month no.:");
//     scanf("%d",&b);
//     switch(b){
//         case 1:
//         case 3:
//         case 5:
//         case 7:
//         case 8:
//         case 10:
//         case 12:
//              a=31;
//                break;
//         case 2:
//              a=29;
//                break;
//         case 4:
//         case 6:
//         case 9:
//         case 11:
//              a=30;
//                break;
//         default:
//               a=0; 
//  }
//   if(a)
//         printf("no of days in %d month is %d",b,a);
//      else
//         printf("you enter wrong month");  
// }

//switch case in month find days using 3 printf
// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter month no.:");
//     scanf("%d",&a);
//     switch(a){
//         case 1:
//         case 3:
//         case 5:
//         case 7:
//         case 8:
//         case 10:
//         case 12:
//              printf("no of days is 31");
//                break;
//         case 2:
//              printf("no of days is 29");
//                break;
//         case 4:
//         case 6:
//         case 9:
//         case 11:
//              printf("no of days is 30");
//                break;
//         default:
//               a=0; 
//  }
// }

// #include<stdio.h>
// int main(){
//     int a,gender,eo,alphabet;
//     printf("for sum enter 1 or subtract enter 2:\n");
//     scanf("%d",&a);
//     switch(a){
//         case 1:
//         printf("addition:\n");
//         int b,c;
//         scanf("%d\n%d",&b,&c);
//         b=b+c;
//         printf("answer=%d\n",b);
//     printf("for M ent 1 or F ent 2:\n");
//     scanf("%d",&gender);
//     switch(gender){
//         case 1:
//         printf("answer=male\n");
//     printf("1 is even/odd,2 is vowel\n");
//     scanf("%d",&eo);   
//     switch(eo){
//         case 1: 
//         printf("enter num:\n");
//         int num; 
//         scanf("%d",&num);
//         if(num%2==0){
//             printf("even");
//         }else{
//             printf("odd");
//         }
//         break;
//         case 2:
//         printf("enter vowel:\n");
//         char ch;
//         scanf("%s",&ch);
//         if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')){
//             printf("%c is vowel",ch);
//         }else{
//             printf("%c is consonant",ch);
//         }
//     printf("enter character/num\n");
//     char alpha;   
//     scanf("%s",&alpha); 
//     switch(alphabet){
//         case 1:
//         if(alpha>='a'&&alpha<='z'||alpha>='A'&&alpha<='Z'){
//             printf("%c is alphabet",alpha);
//         }else{
//             printf("not alphabet");
//         }
//     }
//     }    
//         break;
//         case 2:
//         printf("answer=female\n");
//     }
//         break;
//         case 2:
//         printf("subtraction:\n");
//         int d,e;
//         scanf("%d\n%d",&d,&e);
//         d=d-e;
//         printf("answer=%d\n",d);
//     }
// }

    
//print table using single variable;
// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1;i<=10;i++){
//          printf("2*%d=%d\n",i,i*2);
//     }
// }

// #include<stdio.h>
// int main(){
//     int i,j=0;
//     for(i=1;i<=10;i++){
//         printf("%d\n",i); 
//           j=j+i;  
//     }
//     printf("answer=%d",j);
// }

//reverse 3 digit....
// #include<stdio.h>
// int main(){
//     int i,j;
//     printf("enter no:");
//     scanf("%d",&i);
//     j=i%10;
//     printf("%d",j);
//     j=i/10;
//     j=j%10;
//     printf("%d",j);
//     j=i/10;
//     j=j/10;
//     printf("%d",j);
// }

//reverse 4 digit without loop...
// #include<stdio.h>
// int main(){

// }

//print num into words.....
// #include<stdio.h>
// int main(){
//      int a,num;
//      printf("enter no:");
//      scanf("%d",&num);
//      while(num>0){
//           a=num/1000;
//           num=((num%1000)*10);
//           switch(a){
//                case 1:printf("one ");
//                      break;
//                case 2:printf("two ");
//                      break;
//                case 3:printf("three ");
//                      break;
//                case 4:printf("four ");
//                      break;
//                case 5:printf("five ");
//                      break;
//                case 6:printf("six ");
//                      break;
//                case 7:printf("seven ");
//                      break;
//                case 8:printf("eight ");
//                      break;
//                case 9:printf("nine ");
//                      break;
//                case 0:printf("zero ");
//                      break;
//                default:;      
//           }
//      }
// }



// #include<stdio.h>
// int main(){
//     int i,j;
//     printf("enter no:");
//     scanf("%d",&i);
//     j=i%10;
//     printf("%d",j);
//     j=i/10;
//     j=j%10;
//     printf("%d",j);
//     j=i/10;
//     j=j/10;
//     printf("%d",j);
// }




