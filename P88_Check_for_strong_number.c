//check whether the number is a strong number 

#include<stdio.h>

int fact(int x){
    int fact =1;
    if(x<=1){
        return 1;
    }else{
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
    }
 return fact;
}


int main(){

    int numGiven=145;
    int num=numGiven;
    int digit=0;

    int strongVal=0;

    while(num){
        digit=num%10;
        num=num/10;

        strongVal+=fact(digit);
    }

    if(numGiven==strongVal){
        printf("The number is a strong number %d",numGiven);
    }else{
        printf("The number is not a strong number %d",numGiven);

    }

    return 0;
}