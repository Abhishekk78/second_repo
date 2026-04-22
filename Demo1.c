#include <stdio.h>

char name[50];
char phone[10];
int age;

int main(){

    printf("Enter Your Name:");
    scanf("%s",&name);
    printf("Enter Your Mobile No:");
    scanf("%d",&phone);
     printf("Enter Your Age:");
    scanf("%d",&age);
    printf("User details : %s,%d ,%d",name,phone,age);
    return 0 ;

}