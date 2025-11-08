#include<stdio.h>
#include<math.h>

int main(){
    int n,i;
    int sum;
   printf("Enter Value of n:");
    scanf("%d",&n);
    sum=0;

    for(i=0;i<=n;i=i+2){
            sum=sum+i;
            }
            printf("Sum Of Even No Is : %d\n",sum);

return 0;
}


