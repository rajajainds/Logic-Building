//print the numbers between 1 and n whose binary representation contains even 1's

#include <stdio.h>
#include <stdlib.h>


int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        n &= (n - 1); 
        count++;
    }
    return count;
}

void printEvenSetBits(int n) {
    printf("Numbers from 1 to %d with even number of 1s in binary:\n", n);
    for (int i = 1; i <= n; i++) {
        if (countSetBits(i) % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1) return 1;

    printEvenSetBits(n);

    return 0;
}

