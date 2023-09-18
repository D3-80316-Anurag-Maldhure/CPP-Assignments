#include "Sales_Manager.h"

Sales_Manager::Sales_Manager(){
}

Sales_Manager::Sales_Manager(int id, float sal, float bonus, float comm){
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
