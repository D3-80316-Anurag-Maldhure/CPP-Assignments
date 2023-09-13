#ifndef SALESMAN_H
#define SALESMAN_H

#include <iostream>
using namespace std;

#include "Employee.h"


//made virtual to avoid diamond problem
class Salesman : virtual public Employee{
    private:
        float comm;
    public:
        Salesman();
        Salesman(int, float, float);
        float get_comm();
        void set_comm(float);
        void display();
        void accept();
        void display_salesman();
        void accept_salesman();
};

#endif