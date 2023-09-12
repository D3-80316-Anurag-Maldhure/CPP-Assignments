// Q1. Write a menu driven program for Date in a C and CPP language.
// Declare a structure Date having data members day, month, year. Implement the following functions.
// void initDate(struct Date* ptrDate);
// void printDateOnConsole(struct Date* ptrDate); void acceptDateFromConsole(struct Date* ptrDate);

#include <stdio.h>

//Date structure to implement
struct Date
{
    int day;
    int month;
    int year;
};

//Functions to implement 
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate); 
void acceptDateFromConsole(struct Date* ptrDate);

int main(){
    int choice =1;
    char yesOrNo;
    struct Date today;

    while(choice!=0){
        printf("\nSelect from the choices below: \n");
        printf("0. Exit \n");
        printf("1. Init a date \n");
        printf("2. Input a date and store \n");
        printf("3. Display the date \n");
        printf("Please enter your choice: \n");
        scanf("%d", &choice);

        if(choice ==0){
            break;
        }

        switch (choice){
            case 1:
                //init a predefined date 
                initDate(&today);
                break;
            case 2:
                //accept date from user
                acceptDateFromConsole(&today);
                break;
            case 3:
                printDateOnConsole(&today);
                break;
            default:
                printf("\nPlease enter a valid choice from above menu\n");
        }
    }
    
    return 0;
}

//Function to initialise Date structure data members
void initDate(struct Date* ptrDate){
    ptrDate->day = 9; 
    ptrDate->month = 9;
    ptrDate->year = 2023;
}

//Function to display date 
void printDateOnConsole(struct Date* ptrDate){
    printf("\nDate: \nDay: %d \t Month: %d \t Year: %d \n", ptrDate->day, ptrDate->month, ptrDate->year);
}

//Function to accept date from user
void acceptDateFromConsole(struct Date* ptrDate){
    printf("\nPlease enter the date: \n");
    printf("Enter the date (Between 1 to 31) \n");
    scanf("%d", &ptrDate->day);
    printf("Enter the month (Between 1 to 12): \n");
    scanf("%d", &ptrDate->month);
    printf("Enter the year: \n");
    scanf("%d", &ptrDate->year);
}






