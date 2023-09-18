// Q1. Write a class Distance to hold feet and inches. Overload operator + as member function and == operator as friend function. 
// Also, overload ++ operator (to increment inches) as member function and -- operator as friend function. 
// Overload << and >> operators to accept and display distance.

#include <iostream>
using namespace std;

class Distance{
    private:
        float feet;
        float inches;
    public:
        Distance(){
            this->feet = 0;
            this->inches = 0;
        }

        Distance(float feet, float inches){
            this->feet = feet;
            this->inches = inches;
        }

        Distance operator+(Distance &d2){
            Distance result;
            result.feet = this->feet + d2.feet;
            result.inches = this->inches + d2.inches;
            return result;
        }

        bool operator==(Distance &d2){
            if((this->feet == d2.feet) && (this->inches == d2.inches))
                return true;
            else    
                return false;
        }
        
        Distance operator++(){
            this->feet += 1;
            this->inches += 1;
        }
        
        Distance operator--(){
            this->feet -= 1;
            this->inches -= 1;
        }

        //If we want to overload << or  >> operator as member function -> Need to make changes in 
        // iostream ostream or istream class internally, so we define it as non memeber function 

        friend void operator<<(ostream &out, Distance &d);
        friend void operator>>(istream &in, Distance &d);
};


void operator<<(ostream &out, Distance &d){
   out << "Distance : \nFeet: " << d.feet << "\n" << "Inches: " << d.inches <<endl; 
   out << "______________________" << endl; 
}

void operator>>(istream &in, Distance &d){
    cout << "Enter distance (in format : Feet inches)\n Enter Feet: " <<endl; 
    in >> d.feet;
    cout << "Enter Feet: " <<endl; 
    in >> d.inches;
}

int main(){

    Distance d1, d2, result;
    cout << d1;
    cout << d2;

    if(d1==d2){
        cout << "Both distances are same" << endl; 
        cout << "______________________" << endl; 
    }
    else{
        cout << "Both distances are not same" << endl; 
        cout << "______________________" << endl; 
    }

    cout << "Increment distances by 1 feet and 1 inch" << endl;
    ++d1;
    ++d2;
    cout << d1;
    cout << d2;

    cout << "Decrement distances by 1 feet and 1 inch" << endl;
    --d1;
    --d2;
    cout << d1;
    cout << d2;
    

    //accept two object values
    cin >> d1;
    cin >> d2;
    cout << d1;
    cout << d2;

    result = d1+d2;
    cout << result;

    return 0;
}
