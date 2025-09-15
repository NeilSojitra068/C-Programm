#include<stdio.h>
int main(){
  int n[100],i;

  for (i=0;i<100;i++){
    printf("Enter %d Value :",i);
    scanf("%d",&n[i]);
  }
  int min,max;
  min=max=n[0];

  for(i=0;i<100;i++){
    if(n[i]<min){
        min=n[i];
    }
    else if (n[i]>max){
        max=n[i];
    }
}
    

  

  printf("The Max Value Is :%d \n",max);
  printf("The Min Value Is :%d \n",min);
  return 0;
}