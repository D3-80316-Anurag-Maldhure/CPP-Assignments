#include "Manager.h"

Manager::Manager(){
    cout << "\nInitializing Manager object using DEFAULT CONSTRUCTOR with bonus of 50000.00 and inheriting id and salary data from Employee (base)"<<endl;
    this->bonus = 50000.0;
}

Manager::Manager(int id, float sal, float bonus){
    cout << "\nInitializing Manager object using PARAMETERISED CONSTRUCTOR with bonus of 50000.00 and inheriting id and salary data from Employee (base)"<<endl;
    this->set_id(id);
    this->set_sal(sal);
    this->set_bonus(bonus);

}

float Manager::get_bonus(){
    return this->bonus;
}

void Manager::set_bonus(float bonus){
    this->bonus = bonus;
}

void Manager:: display(){
    Employee::display();
    this->display_manager();
}

void Manager:: accept(){
    Employee::accept();
    this->accept_manager();
}

void Manager:: display_manager(){
    cout << "Manager bonus : "          << this->get_bonus() << endl;
    cout << "---------------------------" << endl;
}
void Manager:: accept_manager(){
    float bonus;
    cout << "Manager bonus : "        << endl;
    cin >> bonus;
    this->bonus = bonus;
    cout << "---------------------------" << endl;
}

Manager:: ~Manager(){
    cout << "Inside Manager::Dtor" << endl;
}