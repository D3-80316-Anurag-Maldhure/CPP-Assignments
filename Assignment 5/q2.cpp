// Q3. Stack is a Last-In-First-Out data structure. Write a Stack class. 
// It implements stack using Dynamically allocated array. 
// Stack size should be passed in parameterized constructor. If size is not given, allocate stack of size 5. 
// Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().

#include <iostream>
using namespace std;

class Stack{
    private:
        int stackSize, index;
        int *array;
        
    public:
        Stack(){
            cout << "Initialised stack value with default size 5 and index -1 by Parameterless constructor" << endl;
            this->stackSize = 5;
            this->index=-1;
            array = new int[stackSize];
        }

        Stack(int stackSize){
            cout << "Initialised stack value with index -1 and user defined size by Parameterised constructor" << endl;
            this->stackSize = stackSize;
            this->index=-1;
            array = new int[stackSize];
        }

        void push(int data){
            //if index is < stack size allow
                //increment index
                //put user value at that index
                //else, don't allow
            if(index < stackSize){
                index++;
                array[index] = data;
            }
            else{
                cout<<"Stack overflow"<<endl;
            }
        }
        
        void pop(){
            //if index is >=0 allow popping and decrement index
            //else stackunderflow
            if (index >= 0){
                array[index] = 0;
                index--;
            }
            else{
                cout << "Stack underflow" <<endl;
            }
        }
        
        int peek(){
            return array[index];
        }

        bool isEmpty(){
            if(index==-1){
                return true;
            }
            else {
                return false;
            }
        }

        bool isFull(){
            if(index == stackSize){
                return true;
            }
            else{
                return false;
            }
        } 
        
        void print(){
            cout << "_______________" << endl;
            cout << "The stack is as follows : " << endl;
            for(int i=index; i>=0; i--){
                cout << array[i] << endl;
            }
        }
};

//Menu function
int menu(){
    int choice;
    cout << "__________________________________________________________________________" << endl;
    cout << "Please select the stack operation you want to perform from options below: " << endl;
    cout<< "0. EXIT \n1. push \n2. pop \n3. peek \n4. isEmpty \n5. isFull \n6. print"<<endl;
    cin>>choice;
    return choice;
}

//Main function (Menu driven)
int main(){
    int choice = 0;
    char yesOrNo;
    int stackSize = 0;
    int data;
    Stack *stackPtr;

    cout << "Do you want to define stack size or take default size ? (y/n)" <<endl;
    cin >> yesOrNo;
    if(yesOrNo == 'y' || yesOrNo == 'Y'){
        cout << "Enter the size of the stack" << endl;
        cin >> stackSize;
        *stackPtr = Stack(stackSize);
    }
    else{
        *stackPtr = Stack();
    }

    while((choice = menu()) != 0){
        switch (choice){
            case 1:
                cout << "Enter the integer value that you want to push : " <<endl;          
                cin >> data;
                stackPtr->push(data);
                break;

            case 2:
                stackPtr->pop();
                break;

            case 3:
                data = stackPtr->peek();
                cout << "The topmost value in the stack is = " << data << endl;
                break;

            case 4: 
                if(stackPtr->isEmpty()){
                    cout << "The stack is empty" << endl;
                }
                else{
                    cout << "The stack is not empty" <<endl;
                }
                break;

            case 5:
                if(stackPtr->isFull()){
                    cout << "The stack is full" << endl;
                }
                else{
                    cout << "the stack is not full" << endl;
                }
                break;

            case 6:
                stackPtr->print();
                break;
        }
    }
    return 0;
}