// Convert Dollars into Pound
//1 Dollar=48 Rupees & 1Pound=70 Rupees & 1Dollar=70/48 Pounds
#include<stdio.h>

int main (){
    float a;
   printf("Enter Dollars : ");
   scanf("%f",&a);
    
   printf("Pounds :%f \n",70*a/48); 
     return 0;
}