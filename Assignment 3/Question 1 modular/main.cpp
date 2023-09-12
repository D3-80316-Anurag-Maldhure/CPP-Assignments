#include "Cylinder.h"

int main(){

    //Object creation without parameters
    Cylinder c1;
    c1.printVolume();

    //Object creation with parameters
    Cylinder c2(23.23, 24.56);
    c2.printVolume();

    return 0;
}




