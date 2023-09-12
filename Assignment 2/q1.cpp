// Q1. Write a menu driven program to calculate volume of the box.
// Provide necessary constructors.

#include <iostream>
using namespace std;

double calculateVolume(double length, double breadth, double height);

int main(){
    int choice = 1;
    double length, breadth, height, volume;

    while(choice != 0){
        cout << "\nThis is a program to calculate volume of the box" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "Enter your choice from below options : " << endl;
        cout << "0. Exit" << endl;
        cout << "1. Enter the dimensions of the box" << endl;
        cin >> choice;
        if(choice == 0){
            break;
        }
        cout << "Please enter length" << endl;
        cin >> length;
        cout << "Please enter breadth" << endl;
        cin >> breadth;
        cout << "Please enter height" << endl;
        cin >> height;

        volume = calculateVolume(length, breadth, height);
        cout << "\n Volume of the box = " << volume << endl;
    }
    return 0;
}

//Function to calculate volume of box
double calculateVolume(double length, double breadth, double height){
    return length*breadth*height;
}
