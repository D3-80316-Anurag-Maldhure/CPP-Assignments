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

void Sales_Manager:: display(){
    cout << "---------------------------" << endl;
    cout << " <<< Overriding display method of Employee (superbase class)>>> "  << endl;
    cout << "Details of Salesman =>  "     << endl;
    cout << "Employee id : "            << this->get_id() << endl;
    cout << "Employee salary : "        << this->get_sal() << endl;
    cout << "Manager bonus : "          << this->get_bonus() << endl;
    cout << "Salesman comm : "          << this->get_comm() << endl;
    cout << "---------------------------" << endl;
}

void Sales_Manager:: accept(){
    int id;
    float sal, comm, bonus;
    cout << "---------------------------" << endl;
    cout << " <<< Overriding accept method of Employee (superbase class)>>> "  << endl;
    cout << "Please enter details of Salesman =>  "    << endl;
    cout << "Employee id : "            << endl;
    cin >> id;
    set_id(id); 
    cout << "Employee salary : "        << endl;
    cin >> sal;
    set_sal(sal);
    cout << "Manager bonus : "        << endl;
    cin >> bonus;
    set_bonus(bonus);
    cout << "Salesman comm : "        << endl;
    cin >> comm;
    set_comm(comm);
    cout << "---------------------------" << endl;
}
