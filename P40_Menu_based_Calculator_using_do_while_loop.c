//menu based calculator fro choosing and doing different operations 

#include<stdio.h>

void Add(float numA,float numB){
  printf("Addition of %d and %d is %d\n",numA,numB,(float)(numA+numB));

}
void Sub(float numA,float numB){
  printf("Difference of %d and %d is %d\n",numA,numB,(float)(numA-numB));

}
void Div(float numA,float numB){
  printf("Division of %d and %d is %d\n",numA,numB,(float)(numA/numB));

}
void Mul(float numA,float numB){
  printf("Product of %d and %d is %d\n",numA,numB,(float)(numA*numB));

}


int main(){

    int pass =1;


    do{
        printf("++++ Menu based calc ++++\n");
        printf("[1]-Addition\n");
        printf("[2]-Subtraction\n");
        printf("[3]-Multiplication\n");
        printf("[4]-Division\n");
        printf("[0]-Exit\n");

        int choice;
        printf("Enter you operation:");
        scanf("%d",&choice);


        float numA,numB ;
        printf("Enter first operand : ");
        scanf("%f",&numA);

        printf("Enter second operand : ");
        scanf("%f",&numB);
        
        switch (choice){

            case 1:
            Add(numA,numB);
            break;

            case 2:
            Sub(numA,numB);
            break;

            case 3:
            Mul(numA,numB);
            break;

            case 4:
            Div(numA,numB);
            break;

            case 0:
            pass=0;
            break;

            default:
            printf("Enter valid option\n");




        }

       
    }while(pass);


    return 0;
}