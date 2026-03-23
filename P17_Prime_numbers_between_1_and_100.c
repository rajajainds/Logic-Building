//find and print all the prime number between 1 and 100

#include<stdio.h>
#include<math.h>

int isPrime(int num){
    if(num<=1){
        return 0;
    }else{

    int iterate = 2;
    while(iterate <= (int)sqrt(num)){
        if (num%iterate==0){
            return 0;
        }
        iterate++;
    }
    return 1;
    
    }
}


int main(){

    int start = 1;
    int end = 100;


    while(start<=end){
        if (isPrime(start)){
            printf("Prime --> %d\n",start);
        }
        start++;
    }
    

    return 0;
}
