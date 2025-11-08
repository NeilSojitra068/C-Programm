#include<stdio.h>
int main(){
    int a [10]={1,2,3,4,5,6,7,8,9,10};
    int i,sum =0;
    for(i=0;i<10;i++){
        sum = sum + a[i];
    }
    printf("The Sum is :%d",sum);
    printf("Averge Is :%d",sum/10);

    return 0;
}