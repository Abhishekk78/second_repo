#include <stdio.h>

char ch = 'a';

int main(){

do{
    printf("%c",ch);
     ch = ch + 4;
}while(ch <= 'z');

return 0;

}