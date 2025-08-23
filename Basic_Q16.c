// Calculate Simple Interest
// Simple Interest=Prinipalvalue*Rate*Time/100
#include<stdio.h>

int main (){
    float a,b,c;
   printf("Enter Principal Value : ");
   scanf("%f",&a);
   printf("Enter Rate Of Interest ('%') : ");
   scanf("%f",&b);
   printf("Enter Time : ");
   scanf("%f",&c);
    
   printf("Simple Interest (I) :%f \n",(a*b*c)/100); 
     return 0;
}