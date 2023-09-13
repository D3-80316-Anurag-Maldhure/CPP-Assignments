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
            
        }

        void acceptStudentData(){
            //accept name, gender, rollNumber and marks of three subjects from user

        }

        void printStudentData(){
            //print name, rollNumber, gender and percentage

        }

        void calculatePercentage(){

        }

};

//global functions void sortRecords(Studuent[] arr) and int searchRecords(Student[] arr) for sorting and searching array
void sortRecords(Studuent[] arr){

};

int searchRecords(Student[] arr){
    //Search function returns index of found Student, otherwise returns -1

};


int main(){
    //create Array of Objects and provide facility for accept, print, search and sort

    return 0;
}

