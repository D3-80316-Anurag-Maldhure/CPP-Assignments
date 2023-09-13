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
    cout << "---------------------------" << endl;
    cout << " <<< Overriding display method of Employee (base class) >>> "  << endl;
    cout << "Details of Salesman =>  "     << endl;
    cout << "Employee id : "            << this->get_id() << endl;
    cout << "Employee salary : "        << this->get_sal() << endl;
    cout << "Salesman comm : "          << this->get_comm() << endl;
    cout << "---------------------------" << endl;
}

void Salesman:: accept(){
    int id;
    float sal, comm;
    cout << "---------------------------" << endl;
    cout << " <<< Overriding accept method of Employee (base class) >>> "  << endl;
    cout << "Please enter details of Salesman =>  "    << endl;
    cout << "Employee id : "            << endl;
    cin >> id;
    set_id(id); 
    cout << "Employee salary : "        << endl;
    cin >> sal;
    set_sal(sal);
    cout << "Salesman comm : "        << endl;
    cin >> comm;
    this->comm = comm;
    cout << "---------------------------" << endl;
}

void Salesman:: display_salesman(){
    cout << "---------------------------" << endl;
    cout << "Details of Salesman =>  "     << endl;
    cout << "Employee id : "            << this->get_id() << endl;
    cout << "Employee salary : "        << this->get_sal() << endl;
    cout << "Salesman comm : "          << this->get_comm() << endl;
    cout << "---------------------------" << endl;
}
void Salesman:: accept_salesman(){
    int id;
    float sal, comm;
    cout << "---------------------------" << endl;
    cout << "Please enter details of Salesman =>  "    << endl;
    cout << "Employee id : "            << endl;
    cin >> id;
    set_id(id); 
    cout << "Employee salary : "        << endl;
    cin >> sal;
    set_sal(sal);
    cout << "Salesman comm : "          << endl;
    cin >> comm;
    this->comm = comm;
    cout << "---------------------------" << endl;
}

