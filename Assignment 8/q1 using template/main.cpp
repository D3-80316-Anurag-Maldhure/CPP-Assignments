#include "Employee.h"
#include "Manager.h"
#include "Salesman.h"
#include "Sales_Manager.h"

enum menu
{
    Exit,
    Accept_Employee,
    Count_Employee_Designation,
    Display_all_Managers,
    Display_all_SalesMan,
    Display_all_SalesManager
};
enum sub_menu
{
    Employee = 1,
    Manager,
    Salesman,
    Sales_Manager
};

int main()
{
    int choice;
    int sub_choice;

    // Creating template class array
    Employee *empArrayPtr = new Employee[10];

    cout << "----------------------------------------------" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Accept Employee" << endl;
    cout << "2. Display the count of all employees with respect to designation" << endl;
    cout << "3. Display All Managers" << endl;
    cout << "4. Display All SalesMan" << endl;
    cout << "5. Display All Sales Manager" << endl;
    cout << "Enter your choice from above menu: " << endl;
    cin >> choice;

    switch ((choice = menu()) != 0)
    {
        case Accept_Employee:
            cout << "----------------------------------------------" << endl;
            cout << "1. Accept Employee details" << endl;
            cout << "2. Accept Manager" << endl;
            cout << "3. Accept Salesman" << endl;
            cout << "4. Accept Sales Manager" << endl;
            cout << "Enter your choice from above menu: " << endl;
            cin >> sub_choice;
            switch((sub_choice=sub_menu())!=0){
                case Employee:
                    break;
                case Manager:
                    break;
                case Salesman:
                    break;
                case Sales_Manager:
                    break;
                default:
                    cout << "Please enter option from above menu only" << endl;
            }
        break;

        case Count_Employee_Designation:
            
            break;

        case Display_all_Managers:
            break;

        case Display_all_SalesMan:
            break;

        case Display_all_SalesManager:
            break;
        default:
            cout << "Please enter option from above menu only" << endl;
    }

return 0;
}