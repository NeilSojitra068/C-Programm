#include<stdio.h>
int main(){
    int n;
    printf("Enter Number :-");
    scanf("%d",&n);
    while (n>0){
        int i=n%10;
        printf("%d,",i);
        n=n/10;

    }

}