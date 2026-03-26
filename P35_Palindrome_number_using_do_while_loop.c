// check if teh given number is palindrome using do-while loop

#include<stdio.h>

int main(){

    int numGiven = 7;
    int num =numGiven;
    int reverse = 0 ;

    do {
        reverse=reverse*10+(num%10); 
        num=num/10;


    }while(num!=0);

   if (numGiven==reverse){
    printf("Yes , the give number is palindrome ");
  }else{
    printf("No, the number is not palindrome");
  }



    return 0;
}