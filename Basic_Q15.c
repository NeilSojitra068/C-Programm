// Convert Farenheit To Celcius
//1Celcius=(5/9)*(F-32)
#include<stdio.h>

int main (){
    float a;
   printf("Enter Farenheit (F):");
   scanf("%f",&a);
    
   printf("Celcius (C):%f\n",(a-32)*5/9); 
     return 0;
}