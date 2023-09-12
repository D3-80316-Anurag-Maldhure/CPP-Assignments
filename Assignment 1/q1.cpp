// Q1. Write a menu driven program for Date in a C and CPP language.
// Declare a structure Date having data members day, month, year. Implement the following functions.
// void initDate(struct Date* ptrDate);
// void printDateOnConsole(struct Date* ptrDate); void acceptDateFromConsole(struct Date* ptrDate);

#include <iostream>
using namespace std;

//Date structure to implement
struct Date
{
    int day;
    int month;
    int year;
};

// //Functions to implement 
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate); 
void acceptDateFromConsole(struct Date* ptrDate);

int main(){
    int choice =1;
    struct Date date;

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
                initDate(&date);
                break;
            case 2:
                //accept date from user
                acceptDateFromConsole(&date);
                break;
            case 3:
                printDateOnConsole(&date);
                break;
            default:
                printf("\nPlease enter a valid choice from above menu");
        }
    }
    return 0;
}

//Function to initialise Date structure data members
void initDate(struct Date* ptrDate){
    ptrDate->day = 01;
    ptrDate->month = 01;
    ptrDate->year = 2000;
}

//Function to display date 
void printDateOnConsole(struct Date* ptrDate){
    cout << "\nDay: \nDay: " << ptrDate->day << "\tMonth: " << ptrDate->month << "\tYear: " << ptrDate->year << "\n";
}

//Function to accept date from user
void acceptDateFromConsole(struct Date* ptrDate){
    cout << "\nPlease enter a date: \nEnter the date (Between 1 to 31): ";
    cin >> ptrDate->day;
    cout << "\nEnter a month (Between 1-12): ";
    cin >> ptrDate->month;
    cout << "\nEnter a year : ";
    cin >> ptrDate->year;
}


