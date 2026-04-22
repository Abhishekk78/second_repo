#include <stdio.h>

float p,r,t,si;

int main(){

  printf("Enter principle:");
  scanf("%f",&p);
  printf("Enter rate:");
  scanf("%f",&r);
  printf("Enter time:");
  scanf("%f",&t);
  si = p*r*t/100;
  printf("Simple intrest = %2.f",si); 
  return 0 ;

}