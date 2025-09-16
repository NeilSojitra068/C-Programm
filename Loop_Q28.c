#include<stdio.h>
int main(){
    int n,i;
    printf("Enter No :");
    scanf("%d",&n);
    int sum = 0;
    for(i=1;i<=n/2;i++){
        sum=sum+i;
    }
    if(n=sum){
        printf("%d is Perfect Number",n);
    }
    else printf("%d is Not a Perfect Number ",n);
    return 0;
}