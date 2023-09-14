#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];
    char reversedString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    int length = strlen(inputString);

    // Reverse the string
    for (int i = 0; i < length; i++) {
        reversedString[i] = inputString[length - i - 1];
    }

    printf("Reversed string: %s\n", reversedString);

    return 0;
}
