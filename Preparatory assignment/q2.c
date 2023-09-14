#include <stdio.h>

//declaration
int factorial(int);

int main() {
    int num;
    printf("Enter a number whose factorial you want to calculate: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Cannot calculate factorial for negative number\n");
    } else {
        int result = factorial(num);
        printf("The factorial of %d is %d\n", num, result);
    }

    return 0;
}

//definition
// Function to calculate the factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}






