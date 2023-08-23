#include<stdio.h>
int main(){
    char ch;
    printf("put any vowels('a','e','i','o','u'..)\n");
        scanf("%c",&ch);
//first switch is here for vowels:-
        switch(ch){
            case 'a':printf("this is vowel one\n");
            break;
            case 'e':printf("this is vowel two\n");
            //second switch is here for days:-
            int a;
            printf("press any no for day(1to7)\n");
            scanf("%d",&a);
            switch (a){
                case 1:printf("MONDAY\n");
                //third switch is here inside monday:-
                int b;
                printf("put no. for hello or hii...!\n");
                scanf("%d",&b);
                switch (b){
                    case 1:printf("HELLO\n");
                          //fourth switch is here inside hello:-
                    
                    int c,d,e;
                    printf("enter no for sum-1,sub-2,multi-3,div-4\n");
                    scanf("%d",&c);
                    printf("enter first no.:-\n");
                    scanf("%d",&d);
                    printf("enter second no.:-\n");
                    scanf("%d",&e);
                    switch(c){
                        case 1: e=d+e;
                        printf("%d",e);
                        break;
                        case 2: e=d-e; 
                        printf("%d",e);
                        break;
                        case 3: e=d*e;
                        printf("%d",e);
                        break;
                        case 4: e=d/e;
                        printf("%d",e);
                        break;
                        default:printf("opps");
                    }
                    break;
                    case 2:printf("Hii...!\n");
                    break;
                    default:printf("opps");
                }
                break;
                case 2:printf("TUESDAY");
                break;
                case 3:printf("WEDNESDAY");
                break;
                case 4:printf("THURSDAY");
                break;
                case 5:printf("FRIDAY");
                break;
                case 6:printf("SATARDAY");
                break;
                case 7:printf("SUNDAY");
                break;
                default:printf("opps");

            }
            break;
            case 'i':printf("vowel three");
           
            break;
            case 'o':printf("vowel four");
            break;
            case 'u':printf("vowel five");
            break;
            default:printf("opps");
        }
    
}