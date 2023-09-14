#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    //edge case
    if (argc < 2) {
        printf("Not enough numbers, Please enter atleast one number as argument\n");
        return 1; // Exit with an error 
    }

    // Initialize max with the first number provided
    int max = atoi(argv[1]);

    for (int i = 2; i < argc; i++) {
        int current = atoi(argv[i]);
        if (current > max) {
            max = current;
        }
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}




