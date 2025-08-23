// Calculate Net Sales
// Net Sales =Gross sales - Discount
//Discount:10%
#include<stdio.h>

int main (){
   float a;
   printf("Enter Gross Sales : ");
   scanf("%f",&a);

   printf("Net Sales :%f \n",a-(a*0.1));
     return 0;
}