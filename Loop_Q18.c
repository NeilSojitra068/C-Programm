#include<stdio.h>
int main(){
    int n[50],sum,sumn;
    sum=0;
    sumn=0;
    for(int i =0;i<50;i++){
        printf("No %d :",i+1);
        scanf("%d",&n[i]);
    }

    for(int i =0;i<50;i++){
    if (n[i]==1){
        sum=sum+n[i];
    }
    }
    printf("No Of Male :- %d",sum);
    printf("\n");

    for(int i =0;i<50;i++){
    if (n[i]==2){
        sumn=sumn+n[i];
        }
    }
      printf("No Of Female :- %d",sumn);
      return 0;

}
