#include <stdio.h>

int arr[] = {1,2,3,4,5};
int i;

int main(){

for(i=0;i<5;i++){
    printf("%d\n",arr[i]);
}

return 0;

}



// Q2


// #include <stdio.h>

// int arr[] = {12,42,18,50,26};
// int sum=0;

// int main(){

//     for( int i=0;i<5;i++){
        


//     sum +=arr[i];


//     float avg = sum/5;
    
    
//     printf("Average of %.2f\n",avg);
//     }
//     printf("Sum: %d\n", sum);
//     return 0;
// }



// Q3


// #include <stdio.h>



// int main(){

//     int arr1[5] = {7,4,9,5,2};
// int arr2[5] = {1,3,1,7,3};
// int sum[5];

// for(int i=0;i<5;i++){
//     sum[i] = arr1[i] + arr2[i];
// }
    
//     for(int i=0;i<5;i++){
//         printf("%d\n",sum[i]);
//     }

//     return 0;
// }



// reverse of an array


// #include <stdio.h>


// int main(){
    
//     int arr[5] = {5,2,7,9,6};

//     int revese[5];

//     int j=0;


//    for(int i=4;i>=0;i--){
//     revese[j] = arr[i];
//     j++;
//    }

//     for(int i=0;i<5;i++){
//         printf("%d\n",revese[i]);
//     }


//     return 0;


//     }





// Q: sum of array using pointer 

// #include <stdio.h>

// void sum(int *ptr,int l){
    
//     int sum=0,i;
    
//     for(i=0;i<l;i++){
//         sum+= *(ptr+i);
//     }
//     printf("The sum of = %d\n",sum);
// }

// int main(){
    
//     int arr[] = {5,7,2,8,9};
    
//     int l = sizeof(arr)/sizeof(arr[0]);
    
//     sum(arr,l);
// }



// Q: check palandrom or not 

// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// bool checkpalandrom(char str[]){
    
//     int l = strlen(str);
//     int right = l-1;
//     int left = 0;
    
//     while(left<right){
//         if(str[left] != str[right]){
//             return false;
//         }
//         left++;
//         right--;
//     }
//     return true;
// }

// int main(){
    
//     char str[] = "madamadas";
    
//     if(checkpalandrom(str)){
//         printf("It is palandrom");
//     }
//     else{
//                 printf("It is  not palandrom");
//     }
//     return 0;
// }