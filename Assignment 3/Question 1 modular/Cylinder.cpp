#include "Cylinder.h"

Cylinder::Cylinder():pi(3.14){
    cout << "\nInitialised radius and height with default value as 1 since no input values from user" << endl;
    this->radius = 1;
    this->height = 1;
}

Cylinder::Cylinder(double radiusValue, double heightValue): pi(3.14), radius(radiusValue), height(heightValue){

}

double Cylinder::getRadius(){
    return this->radius;
}

void Cylinder::setRadius(double radius){
    this->radius = radius;
}

double Cylinder::getHeight(){
    return this->height;
}

void Cylinder::setHeight(double height){
    this->height = height;
}

double Cylinder::getVolume(){
    return 3.14 * getRadius() * getRadius() *getHeight();
}

void Cylinder::printVolume(){
    cout << "\n_________________________________________" << endl;
    cout << "Current radius of Cylinder : " << getRadius() <<endl;
    cout << "Current height of Cylinder : " << getHeight() <<endl;
    cout << "Volume of Cylinder : " << getVolume() <<endl;
    cout << "_________________________________________" << endl;
}
