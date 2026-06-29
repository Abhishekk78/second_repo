#include <stdio.h>

int main(){

    char str[100];
    int i;

    printf("Enter any string :");
    scanf("%[^\n]",&str);

    for(i=0;i<str[i] != '\0';i++){
        
        if(str[i] >= 'a' && str[i] <='z'){
            str[i] = str[i] - 32;
        }
    }
    printf(" Lower case to Upper Case : %s",str);
    return 0;
}