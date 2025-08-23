// Convert Byte Into KB,MB And GB
//1GB=1000Mb , 1Mb=1000Kb, 1Kb=1000byte
#include<stdio.h>

int main (){
    float a;
   printf("Enter Bytes : ");
   scanf("%f",&a);
    
   printf("Kilobytes (KB) :%f \n",a/1000); 
   printf("Megabyte (MB) :%f \n",a/(1000*1000));
   printf("Gigabyte (GB) :%f \n",a/(1000*1000*1000));
   
     return 0;
}