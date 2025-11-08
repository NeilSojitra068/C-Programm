#include<stdio.h>
int main(){
    int n;
    printf("Enter Number :-");
    scanf("%d",&n);
    int sum =0;

    while (n>0){
        int i=n%10;
        sum=sum+i;
        n=n/10;
    }
    printf("Sum Of Digits :%d",sum);
}