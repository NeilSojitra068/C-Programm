#include<stdio.h>

int main(){
    int i;
    int sum;
    sum=0;
for(i=1;i<=100;i++){
    if(i%13!=0){
        continue;
    }
    sum = sum+i;
    }
    printf(" Sum is : %d \n",sum);

return 0;
}


