#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date(){
            this->day = 1;
            this->month = 1;
            this->year = 2000;
        }
        Date(int d, int m, int y){
            this->day = d;
            this->month = m;
            this->year = y;
        }
        int get_day(){
            return this->day;
        }
        void set_day(int day){
            this->day = day;
        }
        int get_month(){
            return this->month;
        }
        void set_month(int month){
            this->month = month;
        }
        int get_year(){
            return this->year;
        }
        void set_year(int year){
            this->year = year;
        }
        void display(){
            cout << "Date :\n" << this->day << "/" << this->month << "/" << this->year << endl;
        }
        void accept(){
            cout << "Enter the date :\nEnter the day: " << endl;
            cin >> this->day;
            cout << "Enter the month: " << endl;
            cin >> this->month;
            cout << "Enter the year: " << endl;
            cin >> this->year;
        }
        bool is_leap_year(){
            if(this->year % 4 == 0 || this->year %400 == 0){
                return true;
            }
            else{
                return false;
            }
        }
};

class Person{
    private:
        string name;
        string addr;
        Date birth_date;
    public:
        Person(){
            this->name = "";
            this->addr = "";
            this->birth_date = Date();
        }
        Person(string name, string addr, Date date){
            this->name = name;
            this->addr = addr;
            this->birth_date = date;
        }
        string get_name(){
            return this->name;
        }
        void set_name(string name){
            this->name = name;
        }
        string get_addr(){
            return this->addr;
        }
        void set_addr(string addr){
            this->addr = addr;
        }
        Date get_birth_date(){
            return this->birth_date;
        }
        void set_birth_date(Date date){
            this->birth_date = date;
        }
        void display(){
            cout << "Name : " << this->name << endl;
            cout << "Address : " << this->addr << endl;
            cout << "Birth ";
            this->birth_date.display();
        }
        void accept(){
            cout << "Enter the Person details :\nEnter name: " << endl;
            cin >> this->name;
            cout << "Enter the address: " << endl;
            cin >> this->addr;
            cout << "Enter the birth date: " << endl;
            birth_date.accept();
            birth_date.display();
        }
};


class Employee{
    private:
        int id;
        float sal;
        string dept;
        Date joining;
    public:
        Employee(){
            this->id = 0;
            this->sal = 0;
            this->dept = "";
            this->joining = Date();
        }
        Employee(int id, float sal, string dept, Date date){
            this->id = id;
            this->sal = sal;
            this->dept = dept;
            this->joining = date;
        }
        int get_id(){
            return this->id;
        }
        void set_id(int id){
            this->id = id;
        }
        float get_sal(){
            return this->sal;
        }
        void set_sal(float sal){
            this->sal = sal;
        }
        string get_dept(){
            return this->dept;
        }
        void set_dept(string dept){
            this->dept = dept;
        }
        Date get_joining_date(){
            return this->joining;
        }
        void set_joining_date(Date date){
            this->joining = date;
        }
        void display(){
            cout << "ID : " << this->id << endl;
            cout << "Salary : " << this->sal << endl;
            cout << "Department : " << this->sal << endl;
            cout << "Joining ";
            this->joining.display();
        }
        void accept(){
            cout << "Enter the Employee details :\nEnter id: " << endl;
            cin >> this->id;
            cout << "Enter the salary: " << endl;
            cin >> this->sal;
            cout << "Enter the department: " << endl;
            cin >> this->dept;
            cout << "Enter the joining date: " << endl;
            joining.accept();
        }
};


int main(){
    Person person = Person();
    cout << "Person class functionalities test :  \n" << endl;
    person.display();
    person.accept();
    person.display();
    

    Employee employee = Employee();
    cout << "Employee class functionalities test :  \n" << endl;
    employee.display();
    employee.accept();
    employee.display();

    return 0;
}