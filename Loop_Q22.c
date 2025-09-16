#include<stdio.h>
int main(){
    int n;
    printf("Enter Number :");
    scanf("%d",&n);
    int sum=0;
    while (n>0){
        int i=n%10;

        n=n/10;
        sum=sum+1;
    }
printf("Total Digit : %d ",sum);
}