// Q2. Write a class for Time and provide the functionality
// Time()
// Time(int h,int m,int s) getHour() getMinute() getSeconds() printTime()
// setHour() setMinute() setSeconds()
// In main create array of objects of Time. Allocate the memory for the array and the object dynamically.

#include <iostream>
using namespace std;

class Time{
    private:
        int hour;
        int min;
        int sec;
    public:
        Time(){
            cout << "\nInitialised hour, minute and second with default value as 1 since no input values from user" << endl;
            this->hour = 1;
            this->min = 1;
            this->sec = 1;
        }

        Time(int h,int m,int s){
            this->hour = h;
            this->min = m;
            this->sec = s;
        }

        int getHour(){
            return this->hour;
        }

        int getMinute(){
            return this->min;
        }

        int getSeconds(){
            return this->sec;
        }
        
        void setHour(int h){
            this->hour = h;
        }
        void setMinute(int m){
            this->min = m;
        }
        void setSeconds(int s){
            this->sec = s;
        }

        void printTime(){
            cout << "\nHour:Minute:Seconds = " << getHour() << ":" << getMinute() << ":" << getSeconds() << endl;
        }
};

int main(){
    int hr, min, sec , arraySize;
    char choice;

    cout << "Please enter the size of array that you want to dynamically allocate : " << endl;
    cin >> arraySize;

    Time *time = new Time[arraySize];
    
    // //input all the time objects
    for(int i=0; i<arraySize; i++){
        cout << "\nDo you want to re - initialise time object at [" << i << "], (y/n):" << endl;
        cin >> choice;
        
        if (choice == 'y' || choice == 'Y'){
            cout << "Enter hour value of object at array[" << i << "] :" << endl;
            cin >> hr;
            time[i].setHour(hr);
            cout << "Enter minute value of object at array[" << i << "] :" << endl;
            cin >> min;
            time[i].setMinute(min);
            cout << "Enter seconds value of object at array[" << i << "] :" << endl;
            cin >> sec;
            time[i].setSeconds(sec);
        }
    }

    //print all the time objects
    for(int i=0; i<arraySize; i++){
        time[i].printTime();
    }

    return 0;
}