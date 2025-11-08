/* Q-6) Calculate Average & Total Marks Of 3 Subject
If Average >=70 : Distinction
   Average >=60 : First
   Average >=50 : Second
   Average >=35 : Third
   Average <35  : Fail */

#include<stdio.h>

int main (){
    float a,b,c;
    printf("Enter Marks Of First Subject :");
    scanf("%f",&a);

    printf("Enter Marks Of Second Subject :");
    scanf("%f",&b);

    printf("Enter Marks Of Third Subject :");
    scanf("%f",&c);

    float avg=(a+b+c)/3;

    printf("Total Marks :%f\n",a+b+c);
    printf("Average Marks :%f\n  ",avg);

    if(avg>=70){
     printf("distinction\n");
    }
    else if (avg>=60){
    printf("first\n");
    }
    else if (avg>=50){
    printf("second\n");
    }
    else if (avg>=35){
    printf("third\n");
    }
    else 
    printf("Fail\n");

    return 0;
}