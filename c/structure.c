//  #include<stdio.h>
// struct emp{
//     int id;
//     char name;
// };
// int main(){
//     struct emp e1;
//     e1.id=10;
//     printf("%d",e1.id);
// }

// #include<stdio.h>
// struct emp{
//     int id;
//     char name;
// }e1;
// int main(){
//     e1.id=10;
//     printf("%d",e1.id);
// }

// #include<stdio.h>
// struct emp{
//     int id;
//     float inch;
//     char name;
// };
// int main(){
//     struct emp e1;
//     e1.id;
//     printf("enter id:-\n");
//     scanf("%d",&e1.id);
//     printf("%d",e1.id);
// }

// #include<stdio.h>
// struct emp{
//     int id;      //global struct
//     float inch;
//     char name[30];
// };
// struct emp e2;global   //global variable
// int main(){
//     struct emp e1;
//     e1.id;
//     struct emp e2;
//     e2.inch;
//     printf("enter id:-\n");
//     scanf("%d",&e1.id);
//     printf("%d",e1.id);
//     printf("enter inch\n");
//     scanf("%f",&e2.id);
//     printf("%f",e2.id);
// }


// #include<stdio.h>
// int main(){
//     struct emp{
//     int id;
//     float inch;
//     char name;
// }e1;
//     struct emp e2;
//     printf("enter id:-\n");
//     scanf("%d",&e1.id);
//     printf("%d",e1.id);
//      printf("enter id:-\n");
//     scanf("%f",&e2.inch);
//     printf("%f",e2.inch);
//     e2.inch=(float)e1.id+e2.inch;
//     printf("%f",e2.inch);
// }


// #include<stdio.h>
// int main(){
//     struct emp{
//     int id;
//     char name[20];
//     float salary;

// }e1;
//     struct emp e2;
//     int n=5;
//     for(int i=1;i<=n;i++){
//         printf("enter id:\n");
//         scanf("%d",&e1[i].id);
//         printf("enter name:\n");
//         scanf("%s",&e1[i].name);
//         printf("enter salary:\n");
//         scanf("%f",&e1[i].salary);
//     }
//     for(int i=1;i<=n;i++){
//         printf("%d",e1[i].id);
//         printf("%s",e1[i].name[20]);
//         printf("%f",el[i].salary);
//     }  
// }


// #include <stdio.h>
// #include <stdlib.h>
 
// typedef struct{
//     char name[30];
//     int id;
//     double salary;
// } Employee;
 
// int main()
// {
//     //number of employees
//     int n=5;

//     //array to store structure values of all employees
//     Employee employees[n];
 
//     //Taking each employee detail as input
//     printf("Enter %d Employee Details \n \n",n);
//     for(int i=0; i<n; i++){
//         printf("Employee %d:- \n",i+1);

//         //Name
//         printf("Name: ");
//         scanf("%[^\n]s",employees[i].name);

//         //ID
//         printf("Id: ");
//         scanf("%d",&employees[i].id);

//         //Salary
//         printf("Salary: ");
//         scanf("%lf",&employees[i].salary);

//         //to consume extra '\n' input
//         char ch = getchar();
 
//         printf("\n");
//     }
 
//     //Displaying Employee details
//     printf("All Employees Details\n");
//     for(int i=0; i<n; i++){
//         printf("Name \t: ");
//         printf("%s \n",employees[i].name);
 
//         printf("Id \t: ");
//         printf("%d \n",employees[i].id);
 
//         printf("Salary \t: ");
//         printf("%.2lf \n",employees[i].salary);
 
//         printf("\n");
//     }
 
//     return 0;
// }


// #include<stdio.h>
// struct stud{
//     int rollno;
//     char name[10];
// };
// int main(){
//     int n=4;
//     struct stud s[n];
//     for(int i=1;i<=n;i++){
        
//         printf("enter rollno:\n");
//         scanf("%d",&s[i].rollno);
//         printf("enter name:\n");
//         scanf("%s",&s[i].name);
//     } 
//     for(int i=1;i<=n;i++){
//         printf("%d\n",s[i].rollno);
//         printf("%s\n",s[i].name);
//     }
// }

// book name,total page,price...
// #include<stdio.h>
// struct r
// {
//     struct d
//     {
//         char name[30];
//         int page;
//         float price;
//     }d1;
// };
// int main(){
//     int n=3;
//     struct r r1[n];
//     for(int i=1;i<=n;i++){
//         printf("enter name\n");
//         scanf("%s",&r1[i].d1.name);
//         printf("enter pages\n");
//         scanf("%d",&r1[i].d1.page);
//         printf("enter price\n");
//         scanf("%f",&r1[i].d1.price);
//     }
//        for(int i=1;i<=n;i++){
//         printf("name=%s\n",r1[i].d1.name);
//         printf("page=%d\n",r1[i].d1.page);
//         printf("price=%.2f\n",r1[i].d1.price);
//     }
// }


//name,rollno,marks,pass fail.
// #include<stdio.h>
// union stud{
//     int rollno;
//     char name[10];
//     float marks;
// };
// int main(){
//     int n=4;
//     union stud s[n];
//     for(int i=1;i<=n;i++){
        
//         printf("enter rollno:\n");
//         scanf("%d",&s[i].rollno);
//         printf("enter name:\n");
//         scanf("%s",&s[i].name);
//         printf("enter marks\n");
//         scanf("%f",&s[i].marks);
//     } 
//     for(int i=1;i<=n;i++){
//         printf("%d\n",s[i].rollno);
//         printf("%s\n",s[i].name);
//         printf("%f\n",s[i].marks);
//         //int a=33;
//         // if(s[i].marks>=a){
//         //     printf("pass");
//         // }else{
//         //     pintf("fail");
//         // }
//     }
// }


#include<stdio.h>
#include<string.h>
struct stud{
    int rollno;
    char name[30];
    float marks;
};
int main(){
    int n=3;
    int a;
    struct stud s[n];
    printf("press 1 for details,2 marks,3 id\n");
    scanf("%d",&a);
switch(a){
     case 1:
     strcpy(s[0].name,"chunnu");
     strcpy(s[1].name,"munnu");
     strcpy(s[2].name,"jack sparrow");
        for(int i=0;i<=2;i++){
          printf("%s\n",s[i].name);
      }
     break;
     case 2:
     s[0].marks=89.5;
     s[1].marks=95.5;
     s[2].marks=99.8;
     for(int i=0;i<=2;i++){
         printf("%f\n",s[i].marks);
     }
     break;
     case 3:
     s[0].rollno=1;
     s[1].rollno=2;
     s[2].rollno=3;
     for(int i=0;i<=2;i++){
         printf("%d\n",s[i].rollno);
     }      
    }
}


