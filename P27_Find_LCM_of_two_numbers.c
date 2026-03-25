//find the LCM of two numbers using While Loop

// for this we knwo LCM(a,b) X HCF(a,b) =aXb  , so we will find HCF and with equation find LCM 
#define MIN(a, b) ((a) < (b) ? (a) : (b)) // to find minimun of two numbers

#include<stdio.h>

int main(){
    int numA = 12 ;
    int numB = 40 ;
    int iterate = 1;
    int hcf = 1;
    if(numA>0 && numB>0 ){ 
    if ((numA+numB - MIN(numA,numB)) % (MIN(numA,numB)) ==0){
        printf("LCM of %d and %d is %d",numA,numB,((int)(numA*numB)/(MIN(numA,numB))));
    }else{
    while(iterate<=(int)(MIN(numA,numB)/2)){
        if (numA%iterate==0 && numB%iterate==0){
            hcf=iterate;
        }
        iterate++;
    }
    printf("LCM of %d and %d is %d",numA,numB,((int)(numA*numB)/(hcf)));
    }
}else{
printf("Please enter positive numbers ");
}

    return 0;
}