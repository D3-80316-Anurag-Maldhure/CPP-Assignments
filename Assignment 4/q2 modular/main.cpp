#include "Employee.h"
#include "Manager.h"
#include "Salesman.h"
#include "Sales_Manager.h"

int main(){
    //Object of superbase class
    Employee *emp = new Employee();
    cout << "\nTesting Functionalities of Employee class : " << endl;
    emp->display();
    emp->accept();
    emp->display();
    delete emp;

    //Object of base class
    emp = new Manager();
    cout << "\nTesting Functionalities of Manager class : " << endl;
    emp->display();
    emp->accept();
    emp->display();
    delete emp;

    //Object of base class
    emp = new Salesman();
    cout << "\nTesting Functionalities of Salesman class : " << endl;
    emp->display();
    emp->accept();
    emp->display();
    delete emp;

    //Object of derived class
    emp = new Sales_Manager();
    cout << "\nTesting Functionalities of Sales_Manager class : " << endl;
    emp->display();
    emp->accept();
    emp->display();    
    delete emp;

    return 0;
}