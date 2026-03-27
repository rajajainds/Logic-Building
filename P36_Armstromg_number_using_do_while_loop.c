//find and print whether a number is Armstrong using do-while loop

#include<stdio.h>
#include<math.h>

int main (){

   int numGiven = 153;
    int num =numGiven;
    int count = 0 ;

    do {
        num=num/10;
        count++;


    }while(num!=0);

    int digit;
    int armstrongSum=0;
    num= numGiven;

     do {
        digit=num%10;
        num=num/10;
        armstrongSum+=pow(digit,count);

    }while(num!=0);

    if(numGiven==armstrongSum){
        printf("%d is a Armstrong Number",numGiven);
    }else{
        printf("No , %d is not a Armstrong Number",numGiven);
    }


    return 0;
}