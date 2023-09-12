//Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
// Date is having data members day, month, year. Implement the following functions.
// void initDate(struct Date* ptrDate);
// void printDateOnConsole(struct Date* ptrDate); 
//void acceptDateFromConsole(struct Date* ptrDate); 
//bool isLeapYear();

//Implementing solution using class and structure is almost same as class is also a structure

#include<iostream>
using namespace std;

//Date class to implement
class Date{
    public:
        int day;
        int month;
        int year;

        bool isLeapYear(){
            if(year%4 == 0 || year %400 ==0)
                return true;
            else
                return false;
        }
};

//Functions to implement
void initDate(Date* ptrDate);
void printDateOnConsole(Date ptrDate); 
void acceptDateFromConsole(Date* ptrDate); 

int main(){
    int choice =1;
    bool Leap;

    //Creating object of Date class
    Date date;

    while(choice!=0){
        printf("\nSelect from the choices below: \n");
        printf("0. Exit \n");
        printf("1. Init a date object \n");
        printf("2. Display the date \n");
        printf("3. Input a date and store \n");
        printf("4. Check if the year of date is Leap year or not \n");
        printf("Please enter your choice: \n");
        scanf("%d", &choice);

        switch (choice){
            case 0:
                break;
            case 1:
                //init a predefined date 
                initDate(&date);
                break;
            case 2:
                printDateOnConsole(date);
                break;
            case 3:
                //accept date from user
                acceptDateFromConsole(&date);
                break;
            case 4:
                if (date.isLeapYear()){
                    cout << "The year " << date.year << " is a leap year";
                }
                else{
                    cout << "The year " << date.year << " is not a leap year";
                }
                break;
            default:
                printf("\nPlease enter a valid choice from above menu");
        }
    }
    
    return 0;
}

//pass by value won't work so pass by refernece
void initDate(Date* ptrDate){
    ptrDate->day = 01;
    ptrDate->month = 01;
    ptrDate->year = 2000;
}

//pass by value works 
void printDateOnConsole(Date ptrDate){
    cout << "\nDay: \nDay: " << ptrDate.day << "\tMonth: " << ptrDate.month << "\tYear: " << ptrDate.year << "\n";
}

//pass by value won't work so pass by refernece
void acceptDateFromConsole(Date* ptrDate){
    cout << "\nPlease enter a date: \nEnter the date (Between 1 to 31): ";
    cin >> ptrDate->day;
    cout << "\nEnter a month (Between 1-12): ";
    cin >> ptrDate->month;
    cout << "\nEnter a year : ";
    cin >> ptrDate->year;
}


