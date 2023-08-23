// #include<stdio.h>
// int main(){
// int i[]={10,20,30};
// for(int a=0;a<3;a++){
//     printf("%d\n",i[a]);
//    }
// }

//argument with return type....
// #include<stdio.h>
// int main(){
//     int aa(int);
//     int r;
//     int i[]={10,20,30};
//     for(int a=0;a<3;a++){
//         r=aa(a);
//         printf("%d\n",i[r]);
//     }   
// }
// int aa(int a){
//      return a;
// }

//argument with no return type...
// #include<stdio.h>
// int main(){
//     void aa(int);
//     int r;  
//     for(int a=0;a<3;a++){
//         aa(a);
//     }
// }
// int i[]={10,20,30};
// void aa(int a){
//     printf("%d\n",i[a]);
// }

//no argument with return type...

#include<stdio.h>
int aa();
int main(){
   int r;  
   r=aa();
    printf("%d",r);
}
int aa(){
    int i[]={10,20,30};
    for(int a=0;a<3;a++){
       // printf("%d");
        return a;
    }  
}

//no argument no return type.....
// #include<stdio.h>
// void aa();
// int main(){
//     aa();
// }
// void aa(){
//     int i[]={10,20,30};
//     for(int a=0;a<3;a++){
//         printf("%d\n",i[a]);
//     }
// }