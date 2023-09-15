#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee{
    private:
        int id;
        float sal;
        static int temp_id; //To initialise a unique id each time as default id
    public:
        Employee();
        Employee(int, float);
        virtual ~Employee();
        int get_id();
        void set_id(int);
        float get_sal();
        void set_sal(float);
        virtual void display();
        virtual void accept();
};

#endif