#include<iostream>
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
       static int mcounter;
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
int Manager::mcounter=0;

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
   static int scounter;
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
int Salesman::scounter=0;


class SalesManager : public Manager , public Salesman
{
  public:
     static int smcounter;

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
int SalesManager::smcounter=0;

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
    
   Employee *eptr[10];
   int index=0;
   int choice;

   while((choice=menu())!=0)
   {
    switch(choice)
    {
        case 1:
          {     
                 if(index<10)
                 {
                 for(int i=0;i<10;i++)
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
                  eptr[i]=new Manager;
                  Manager::mcounter++;
                 }
                 else if(c==2)
                 {
                  eptr[i]=new Salesman;
                  Salesman::scounter++;
                 }
                 else if(c==3)
                {
                  eptr[i]=new SalesManager;
                  SalesManager::smcounter++;
                }
               
               else if(c==0)
               {
                break;
               }
                else
                {
                   cout<<"wrong entered.."<<endl;
                   break;
                }
                eptr[i]->accept();
                 index++;
                 }
                 }
               else{
                cout<<"Array is full.."<<endl;
               }  
               
          }
           break;

        case 2:
          cout<<"number of accepted data..."<<endl;
          cout<<"Manager:"<<Manager::mcounter<<endl;
          cout<<"Salesman:"<<Salesman::scounter<<endl;
          cout<<"SalesManager:"<<SalesManager::smcounter<<endl;
          
           break;

        case 3:
        {
          for(int i=0;i<index;i++)
           {
            if(typeid(*eptr[i])==typeid(Manager))
            {
              eptr[i]->display();
            }
           } 
        }
           break;

        case 4:
        {
           for(int i=0;i<index;i++)
           {
          
            if(typeid(*eptr[i])==typeid(Salesman))
            {
              eptr[i]->display();
            }
            
           }
        }
           break;   
        
        case 5:
        {
           for(int i=0;i<index;i++)
           {
          
            if(typeid(*eptr[i])==typeid(SalesManager))
            {
             eptr[i]->display();
            }
           }
        }
           break;

        default:
           cout<<"Wrong choice entered....."<<endl;     
    }
   }


 return 0;
}