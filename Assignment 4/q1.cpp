// Q1. Write a menu driven program for Student management. In main(), create Array of Objects and 
// provide facility for accept, print, search and sort. For student accept name, gender, rollNumber 
// and marks of three subjects from user and print name, rollNumber, gender and percentage.
// Provide global functions void sortRecords(Studuent[] arr) and int searchRecords(Student[] arr) 
// for sorting and searching array. Search function returns index of found Student, otherwise returns -1.

//Student management
#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        string gender;
        float Subject1Marks;
        float Subject2Marks;
        float Subject3Marks;
        int rollNumber;
        double percentage;

    public:
        Student(){
            cout << "Initialised dynamic Student array having 5 object and default values by Parameterless Constructor " << endl;
            this->name = "";
            this->gender = "Not defined";
            this->Subject1Marks = 0;
            this->Subject2Marks = 0;
            this->Subject3Marks = 0;
            this->rollNumber = 0;
            this->percentage = 0;
        }

        Student(string name, string gender, float s1marks, float s2marks, float s3marks, 
                int rollno, double percentage = 0){
            cout << "Initialised dynamic Student array by Parameterised Constructor " << endl;
            this->name = name;
            this->gender = gender;
            this->Subject1Marks = s1marks;
            this->Subject2Marks = s2marks;
            this->Subject3Marks = s3marks;
            this->rollNumber = rollno;
            this->percentage = percentage;
        }

        void acceptStudentData(){
            //accept name, gender, rollNumber and marks of three subjects from user
            cout << "Enter the name of student : " << endl;
            cin >> this->name;
            cout << "Enter the gender of student : " << endl;
            cin >> this->gender;
            cout << "Enter the Roll number of student : " << endl;
            cin >> this->rollNumber;
            cout << "Enter the marks of student of three subjects : \nSubject 1 marks (out of 100): " << endl;
            cin >> this->Subject1Marks;
            cout << "Subject 2 marks (out of 100): " << endl;
            cin >> this->Subject2Marks;
            cout << "Subject 3 marks (out of 100): " << endl;
            cin >> this->Subject3Marks;
            calculatePercentage(); //To calculate pecentage for given student marks
        }

        void printStudentData(){
            //print name, rollNumber, gender and percentage
                cout << "Student data : " << endl;
                cout << "Name : " << this->name <<endl;
                cout << "Roll Number : " << this->rollNumber <<endl;
                cout << "Percentage : " << this->percentage << endl;
        }

        void calculatePercentage(){
            double Sum = this->Subject1Marks + this->Subject2Marks + this->Subject3Marks;
            double percent = (Sum / 300) *100;
            this->percentage = percent;
        }

        int getRollNo(){
            return this->rollNumber;
        }
};

//global functions void sortRecords(Studuent[] arr) and int searchRecords(Student[] arr) for sorting and searching array
void sortRecords(Student* arr, int arraySize){
    //bubble sort for sorting 
    int i, j;
    bool swapped;
    int n = arraySize;
    for (i = 0; i <  n- 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].getRollNo() > arr[j + 1].getRollNo()) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == false)
            break;
    }
};

void swap(Student* A, Student* B)
{
    Student temp = *A;
    *A = *B;
    *B = temp;
}

void searchRecords(Student* arr, int arraySize){
    int rollNo;
    //Search function returns index of found Student, otherwise returns -1
    cout << "Enter the roll no of the student whom you want to search : " << endl;
    cin >> rollNo;
    for(int i=0; i< arraySize; i++){
        if(arr[i].getRollNo() == rollNo){
            arr[i].printStudentData();
        }
        else{
            cout << "No such student data with roll no " << rollNo << " found in records." << endl;
        }
    }
};

//Menu function
int menu(){
    int choice;
    cout << "__________________________________________________________________________" << endl;
    cout << "Please select operation you want to perform on this Student management Program from options below: " << endl;
    cout<< "0. EXIT \n1. AcceptData \n2. PrintData \n3. SortData \n4. SearchRecords " <<endl;
    cin>>choice;
    return choice;
}


enum options{
    EXIT, AcceptData, PrintData, SortData, SearchRecords 
//    0         1       2           3           4
};

int main(){
    //create Array of Objects and provide facility for accept, print, search and sort
    int choice;
    int studentArraySize;
    
    cout << "Enter the size of the array that you want to create : " << endl;
    cin >> studentArraySize;

    Student *array = new Student[studentArraySize];

    while((choice = menu()) != 0){
        switch (choice){
            case AcceptData:
                for(int i=0; i<studentArraySize; i++){
                    array[i].acceptStudentData();
                }
                break;
            case PrintData:
                for(int i=0; i<studentArraySize; i++){
                    array[i].printStudentData();
                }
                break;
            case SortData:
                sortRecords(array, studentArraySize);
                break;
            case SearchRecords:
                searchRecords(array, studentArraySize);
                break;
            default:
                cout << "Please choose from above choices only" << endl;
        }
    }
    return 0;
}