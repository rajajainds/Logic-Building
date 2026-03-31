//find and print the LCM of 2 numbers using for loop

#include<stdio.h>
#define MIN(a,b) (a>b?b:a)

int main(){

    int numA=25;
    int numB=75;

    int hcf=1;

    if(((numA+numB) - MIN(numA,numB))%MIN(numA,numB)==0){
        hcf=MIN(numA,numB);
    }else{

    for(int i=2;i<=(int)(MIN(numA,numB)/2);i++){
        if(numA%i==0 && numB%i==0){
            hcf=i;
        } }
    }


    //lcm(a,b)*hcf(a,b) == a*b
    // so a*b /(hcf(a,b))
    int lcm=(numA*numB)/hcf;

printf("The LCM of %d and %d is %d",numA,numB,lcm);
    return 0;
}