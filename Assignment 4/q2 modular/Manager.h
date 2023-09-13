#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
using namespace std;

#include "Employee.h"


//made virtual to avoid diamond problem
class Manager : virtual public Employee{
    private:
        float bonus;
    public:
        Manager();
        Manager(int, float, float);
        float get_bonus();
        void set_bonus(float);
        void display();
        void accept();
        void display_manager();
        void accept_manager();
};

#endif