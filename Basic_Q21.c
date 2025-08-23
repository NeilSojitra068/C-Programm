// Calculate Net Salary
// Net Salary=Gross salary+Allowance-Deduction
//Allowance=10% & Deduction=3%
#include<stdio.h>

int main (){
   float a;
   printf("Enter Gross Salary : ");
   scanf("%f",&a);

   printf("Net Salary :%f \n",a+(0.1*a)-(0.03*a));
   
     return 0;
}