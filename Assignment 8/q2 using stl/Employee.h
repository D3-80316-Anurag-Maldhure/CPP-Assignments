#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee{
    private:
        int id;
        float sal;

    public:
        Employee();
        Employee(int, float);
        int get_id();
        void set_id(int);
        float get_sal();
        void set_sal(float);
        virtual void display();
        virtual void accept();
};

#endif