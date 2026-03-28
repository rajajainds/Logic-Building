//keep taking input from user until a negative number is entered and then pritn the number of positive number entered 

#include<stdio.h>

int main (){

    int count=0;
    int num;
    int pass=1; //to continue the loop until the negative number is entered 
    do{
        printf("Enter a number :");
        scanf("%d",&num);

        if(num>=0){
            count++;
        }else {
            pass=0;
        }
    }while(pass);

    printf("The total positive numbers enters are : %d",count);



    return 0;
}