#include<stdio.h>
int main(){
   int n;
   printf("Enter No Of Values :");
   scanf("%d",&n);
   int a[n];
   int sum=0;
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum=sum+a[i];
   }
   printf("Sum Is :%d \n",sum);
   printf("Average Is :%d \n ",sum/n);

    return 0;
}