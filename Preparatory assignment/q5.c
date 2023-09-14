#include <stdio.h>

int main() {
    char character;
    
    printf("Enter a character: ");
    scanf(" %c", &character);  
    
    if (character >= 'A' && character <= 'Z') {
        printf("The character '%c' is an uppercase letter.\n", character);
    } else if (character >= 'a' && character <= 'z') {
        printf("The character '%c' is a lowercase letter.\n", character);
    } else if (character >= '0' && character <= '9') {
        printf("The character '%c' is a digit.\n", character);
    } else {
        printf("The character '%c' is neither an uppercase letter, lowercase letter, nor a digit.\n", character);
    }
    
    return 0;
}