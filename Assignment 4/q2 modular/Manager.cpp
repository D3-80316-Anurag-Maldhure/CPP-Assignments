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
    cout << "---------------------------" << endl;
    cout << " <<< Overriding display method of Employee (base class) >>> "  << endl;
    cout << "Details of Manager =>  "     << endl;
    cout << "Employee id : "            << this->get_id() << endl;
    cout << "Employee salary : "        << this->get_sal() << endl;
    cout << "Manager bonus : "          << this->get_bonus() << endl;
    cout << "---------------------------" << endl;
}

void Manager:: accept(){
    int id;
    float sal, bonus;
    cout << "---------------------------" << endl;
    cout << " <<< Overriding accept method of Employee (base class) >>> "  << endl;
    cout << "Please enter details of Manager =>  "    << endl;
    cout << "Employee id : "            << endl;
    cin >> id;
    set_id(id); 
    cout << "Employee salary : "        << endl;
    cin >> sal;
    set_sal(sal);
    cout << "Manager bonus : "        << endl;
    cin >> bonus;
    this->bonus = bonus;
    cout << "---------------------------" << endl;
}

void Manager:: display_manager(){
    cout << "---------------------------" << endl;
    cout << "Details of Manager => "     << endl;
    cout << "Employee id : "            << this->get_id() << endl;
    cout << "Employee salary : "        << this->get_sal() << endl;
    cout << "Manager bonus : "          << this->get_bonus() << endl;
    cout << "---------------------------" << endl;
}
void Manager:: accept_manager(){
    int id;
    float sal, bonus;
    cout << "---------------------------" << endl;
    cout << "Please enter details of Manager =>  "    << endl;
    cout << "Employee id : "            << endl;
    cin >> id;
    set_id(id); 
    cout << "Employee salary : "        << endl;
    cin >> sal;
    set_sal(sal);
    cout << "Manager bonus : "        << endl;
    cin >> bonus;
    this->bonus = bonus;
    cout << "---------------------------" << endl;
}