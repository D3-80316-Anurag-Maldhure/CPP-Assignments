#include <stdio.h>
#include <string.h>

//Student structure
struct Employee {
    char firstName[20];
    char lastName[20];
    double salary;
};

void emp_init(struct Employee* e);
void set_salary(struct Employee *e, double sal);
void emp_display(struct Employee *e);

int main() {
    struct Employee e1;
    struct Employee e2;
    double raisePercent;
    
    //init info
    printf("Enter Employee 1 information:\n");
    emp_init(&e1);
    printf("Enter Employee 2 information:\n");
    emp_init(&e2);

    //print info
    printf("\nEmployee 1 Information:\n");
    emp_display(&e1);
    printf("\nEmployee 2 Information:\n");
    emp_display(&e2);

    //modify salary
    printf("\nPlease enter by how many percent you want to raise Employee 1 salary annually:\n");
    scanf("%lf",&raisePercent);
    set_salary(&e1, raisePercent);
    printf("\nPlease enter by how many percent you want to raise Employee 1 salary annually:\n");
    scanf("%lf",&raisePercent);
    set_salary(&e2, raisePercent);

    printf("\n Modified Employee info: \n");
    emp_display(&e1);
    emp_display(&e2);


    return 0;
}

void emp_init(struct Employee* e){
    printf("Enter first name: ");
    scanf("%s", e->firstName);

    printf("Enter last name: ");
    scanf("%s", e->lastName);

    printf("Enter employee's yearly salary: ");
    scanf("%lf", &(e->salary));
}

void emp_display(struct Employee *e){
    printf("Employee First name: %s\n", e->firstName);
    printf("Employee Last name: %s\n", e->lastName);
    printf("Yearly Salary: %.2lf\n", e->salary);
}

void set_salary(struct Employee *e, double raisePercent){
    int oldSalary, newSalary;
    printf("Old salary: %.2lf\n", e->salary);
    oldSalary = e->salary;
    newSalary = oldSalary + ((raisePercent/100)*oldSalary);
    e->salary = newSalary;
    printf("New salary: %.2lf\n", e->salary);
}



