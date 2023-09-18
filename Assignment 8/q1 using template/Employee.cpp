#include "Employee.h"

Employee::Employee(){
    this->id = 0;
    this->sal = 1000;
}

Employee::Employee(int id, float salary){
    this->id = id;
    this->sal = salary;
}

int Employee::get_id(){
    return this->id;
}

void Employee:: set_id(int id){
    this->id = id;
}

float Employee::get_sal(){
    return this->sal;
}

void Employee::set_sal(float sal){
    this->sal = sal;
}

void Employee:: display(){
    cout << "---------------------------" << endl;
    cout << "Details of Employee => "    << endl;
    cout << "Employee id : "            << this->id << endl;
    cout << "Employee salary : "        << this->sal << endl;
}
void Employee:: accept(){
    int id;
    float sal;
    cout << "---------------------------" << endl;
    cout << "Please enter details of Employee => "    << endl;
    cout << "Employee id : "            << endl;
    cin >> id;
    this->id = id; 
    cout << "Enter salary : "        << endl;
    cin >> sal;
    this->sal = sal; 
}
