// Q-1) Find Out The Largest and Smallest Of Two Value

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);

    if(a>b){
        printf("%d is greater Than %d \n",a,b);
        printf("%d is Smaller Than %d \n",b,a);
     }

    else {
        printf("%d is greater Than %d \n",b,a);
        printf("%d is Smaller Than %d \n ",a,b);

     }
    return 0;


}
