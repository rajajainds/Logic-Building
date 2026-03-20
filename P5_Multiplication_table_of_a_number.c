//Print Multiplication Table of a number N from N X 1 to N X 10 using While Loop

#include<stdio.h>

int main (){ 

    int num = 6 ; // any number N
    int iterate = 1 ;
    int iter_till = 10 ;
    printf("===== Multiplication Table of %d===== \n",num);
    while (iterate<=iter_till) { 

        printf("%d X %d = %d \n",num,iterate,(num*iterate));
        iterate++;
    }

    return 0;
}