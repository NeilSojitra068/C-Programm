#include<stdio.h>
//void minemax(int*,int*,int[],int);
int main (){
    int n;
    int *min,*max;
    printf("Enter Total No of Elements:");
    scanf("%d",&n);
    int a[100];

    for(int i=0;i<n;i++){
        printf("Enter %d:",i+1);
        scanf("%d",&a[i]);
    }

    minemax(*min,*max,a[100],n);
    printf("Min :%d \n",*min);
    printf("Max :%d \n",*max);
return 0;
}
void minemax(int *min,int *max,int a[100],int n)
{

*max=a[0];
*min=*max;

for(int i= 1;i<n;i++){
    if(a[i]<*min){
        *min=a[i];
    }
    if(a[i]>*max){
        *max=a[i];
    }
}
}

