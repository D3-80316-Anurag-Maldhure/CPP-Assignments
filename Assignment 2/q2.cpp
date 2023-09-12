// Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are 
// expected to pay a fifty-cent toll. Mostly they do, but sometimes a car
// goes by without paying.
// The tollbooth keeps track of the number of cars that have gone by
// and of the total amount of money collected. Model this tollbooth
// with a class called tollbooth.
// The two data items are a type unsigned int to hold the total number
// of cars, and a type double to hold the total amount of money
// collected.
// A constructor initializes all data members to 0.
// A member function called payingCar() increments the car total and
// adds 0.50 to the cash total. Another function, called nopayCar()
// increments the car total but adds nothing to the cash total.
// Finally, a member function called printOnConsole() displays the two
// totals and number of paying as well as non paying cars total.

#include <iostream>
using namespace std;

class TollBooth{
    private: 
        unsigned int totalNumberOfCars;   
        double totalAmountCollected;

        int numberOfPayingCars;
        int numberOfNonPayingCars; // Or instead of this variable, totalNumberOfCars - numberOfPayingCars
        
    public:
        TollBooth(){
            this->totalNumberOfCars = 0;
            this->totalAmountCollected = 0;
            this->numberOfPayingCars = 0;
            this->numberOfNonPayingCars = 0;
        }
        void payingCar(){
            this->totalNumberOfCars++;
            this->totalAmountCollected += 0.5;
            this->numberOfPayingCars++;
        }
        void nopayCar(){
            this->totalNumberOfCars++;
            this->numberOfNonPayingCars++;
        }
        void printOnConsole(){
            cout << "--------------------------------------------" << endl;
            cout << "\nTotal number of cars passed :       " << this->totalNumberOfCars << endl;
            cout << "\nTotal amount of money collected :   " << this->totalAmountCollected << endl;
            cout << "\nTotal number of paying cars :       " << this->numberOfPayingCars << endl;
            cout << "\nTotal number of non - paying cars : " << this->numberOfNonPayingCars << endl;
            cout << "--------------------------------------------" << endl;
        }
};

int main(){
    TollBooth tollbooth;
    tollbooth.printOnConsole();

    int payingCars, nonPayingCars;

    //Taking from user
    cout << "Please enter how many cars payed toll amount : " << endl;
    cin >> payingCars;
    cout << "Please enter how many cars did not pay the toll amount : " << endl;
    cin >> nonPayingCars;

    for(int i=0; i<payingCars; i++){
        tollbooth.payingCar();
    }

    for(int i=0; i<nonPayingCars; i++){
        tollbooth.nopayCar();
    }

    tollbooth.printOnConsole();

    //Predefined  

    // tollbooth.payingCar();
    // tollbooth.payingCar();
    // tollbooth.nopayCar();
    // tollbooth.nopayCar();
    // tollbooth.payingCar();
    // tollbooth.payingCar();
    // tollbooth.nopayCar();
    // tollbooth.payingCar();
    // tollbooth.printOnConsole();
    return 0;
}