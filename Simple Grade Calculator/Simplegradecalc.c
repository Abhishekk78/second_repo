#include <stdio.h>

int Score;
char grade;

int main(){

    printf("Enter a score (0-100):");
    scanf("%d",&Score);

    if(Score < 0 || Score > 100){
        printf("Please enter valid score! range between 0-100");
        return 0;
    }

    grade = (Score >=90)? 'A' : (Score >=80) ?'B' : (Score >=70) ? 'C' : (Score >=60) ? 'D' : (Score >=50) ? 'E' : 'F';

    printf("Your Grade Is %c.",grade);


    switch(grade){

        case 'A':
        printf("Excellent Work\n");
        break;

        case 'B':
        printf("Well Done\n");
        break;

        case 'C':
        printf("Good Job\n");
        break;

        case 'D':
        printf("Hopfully Improve\n");
        break;

        case 'E' :
        printf("Pass\n");
        break;

        case 'F' :
        printf("Fail\n");
        break;
    }

    if(grade == 'F'){
        printf("Better Luck Next Time");
        }
        else{
            printf("Congratulations! You are eligable to the next level");
        }
       

    return 0;
}