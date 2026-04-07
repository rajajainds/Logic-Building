//palindrome numbers between 1 and 500 

#include<stdio.h>

int isPalindrome(int num){
    int n = num;
    
    int reverse=0;

    while(n){
        reverse=reverse*10 + n%10;
        n=n/10;

    }

    if(reverse==num){
        return 1;
    }


    return 0;
}

int main(){

for(int i=1;i<=500;i++){
    if(isPalindrome(i)){
    printf("%d->",i);
    }
}

    return 0;
}