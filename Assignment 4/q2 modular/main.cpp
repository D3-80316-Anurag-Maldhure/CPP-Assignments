#include "Employee.h"
#include "Manager.h"
#include "Salesman.h"
#include "Sales_Manager.h"

int main(){
    //Object of superbase class
    Employee *emp = new Employee();
    //Object of base class
    Manager *manager = new Manager();
    //Object of base class
    Salesman *salesman = new Salesman();
    //Object of derived class
    Sales_Manager *sales_Manager = new Sales_Manager();

    cout << "\nTesting Functionalities of Employee class : " << endl;
    emp->display();
    emp->accept();
    emp->display();

    cout << "\nTesting Functionalities of Manager class : " << endl;
    manager->display_manager();
    manager->accept_manager();
    manager->display_manager();
    manager->display();
    manager->accept();
    manager->display();

    cout << "\nTesting Functionalities of Salesman class : " << endl;
    salesman->display_salesman();
    salesman->accept_salesman();
    salesman->display_salesman();
    salesman->display();
    salesman->accept();
    salesman->display();

    cout << "\nTesting Functionalities of Sales_Manager class : " << endl;
    sales_Manager->display();
    sales_Manager->accept();
    sales_Manager->display();    


    return 0;
}