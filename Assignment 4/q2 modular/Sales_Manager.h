#ifndef SALES_MANAGER_H
#define SALES_MANAGER_H

#include <iostream>
using namespace std;

#include "Manager.h"
#include "Salesman.h"


//inherited from both Manager and Salesman class directly and Employee class indirectly
class Sales_Manager : public Salesman, public Manager {
    public:
        Sales_Manager();
        Sales_Manager(int, float, float,float);
        ~Sales_Manager();
        void display();
        void accept();
};

#endif