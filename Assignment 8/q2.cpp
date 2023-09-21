#include<iostream>
#include<vector>
using namespace std;

class Employee
{
  private:
   int id;
   float salary;

  public:
    Employee()
    {
      this->id=0;
      this->salary=0;

    } 
    Employee(int id, float salary)
    {
        this->id=id;
        this->salary=salary;
    }

    int getId()
    {
        return this->id;
    }
    void setId(int id)
    {
        this->id=id;
    }
    int getSalary()
    {
        return this->salary;
    }
    void setSalary(float salary)
    {
        this->salary=salary;
    }

    virtual void display()
    {
        cout<<"ID: "<<this->id<<endl;
        cout<<"Salary : "<<this->salary<<endl;
    }

    virtual void accept()
    {
        cout<<"Enter id: "<<endl;
        cin>>this->id;

        cout<<"Enter Salary: "<<endl;
        cin>>this->salary;
    }

     virtual ~Employee()
    {
 
    }

};

class Manager : virtual public Employee
{
    private:
     float bonus;
    
    
    
    protected:
      void displayManager()
      {
        
        cout<<"Bonus: "<<this->bonus<<endl;
      }

      void acceptManager()
      {
       
        cout<<"Enter bonus: "<<endl;
        cin>>this->bonus;
      }

    public:
       static int counter;
      Manager()
      { 
        this->bonus=0;
       
      } 

      Manager(int id, float salary, float bonus) : Employee(id,salary)
      {
        this->bonus=bonus;
      }

      Manager(float bonus)
      {
        this->bonus=bonus;
      }

      float getBonus()
      {
        return this->bonus;
      }

      void setBonus(float bonus)
      {
        this->bonus=bonus;
      } 
      void display()
    {
        Employee::display();
        this->displayManager();
    }

    void accept()
    {
        Employee::accept();
        this->acceptManager();
    }
   
    ~Manager()
    {
     
    }
     

};
int Manager::counter=0;

class Salesman :  virtual public Employee
{
  private :
     float comm;
    

  protected:

      void acceptSalesman()
    {
        
        cout<<"Enter comm: "<<endl;
        cin>>this->comm;
    }
    void displaySalesman()
    {
        
        cout<<"Comm : "<<this->comm<<endl; 
    }

  public:
   static int counter;
     Salesman()
     {
       this->comm=0;
   
     }   
     Salesman(int comm)
     {
      this->comm=comm;
     }

     Salesman(int id, float salary,float comm) : Employee(salary,comm)
     {
        this->comm=comm;
     }

     float getComm()
     {
        return this->comm;
     }
     void setComm(int comm)
     {
        this->comm=comm;
     }
    void display()
    {
       Employee::display();
       this->displaySalesman();
    }

    void accept()
    {
        Employee::accept();
        this->acceptSalesman();
    }
    
    ~Salesman()
    {
    }
   

};
int Salesman::counter=0;


class SalesManager : public Manager , public Salesman
{
  public:
     static int counter;

    SalesManager()
    {
      
    }

    SalesManager(int id, float salary, float bonus, float comm) : Employee(id,salary),Manager(bonus),Salesman(comm)
    {
      
    }

    void display()
    {
      Employee::display();
      Manager::displayManager();
      Salesman::displaySalesman();
    }

    void accept()
    {
      Employee::accept();
      Manager::acceptManager();
      Salesman::acceptSalesman();
    
    }

     ~SalesManager()
    {
       
    }  
}; 
int SalesManager::counter=0;



int menu()
{
    int ch;
    cout<<"0.EXIT"<<endl;
    cout<<"1.Accept employee"<<endl;
    cout<<"2.Display count of employees"<<endl;
    cout<<"3.Display Manager"<<endl;
    cout<<"4.Display salesman"<<endl;
    cout<<"5.Display salesmanager"<<endl;
    cin>>ch;
    
    return ch;

}

int main()
{
    vector <Employee *>employees;

    Employee *eptr;
    int choice;


    while((choice=menu())!=0)
    {
        switch(choice)
        {
            case 1:
              {
                int c;
                 cout<<"1.Accept manager"<<endl;
                 cout<<"2.salesman"<<endl;
                 cout<<"3.salesmanager"<<endl;
                 cout<<"0.EXIT"<<endl;
                 cout<<"Enter your choice"<<endl;
                 cin>>c;
               
               if(c==1)
               {
                eptr=new Manager;
                eptr->accept();
                employees.push_back(eptr);
                Manager::counter++;              
                 }
               else if (c==2)
               {
                eptr=new Salesman;
                eptr->accept();
                employees.push_back(eptr);
                Salesman::counter++;
               }
               else if(c==3)
               {
                eptr=new SalesManager;
                eptr->accept();
                employees.push_back(eptr);
                SalesManager::counter++;
               }
              }
                break;

            case 2:
                cout<<"number of accepted data..."<<endl;
                cout<<"Manager:"<<Manager::counter<<endl;
                cout<<"Salesman:"<<Salesman::counter<<endl;
                cout<<"SalesManager:"<<SalesManager::counter<<endl;
                break;    

            case 3:
                 for(int i=0;i<employees.size();i++)
                 {
                  if(typeid(*employees.at(i))==typeid(Manager))
                  {
                    employees.at(i)->display();
                  }
                 }   
               break;  

            case 4:
                 for(int i=0;i<employees.size();i++)
                 {
                  if(typeid(*employees.at(i))==typeid(Salesman))
                  {
                    employees.at(i)->display();
                  }
                 }
               break;

           case 5:
                for(int i=0;i<employees.size();i++)
                {
                  if(typeid(*employees.at(i))==typeid(SalesManager))
                  {
                    employees.at(i)->display();
                  }
                }
               break;

            default:
              cout<<"wrong choice entered"<<endl;          
        }
    }


 return 0;
}