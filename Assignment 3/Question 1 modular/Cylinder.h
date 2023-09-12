#ifndef CYLINDER_TOKEN
#define CYLINDER_TOKEN

#include <iostream>
using namespace std;

class Cylinder{
    private:
        const float pi; 
        double radius;
        double height;

    public:
        //Initialize members using constructor member initializer list.
        Cylinder();

        Cylinder(double radiusValue, double heightValue);

        double getRadius();

        void setRadius(double radius);

        double getHeight();

        void setHeight(double height);

        double getVolume();

        void printVolume();
}; 

#endif


