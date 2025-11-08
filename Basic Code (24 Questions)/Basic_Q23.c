// Calculate Average Of 3 Subjects
// Average=Addition of 3 Sub/3
#include<stdio.h>

int main (){
    float a,b,c;
   printf("Enter Marks Of Subject 1 : ");
   scanf("%f",&a);
   printf("Enter Marks Of Subject 2 : ");
   scanf("%f",&b);
   printf("Enter Marks Of Subject 3 : ");
   scanf("%f",&c);
    
   printf("Average Marks :%f \n",(a+b+c)/3); 
   printf("Total Marks :%f \n",a+b+c);
     return 0;
}