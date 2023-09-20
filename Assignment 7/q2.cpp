// Q1 .Create a user defined class “Fraction” with data members numerator and denominator. 
// Provide constructors, getter/setters and methods like lowestForm() and decimalValue(). 
// The setDenominator() method should throw exception if value is zero. Overload operators +, -, *, /, =, ==, !=, <, >.

#include <iostream>
using namespace std;

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

class Fraction{
    private:
        int numerator;
        int denominator;

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
            return (double)this->numerator/(double)this->denominator;
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

        void operator=(Fraction &f2){ 
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
            if(this->decimalValue() < f2.decimalValue())
                return true;
            else
                return false;
        }
        bool operator>(Fraction &f2){ //********************
            if(this->decimalValue() > f2.decimalValue())
                return true;
            else
                return false;
        }

};





int main(){
    double num,den;

    Fraction frac1(30,60);
    Fraction frac2(40,360);

    cout << "Lowest form of Fraction 1 : " << frac1.getNumerator() << "/" << frac1.getDenominator() << " is = "<< frac1.lowestForm().getNumerator() << "/" << frac1.lowestForm().getDenominator() << endl;
    cout << "Lowest form of Fraction 2 : " << frac2.getNumerator() << "/" << frac2.getDenominator() << " is = "<< frac2.lowestForm().getNumerator() << "/" << frac2.lowestForm().getDenominator() << endl;


    cout << "Lowest form of Fraction 1 : " << frac1.getNumerator() << "/" << frac1.getDenominator() << " is = "<< frac1.decimalValue() << endl;
    cout << "Lowest form of Fraction 2 : " << frac2.getNumerator() << "/" << frac2.getDenominator() << " is = "<< frac2.decimalValue() << endl;

    // +, -, *, /, =, ==, !=, <, >

    cout << "Addition " << (frac1 + frac2).getNumerator() << "/" << (frac1 + frac2).getDenominator() << endl;
    cout << "Subtraction " << (frac1 - frac2).getNumerator() << "/" << (frac1 - frac2).getDenominator() << endl;
    cout << "Multiplication " << (frac1 * frac2).getNumerator() << "/" << (frac1 * frac2).getDenominator() << endl;
    cout << "Division " << (frac1 / frac2).getNumerator() << "/" << (frac1 / frac2).getDenominator() << endl;

    Fraction frac3 = frac1;
    cout << "Decimal value of fraction 1 : " << frac1.decimalValue() << endl;
    cout << "Decimal value of fraction 2 : " << frac2.decimalValue() << endl;
    
    if(frac1==frac3){
        cout << "Fraction 1 and 3 are sam e" << endl;
    }
    else{
        cout << "Fraction 1 and 3 are NOT same" << endl;
    }

    if(frac1==frac2){
        cout << "Fraction 1 and 3 are sam e" << endl;
    }
    else{
        cout << "Fraction 1 and 2 are NOT same" << endl;
    }

    if(frac1!=frac2){
        cout << "Fraction 1 != 2 " << endl;
    }
    else{
        cout << "Fraction 1 == 2"  << endl;
    }

    if(frac1<frac2){
        cout << "Fraction 1 < 2 " << endl;
    }
    else{
        cout << "Fraction 1 > 2"  << endl;
    }

    if(frac1>frac2){
        cout << "Fraction 1 > 2 " << endl;
    }
    else{
        cout << "Fraction 1 < 2"  << endl;
    }



    return 0;
}


 

