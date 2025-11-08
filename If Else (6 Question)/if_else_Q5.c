// Q-5) Net Sales = Gross sales - Discount
//If Gross sales > 20000 , Discount=15%
//If Gross sales > 10000 , Discount=10%
//If Gross Sales < 10000 , Discount=5%
#include<stdio.h>

int main(){
    float a;
    printf("Enter Gross Sales :");
    scanf("%f",&a);

    if(a>20000){
        printf("Net Sales :%f \n",a-0.15*a);
    }

    else if (a>10000){
        printf("Net Sales  :%f \n",a-0.1*a);
    }

    else
        printf("Net Sales :%f \n",a-0.05*a);
return 0;
}


