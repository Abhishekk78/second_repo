#include <stdio.h>

int a = 10;
int b = 200;
int c = 30;


int main(){


   if(a > b){
    if(a > c){
        printf("a is grater");
    }
    else{
        printf("c is grater");
    }
   } 
   else{
    if( b > c){
        printf("b is grater");
    }
    else{
        printf("c is grater");
    }
   }
return 0;
}