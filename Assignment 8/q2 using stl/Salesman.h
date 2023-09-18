#ifndef SALESMAN_H
#define SALESMAN_H

#include <iostream>
using namespace std;

#include "Employee.h"


//made virtual to avoid diamond problem
class Salesman : virtual public Employee{
    private:
        float comm;
    protected:
        void display_salesman();
        void accept_salesman();
    public:
        Salesman();
        Salesman(int, float, float);
        float get_comm();
        void set_comm(float);
        virtual void display();
        virtual void accept();
};

#endif