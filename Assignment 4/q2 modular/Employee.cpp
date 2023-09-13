#include "Employee.h"

//setting default value of temp_id
int Employee :: temp_id = 00001;

Employee::Employee(){
    cout << "\nInitializing Emlpoyee object using DEFAULT CONSTRUCTOR with a unique default id and default salary as 100000.00"<<endl;
    this->id = temp_id;
    //incrementing value of temp_id
    this->temp_id+=2;
    this->sal = 10000.00;
}

Employee::Employee(int id, float salary){
    cout << "\nInitializing Emlpoyee object using PARAMETERISED CONSTRUCTOR with a unique default id and default salary as 100000.00"<<endl;
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
    cout << "---------------------------" << endl;
}
void Employee:: accept(){
    int id;
    float sal;
    cout << "---------------------------" << endl;
    cout << "Please enter details of Employee => "    << endl;
    cout << "Employee id : "            << endl;
    cin >> id;
    this->id = id; 
    cout << "Employee salary : "        << endl;
    cin >> sal;
    this->sal = sal; 
    cout << "---------------------------" << endl;
}