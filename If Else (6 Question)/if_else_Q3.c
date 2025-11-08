// Q-3) Net Salary = Gross salary + allowance - deduction
//If Gross salary > 10000 , Allowance=10% & Deduction=3%
//If Gross salary > 5000 ,  Allowance=7% & Deduction=2%
// If Gross Salary < 5000 Not Applicable
#include<stdio.h>

int main(){
    float a;
    printf("Enter Gross Salary :",a);
    scanf("%f",&a);

    if(a>10000){
        printf("Net Salary :%f \n",a+(0.1*a)-(0.03*a));
    }

    else if (a>5000){
        printf("Net Salary :%f \n",a+(0.07*a)-(0.02*a));
    }

    else
        printf("Not Applicable");

return 0;

}

