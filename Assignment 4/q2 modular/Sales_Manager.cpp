#include "Sales_Manager.h"

Sales_Manager::Sales_Manager(){
    cout << "\nInitializing Sales_Manager object using DEFAULT CONSTRUCTOR and inheriting id and salary data from Employee (superbase), bonus from Manager (base) and comm from Salesman (base)"<<endl;
}

Sales_Manager::Sales_Manager(int id, float sal, float bonus, float comm){
    cout << "\nInitializing Sales_Manager object using PARAMETERISED CONSTRUCTOR and inheriting id and salary data from Employee (superbase), bonus from Manager (base) and comm from Salesman (base)"<<endl;
    this->set_id(id);
    this->set_sal(sal);
    this->set_sal(sal);
    this->set_comm(comm);
}

void Sales_Manager:: accept(){
    Employee::accept();
    this->accept_manager();
    this->accept_salesman();
}

void Sales_Manager:: display(){
    Employee::display();
    this->display_manager();
    this->display_salesman();
}

Sales_Manager:: ~Sales_Manager(){
    cout << "Inside Sales_Manager::Dtor" << endl;
}
