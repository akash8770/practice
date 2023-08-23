//function matrix 2d multiplication...........
// #include<stdio.h>
// void multi(int [2][2],int [2][2],int [2][2]);
// int main(){
//     printf("multiplication matrix 2D");
//        int a[2][2];
//        int b[2][2];
//        int c[2][2];
//        multi(a,b,c);
// }
// void multi(int a[2][2],int b[2][2],int c[2][2]){
//         int i,j,k;
//            printf("enter value a\n");
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//         for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("%d",a[i][j]);
//         }
//         printf("\n");
//     }
//      printf("enter value b\n");
//         for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//         for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             c[i][j]=0;
//             for(k=0;k<2;k++){
//                 c[i][j]+=a[i][k]*b[k][j];  
//             }
//         }
//     }
//     printf("ans is:\n");
//         for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("%d",c[i][j]);
//         }
//         printf("\n");
//     }
// }

//no argument no return type.....

// #include<stdio.h>
// void multi();
// int main(){
//     printf("multiplication\n");
//     multi();
// }
// void multi(){
//      int a[2][2];
//      int b[2][2];
//      int c[2][2];
// int i,j,k;
//            printf("enter value a\n");
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//         for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("%d",a[i][j]);
//         }
//         printf("\n");
//     }
//      printf("enter value b\n");
//         for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//         for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             c[i][j]=0;
//             for(k=0;k<2;k++){
//                 c[i][j]+=a[i][k]*b[k][j];  
//             }
//         }
//     }
//     printf("ans is:\n");
//         for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("%d",c[i][j]);
//         }
//         printf("\n");
//     }
// }
    
//no argument with return type........

// #include<stdio.h>
// int multi();
// int main(){  
//     int x[2][2];
//     int i,j;
//     printf("multiplication matrix\n");
//     x[2][2]=multi();
//     printf("%d",x[i][j]);
// }

// void multi(){

//      int a[2][2];
//      int b[2][2];
//      int c[2][2];
//      int i,j,k;
//            printf("enter value a\n");
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//         for(i=0;i<2;i++){
//           for(j=0;j<2;j++){
//             printf("%d",a[i][j]);
//         }
//         printf("\n");
//     }
//      printf("enter value b\n");
//         for(i=0;i<2;i++){
//             for(j=0;j<2;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//         for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("%d",b[i][j]);  
//         }   
//         printf("\n");   
//     }
//     printf("ans is:\n");
//         for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             c[i][j]=0;
//             for(k=0;k<2;k++){
//         c[i][j]+=a[i][k]*b[k][j];  
//         return c[i][j];
//     }
//     }    
//     }
// }

//argument with no return type.......
#include<stdio.h>
int main(){
    void multi(int,int,int);
    int a[2][2];
    int b[2][2];
    int c[2][2];
    int i,j,k;
           printf("enter value a\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
        for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
     printf("enter value b\n");
        for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }
        for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            c[i][j]=0;
            for(k=0;k<2;k++){
                c[i][j]+=a[i][k]*b[k][j];  
            }
        }
    }
    printf("ans is:\n");
        for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
}


