#include<stdio.h>

int main(){
   int sum =0;

   for(int i=1;i<=100;i++){
        if(i%3==0){
            sum=sum+i;
        }
   }
    printf("Sum Of No Divisible by 3 :%d ",sum);
    return 0;
}