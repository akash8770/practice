//multiplcation matrix....**

#include<stdio.h>
int main(){
    int a[2][2];
    int b[2][2];
    int c[2][2];
    int i,j,k;
    printf("enter first no\n");
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
    printf("enter second no\n");
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
    printf("ans is:-\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
}