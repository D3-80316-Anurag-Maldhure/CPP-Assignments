// Q3. Write a menu driven program for Student in CPP language.
// Create a class student with data members roll no, name and marks. Implement the following functions
// void initStudent(struct Student* ptrStudent);
// void printStudentOnConsole(struct Student * ptrStudent); void acceptStudentFromConsole(struct Student * ptrStudent);

#include <iostream>
using namespace std;

//Student class to implement
struct Student{
    int rollNo;
    string name; //needs namespace std and doesn't work with <string>
    int marks;

};

//Functions to implement
void initStudent(struct Student* ptrStudent);
void printStudentOnConsole(struct Student * ptrStudent);
void acceptStudentFromConsole(struct Student * ptrStudent);

int main(){
    int choice =1;
    Student student;

    while(choice!=0){
        printf("\nSelect from the choices below: \n");
        printf("0. Exit \n");
        printf("1. Init a student \n");
        printf("2. Display the student details \n");
        printf("3. Input student fields \n");
        printf("Please enter your choice: \n");
        scanf("%d", &choice);

        if(choice ==0){
            break;
        }
        
        switch (choice){
            case 0:
                break;
            case 1:
                //init a predefined date 
                initStudent(&student);
                break;
            case 2:
                //accept date from user
                printStudentOnConsole(&student);
                break;
            case 3:
                acceptStudentFromConsole(&student);
                break;
            default:
                printf("\nPlease enter a valid choice from above menu");
        }
    }
    return 0;
}

//Function to initialise student object 
void initStudent(struct Student* ptrStudent){
    ptrStudent->rollNo = 01;
    ptrStudent->name = "Default name";
    ptrStudent->marks = 100;
}

//Function to print student object 
void printStudentOnConsole(struct Student* ptrStudent){
    cout << "\nStudent details: \nRoll no: " << ptrStudent->rollNo << "\tName: " << ptrStudent->name << "\tMarks: " << ptrStudent->marks << "\n";
}

//Function to accept student object fields from user
void acceptStudentFromConsole(struct Student * ptrStudent){
    cout << "\nPlease enter student details: \nStudent Roll no : ";
    cin >> ptrStudent->rollNo;
    cout << "\nStudent Name : ";
    cin >> ptrStudent->name;
    cout << "\nStudent marks : ";
    cin >> ptrStudent->marks;
}