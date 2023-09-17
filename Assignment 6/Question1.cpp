//Q1. Write a user defined function factorial() that calculates factorial 
//    of given number and it throws exception if number entered by user is negative.

#include <iostream>
using namespace std;

long factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    n = n * factorial(n-1);
    return n;
}

int acceptNumber(int num){
    cout << "Enter the number whose factorial you want : " <<endl;
    cin >> num;
    if(num<0)
        throw 404;
    return num;
}



int main(){
    int num, factorialResult;
    try{
        num = acceptNumber(num);
        factorialResult = factorial(num);
        cout << "The factorial of " << num << " is : " << factorialResult <<endl;
        
    }
    catch(int error){
        cout << "You have entered a negative integer. Please enter a positive number : " << endl;
        cout << "Please try once again with a positive number " << endl;
        try{
            num = acceptNumber(num);
            factorialResult = factorial(num);
            cout << "The factorial of " << num << " is : " << factorialResult <<endl;
            
        }
        catch(int error){
            cout << "You have again entered a non-positive integer. Program is closing... " << endl;
        }
    }

    return 0;
}