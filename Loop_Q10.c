#include<stdio.h>
#include<math.h>

int main(){
    int n,i;
    int fact;
   printf("Enter Value of n:");
    scanf("%d",&n);
    fact=1;

    for(i=1;i<=n;i++){
            fact=fact*i;
            }
            printf("Factorial of %d is : %d\n",n,fact);

return 0;
}


