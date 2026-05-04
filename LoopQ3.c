#include <stdio.h>

int n,i=1;

int main(){

    printf("Please Enter Any Number N:");
    scanf("%d",&n);

   while( i <= n ){
    printf("%d",i);
    i++;
   }
   return 0;
}