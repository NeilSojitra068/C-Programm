#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter String : ");
    gets(str);
    strrev(str);
    printf("Vertical String :\n");
    for(int i=0;str[i]!='\0';i++){
      printf("%c\n",str[i]);
    }
return 0;
}
