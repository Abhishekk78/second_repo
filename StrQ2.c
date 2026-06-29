<<<<<<< HEAD
#include <stdio.h>

int main(){

    char str[100];
    int i;

    printf("Enter any string :");
    scanf("%[^\n]",&str);

    for(i=0;i<str[i] != '\0';i++){
        
        if(str[i] >= 'A' && str[i] <='Z'){
            str[i] = str[i] + 32;
        }
    }
    printf(" Upper case to Lower Case : %s",str);
    return 0;
=======
#include <stdio.h>

int main(){

    char str[100];
    int i;

    printf("Enter any string :");
    scanf("%[^\n]",&str);

    for(i=0;i<str[i] != '\0';i++){
        
        if(str[i] >= 'A' && str[i] <='Z'){
            str[i] = str[i] + 32;
        }
    }
    printf(" Upper case to Lower Case : %s",str);
    return 0;
>>>>>>> 4fbfcda7c0edc0d5aab7af338e43ca9765e70500
}