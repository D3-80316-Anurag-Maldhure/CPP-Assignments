#include <stdio.h>

//function declaration
void fibonacci(int n); 

int main() {
    int num;
    printf("This is a program to find Fibonnaci series upto given numbers \n");
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive number\n");
    } else {
        fibonacci(num);
    }

    return 0;
}

//definition
void fibonacci(int n){
    int first = 0,  second = 1, next;

    printf("Fibonacci Series up to %d numbers: ", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\n");
}
