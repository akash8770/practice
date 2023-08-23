// #include<stdio.h>
// int main(){
//     char ch;
//     printf("put vowel\n");
//     scanf("%c",&ch);

//     switch(ch){
//         case 'a':printf("vowel 1");
//         break;
//         case 'e':printf("vowel 2\n");
//         int b;
//         printf("put value\n");
//         scanf("%d",&b);
//         switch(b){
//             case 1:printf("mon");
//             break;
//             case 2:printf("tue");
//             break;
//             default:printf("opps");
//         }
//         break;
//         case 'i':printf("vowel 3\n");
//         int c;
//         printf("put value\n");
//         scanf("%d",&c);
//         switch(c){
//             case 1:printf("wed");
//             int a;
//             printf("enter no\n");
//             scanf("%d",&a);
//             switch(a){
//                 case 1:printf("zordar");
//                 break;
//                 case 2:printf("tagda");
//                 break;
//                 default:printf("opps");
//             }
//             break;
//             case 2:printf("thu");
//             break;
//             default:printf("opps");
//         }
//         break;
//          case 'o':printf("vowel 4\n");
//         int d;
//         printf("put value\n");
//         scanf("%d",&d);
//         switch(d){
//             case 1:printf("fri");
//             break;
//             case 2:printf("sat");
//             break;
//             default:printf("opps");
//         }
//         break;
//         default:printf("cons");
//     }
// }

#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a\n");
    scanf("%d",&a);
    printf("enter b\n");
    scanf("%d",&b);
    switch(a!=b){
        case 1 c=a,a=b,b=c:printf("%d",a);
             break;
        case 0:printf("%d",b);
             break;
        default:printf("opps");
    }
}