//swap..........
#include<stdio.h>
int main(){
    int a[3][3];
    int b[3][3];
    int i,j;
    printf("enter first no\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){  
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d",a[i][j]); 
        }
        printf("\n");
    }
     printf("enter second no\n");
     for(i=0;i<2;i++){
        for(j=0;j<3;j++){   
            scanf("%d",&b[i][j]);
        }   
    }
   for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d",b[i][j]);
            b[i][j]=a[i][j];
        }
        printf("\n");
    }
    printf("ans is:-\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
}