#include <iostream>
using namespace std;

enum EStackOperations{
    Exit,Create5,Create,push,pop,print,peek
};
class Stack{

int currIndex = -1;

private:
    int size=5;
    int *arr;
public:

    Stack(){
        arr = new int[this->size];
    }
    Stack(int size){
        this->size=size;
        arr = new int[size];
    }

    bool isEmpty(){
        return currIndex==-1;
    }

    bool isFull(){
        return currIndex==size-1;
    }

    void push(int data){
        if(this->isFull()){
            cout<<"The stack is full..."<<endl;
            return;
        }
        currIndex++;
        arr[currIndex] = data;
    }

    int pop(){
        if(isEmpty()==true){
            cout<<"Stack is empty. There is nothing to be popped out."<<endl;
            return 0;
        }
        return arr[currIndex--];
    }

    int peek(){
        return arr[currIndex];
    }

    void print(){
        for(int i=currIndex; i>=0; i--){
            cout<<arr[i]<<endl;
        }
    }

    Stack operator=(Stack &other){
        int *arr = new int[other.size];
        for(int i=0; i<this->size; i++){
            this->arr[i] = other.arr[i];
        }
    }
};

EStackOperations menu(){

    int choice;
    cout<<"0: Exit"<<endl;
    cout<<"1 :Create a stack of size 5"<<endl;
    cout<<"2 :Create a stack of size n"<<endl;
    cout<<"3 :Push data"<<endl;
    cout<<"4 :Pop data"<<endl;
    cout<<"5: print the stack"<<endl;
    cout<<"6: Get top element of the stack"<<endl;
    cout<<"Enter your choice =";
    cin>>choice;
    return EStackOperations(choice);
}

int main(){

    EStackOperations choice;

    bool flag=false;
    Stack *stk;
    while((choice=menu())!=Exit){
        switch(choice){
            case Create5:
                stk = new Stack(5);
                flag=true;
                cout<<"----------------"<<endl;
                cout<<"a stack of size 5 is created successfully."<<endl;
                cout<<"----------------"<<endl;
                break;
            case Create:
                int size;
                cout<<"Enter the size =";
                cin>>size;
                flag=true;
                stk = new Stack(size);
                cout<<"----------------"<<endl;
                cout<<"a stack of size"<< size <<" is created successfully."<<endl;
                cout<<"----------------"<<endl;
                break;
            case push:
                if(flag!=true){
                    cout<<"Create a stack before pushing data."<<endl;
                }
                else{
                    int data;
                    cout<<"Enter the data =";
                    cin>>data;
                    stk->push(data);
                }
                break;
            case pop:
                if(flag!=true){
                    cout<<"Create a stack before popping data."<<endl;
                }
                else{
                    cout<<"----------------"<<endl;
                    cout<<"popped item is ="<<stk->pop()<<endl;
                    cout<<"----------------"<<endl;

                }
                break;
            case print:
                if(flag!=true){
                    cout<<"Create a stack before printing data."<<endl;
                }
                else{
                    cout<<"----------------"<<endl;
                    stk->print();
                    cout<<"----------------"<<endl;
                }
                break;
            case peek:
                if(flag!=true){
                    cout<<"Create a stack before printing data."<<endl;
                }
                else{
                    cout<<"----------------"<<endl;
                    cout<<"Top ="<<stk->peek()<<endl;
                    cout<<"----------------"<<endl;
                }
                break;
            default:
                cout<<"Enter a valid choice.";
                break;
        }
    }
    Stack *stk1;
    stk1 = stk;
    stk1->pop();
    stk->print();

    return 0;
}