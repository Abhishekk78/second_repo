#include <stdio.h>

int n,i;
long long fact = 1;

int main(){

  printf("Ente A Number :");
  scanf("%d",&n);

  for ( i = 1; i <= n ; i++)
  {
    fact = fact * i;
  }
  
  printf("Total Number of Factorial is %d => %lld",n,fact);


return 0;

}