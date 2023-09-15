#include "Salesman.h"

Salesman::Salesman(){
    cout << "\nInitializing Salesman object using DEFAULT CONSTRUCTOR with comm of 25000.00 and inheriting id and salary data from Employee (base)"<<endl;
    this->comm = 25000.00;
}

Salesman::Salesman(int id, float sal, float comm){
    cout << "\nInitializing Salesman object using PARAMETERISED CONSTRUCTOR with comm of 25000.00 and inheriting id and salary data from Employee (base)"<<endl;
    this->set_id(id);
    this->set_sal(sal);
    this->set_comm(comm);
}

float Salesman::get_comm(){
    return this->comm;
}

void Salesman::set_comm(float comm){
    this->comm = comm;
}

void Salesman:: display(){
    Employee::display();
    this->display_salesman();
}

void Salesman:: accept(){
    Employee::accept();
    this->accept_salesman();
}

void Salesman:: display_salesman(){
    cout << "Salesman comm : "          << this->get_comm() << endl;
    cout << "---------------------------" << endl;
}
void Salesman:: accept_salesman(){
    float comm;
    cout << "Salesman comm : "          << endl;
    cin >> comm;
    this->comm = comm;
    cout << "---------------------------" << endl;
}
Salesman:: ~Salesman(){
    cout << "Inside Salesman::Dtor" << endl;
}

