// Q3. Create a namespace NStudent. Create the Student class(created
// as per assignment-1 Q3) inside namespace. Test the functionalities.

#include <iostream>
using namespace std;

namespace NStudent{

    class Student{
        public:
            int rollNo;
            string name; 
            int marks;
    };

}

using namespace NStudent;
//Functions to implement
void initStudent(Student* ptrStudent);
void printStudentOnConsole(Student * ptrStudent);
void acceptStudentFromConsole(Student * ptrStudent);

int main(){
    int choice =1;
    char yesOrNo;

    NStudent:: Student student;

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

        cout << "Do you want to continue (y/n) : " <<endl;
        cin >> yesOrNo;
        if(yesOrNo == 'y' || yesOrNo == 'Y'){
            choice = 1;
        }
        else{
            choice = 0;
        }
    }
    return 0;
}


//Function to initialise student object 
void initStudent(Student* ptrStudent){
    ptrStudent->rollNo = 01;
    ptrStudent->name = "Default name";
    ptrStudent->marks = 100;
}

//Function to print student object 
void printStudentOnConsole(Student* ptrStudent){
    cout << "\nStudent details: \nRoll no: " << ptrStudent->rollNo << "\tName: " << ptrStudent->name << "\tMarks: " << ptrStudent->marks << "\n";
}

//Function to accept student object fields from user
void acceptStudentFromConsole(Student * ptrStudent){
    cout << "\nPlease enter student details: \nStudent Roll no : " <<endl;
    cin >> ptrStudent->rollNo;
    cout << "Student Name : " << endl;
    cin >> ptrStudent->name;
    cout << "Student marks : " << endl;
    cin >> ptrStudent->marks;
}