//Q1. Write a user defined function factorial() that calculates factorial of given number 
// and it throws exception if number entered by user is negative.

#include <iostream>
using namespace std;

long long factorial(int num){
    if(num == 0 || num == 1){
        return 1;
    }
    num = num * factorial(num-1);
    return num;
}

int main(){
    int number;
    long long result;

    //Nested try-catch for exception handling
    try{
        cout << "Please enter a positive integer whose factorial you want : " << endl;
        cin >> number;
        if(number<0)
            throw -1;
        else
            result = factorial(number);
            cout << "Factorial of number " << number << " = " << result << endl;
    }
    catch(int error){
        try{
            cout << "Please retry with a positive integer only" <<endl;
            cout << "Please enter a positive integer whose factorial you want : " << endl;
            cin >> number;
            if(number<0)
                throw -1;
            else
                factorial(number);
                cout << "Factorial of number " << number << " = " << result << endl;
        }
        catch(int err){
            cout << "You have entered non positive integer value again. Closing program... Thank you!" << endl;
        }
    }
    
    return 0;
}