// Calculate Area And Perimeter Of Rectangle
// Area=Lenght*Breadth & Perimeter=2*(L+B)
#include<stdio.h>

int main (){
   float a,b;
   printf("Enter Lenght : ");
   scanf("%f",&a);

   printf("Enter Breadth : ");
   scanf("%f",&b);

   printf("Area Of Rectangle :%f\n",a*b);
   
   printf("Perimeter Of Rectangle:%f\n",(a+b)*2);

     return 0;
}