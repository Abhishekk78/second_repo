#include <stdio.h>

int strlength(char str[]){
    
    int i=0;
    
    while(str[i] != '\0'){
        i++;
    }

    return i;
}

int main(){
    
    char str[100];
    
    printf("Enter any string :");
    scanf("%s",&str);
    
    printf("The length of string is = %d",strlength(str));
    
    return 0;
}