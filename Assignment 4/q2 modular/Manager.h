#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
using namespace std;

#include "Employee.h"


//made virtual to avoid diamond problem
class Manager : virtual public Employee{
    private:
        float bonus;
    protected: 
        void display_manager();
        void accept_manager();
    public:
        Manager();
        Manager(int, float, float);
        ~Manager();
        float get_bonus();
        void set_bonus(float);
        virtual void display();
        virtual void accept();
};

#endif