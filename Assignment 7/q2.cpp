// Q1 .Create a user defined class “Fraction” with data members numerator and denominator. 
// Provide constructors, getter/setters and methods like lowestForm() and decimalValue(). 
// The setDenominator() method should throw exception if value is zero. Overload operators +, -, *, /, =, ==, !=, <, >.

#include <iostream>
using namespace std;

class Fraction{
    private:
        double numerator;
        double denominator;

    public:
        Fraction(){
            this->numerator = 1;
            this->denominator = 1;
        }
        Fraction(int numerator, int denominator){
            this->numerator = numerator;
            this->denominator = denominator;
        }
        double getNumerator(){
            return this->numerator;
        }
        void setNumerator(int numerator){
            this->numerator = numerator;
        }
        double getDenominator(){
            return this->denominator;
        }
        void setDenominator(int denominator){
            this->denominator = denominator;
        }

        Fraction lowestForm(){
            Fraction lowestFraction = Fraction();
            lowestFraction.numerator = this->numerator /gcd(this->numerator, this->denominator);
            lowestFraction.denominator = this->denominator /gcd(this->numerator, this->denominator);
            return lowestFraction;
        }

        double decimalValue(){
            return this->numerator/this->denominator;
        }

        Fraction operator+(Fraction &f2){
            Fraction result;
            result.numerator = this->numerator + f2.numerator;
            result.denominator = this->denominator + f2.denominator;
            return result;
        }

        Fraction operator-(Fraction &f2){
            Fraction result;
            result.numerator = this->numerator - f2.numerator;
            result.denominator = this->denominator - f2.denominator;
            return result;
        }

        Fraction operator*(Fraction &f2){
            Fraction result;
            result.numerator = this->numerator * f2.numerator;
            result.denominator = this->denominator * f2.denominator;
            return result;
        }

        Fraction operator/(Fraction &f2){ // Modify this ****************************
            Fraction result;
            result.numerator = this->numerator + f2.numerator;
            result.denominator = this->denominator + f2.denominator;
            return result;
        }

        Fraction operator=(Fraction &f2){ 
            this->numerator = f2.numerator;
            this->denominator = f2.denominator;
        }
        bool operator==(Fraction &f2){
            if((this->numerator == f2.numerator) && (this->denominator == f2.denominator))
                return true;
            else
                return false;
        }
        bool operator!=(Fraction &f2){
            if((this->numerator != f2.numerator) || (this->denominator != f2.denominator))
                return true;
            else
                return false;
        }
        bool operator<(Fraction &f2){ //********************
            if()
                return true;
            else
                return false;
        }
        Fraction operator>(Fraction &f2){ //********************
            if()
                return true;
            else
                return false;
        }

};

// Function to return gcd of a and b
int gcd(int a, int b){
    int result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result;
}



int main(){
    
    
    return 0;
}


 

