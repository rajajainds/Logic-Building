//find the HCF of given 2 numbers using do-while loop
#include<stdio.h>

#define MIN(a,b) ((a<b)?a:b)

int main(){
    int numA = 14;
    int numB = 32 ;
    
    int hcf = 1;
    

    
        if(numA <= 0 || numB <=0){
            printf("Please enter valid numbers for HCF");
        }
        else if( ((numA+numB - MIN(numA,numB))%(MIN(numA,numB))  == 0)){
            printf("The hcf of %d , %d is %d",numA,numB,MIN(numA,numB));
        }else{
            int iterate=1;
            
            do{
                if (numA%iterate==0 && numB%iterate ==0){
                    hcf=iterate;
                }
                iterate++;
         
             }while(iterate<=(int)MIN(numA,numB)/2);

             printf("The hcf of %d , %d is %d",numA,numB,hcf);

        }


    return 0;
}