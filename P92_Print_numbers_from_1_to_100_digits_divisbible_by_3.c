// Print the numbers divisible by 3 between 1 and 100

#include<stdio.h>
int divBy3(int num){
    int n = num;
    int sum=0;

    while(n){
        sum+= n%10;
        n=n/10;
    }
    if(sum%3==0){
        return 1;
    }

    return 0;
}


int main(){
    int start=1;
    int end=100;

    for(int i=start;i<=end;i++){
        
        if (divBy3(i)){
            printf("%d->",i);
        }
        
    }

    return 0;
}