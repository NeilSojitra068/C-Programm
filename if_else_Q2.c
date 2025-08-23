// Q-2)Find The Largest And Smallest Value Among 3 Numbers
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter 1st Number :",a);
    scanf("%d",&a);
    printf("Enter 1st Number :",b);
    scanf("%d",&b);
    printf("Enter 1st Number :",c);
    scanf("%d",&c);

    if(a>b && b>c){
        printf("%d is Largest\n",a);
        printf("%d is smallest\n",c);
    }

    else if (a>c && c>b){
        printf("%d is Largest\n",a);
        printf("%d is smallest\n",b);
    }

    else if (b>c && c>a){
        printf("%d is Largest\n",b);
        printf("%d is smallest\n",a);
    }

    else if (b>a && a>c){
        printf("%d is Largest\n",b);
        printf("%d is smallest\n",c);
    }
    else if (c>b && b>a){
        printf("%d is Largest\n",c);
        printf("%d is smallest\n",a);
    }

    else {

        printf("%d is Largest\n",c);
        printf("%d is smallest\n",b);
    }

    return 0;
}