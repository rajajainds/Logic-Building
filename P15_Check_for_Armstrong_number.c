//Check whether the given number is Armstrong Number 

#include<stdio.h>
#include<math.h>
int main(){

    int numGiven = 1634 ; 
    int num = numGiven ; //given number  
    int count = 0 ; // this will store count of each digit one by one 
    
    if (num != 0 ){
        
    while (num){
        num = num/10 ;
        count++ ;

    }
    }else{
        count = 1;
    }
  
    //calculate armstrong value of given number 
    int armstrongValue = 0;
    num=numGiven;
    int digit;
    while (num){
        digit = num%10;
        num = num/10 ;
        armstrongValue += pow(digit,count);

    }

    if (numGiven == armstrongValue){

    printf("Yes %d is a Armstrong Number \n",numGiven);
    }else{
         printf("No %d is not a Armstrong Number\n",numGiven);
    }
    return 0;
}