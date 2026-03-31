//find and print the HCF of 2 numbers using for loop

#include<stdio.h>
#define MIN(a,b) (a>b?b:a)

int main(){

    int numA=25;
    int numB=75;

    int hcf=1;

    if(((numA+numB) - MIN(numA,numB))%MIN(numA,numB)==0){
        printf("The HCF of %d and %d is %d",numA,numB,MIN(numA,numB));
    }else{

    for(int i=2;i<=(int)(MIN(numA,numB)/2);i++){
        if(numA%i==0 && numB%i==0){
            hcf=i;
        }
    }
    printf("The HCF of %d and %d is %d",numA,numB,hcf);
    }

    return 0;
}