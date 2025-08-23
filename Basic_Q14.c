// Convert Celcius To Farenheit
//1Farenhiet=C*(9/5)+32
#include<stdio.h>

int main (){
    float a;
   printf("Enter Celcius (C): ");
   scanf("%f",&a);
    
   printf("Farenheit (F):%f \n",(a*9/5)+32); 
     return 0;
}