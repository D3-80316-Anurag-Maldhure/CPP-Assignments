#include <iostream>
using namespace std;

enum Acc_Type {
    SAVING,
    CURRENT,
    DMAT
};

class InsufficientFunds {
    private:
    string msg;

public:
    string w()  throw() {
        this->msg="Insufficient funds. Withdrawal not allowed.";
        return msg;
    }
};

class Account {
private:
    int id;
    Acc_Type acc_type;
    double balance;

public:
    Account() {
        this->id = 0;
        this->acc_type = SAVING;
        this->balance = 1000;
    }

    Account(int id, Acc_Type type, double bal) {
        this->id = id;
        this->acc_type = type;
        this->balance = bal;
    }

    void accept() {
        cout << "Enter the id: ";
        cin >> this->id;
        cout << "Enter the Acc Type (0 for Savings, 1 for Current, 2 for DMAT): ";
        int type;
        cin >> type;
        if (type == 0)
            this->acc_type = SAVING;
        else if (type == 1)
            this->acc_type = CURRENT;
        else if (type == 2)
            this->acc_type = DMAT;
        else {
            cout << "Invalid account type. Defaulting to SAVING." << endl;
            this->acc_type = SAVING;
        }
        cout << "Enter the Balance: ";
        cin >> this->balance;
    }

    void display() {
        cout << "ID: " << this->id << endl;
        cout << "Balance: " << this->balance << endl;
        cout << "Acc Type: ";
        switch (this->acc_type) {
            case SAVING:
                cout << "SAVING";
                break;
            case CURRENT:
                cout << "CURRENT";
                break;
            case DMAT:
                cout << "DMAT";
                break;
        }
        cout << endl;
    }

    void deposit(double amount) {
        if (amount < 0) {
            throw "Invalid deposit amount.";
        }
        this->balance += amount;
        cout << "Deposit successful. New balance: " << this->balance << endl;
    }

    void withdraw(double amount) {
        if (amount < 0) {
            throw "Invalid withdrawal amount.";
        }
        if (amount > this->balance) {
            throw InsufficientFunds();
        }
        this->balance -= amount;
        cout << "Withdrawal successful. New balance: " << this->balance << endl;
    }

    int get_id() {
        return this->id;
    }

    Acc_Type get_type() {
        return this->acc_type;
    }

    double get_balance() {
        return this->balance;
    }
};

enum EMenu {
    EXIT,
    DEPOSIT,
    WITHDRAW
};

EMenu myMenu() {
    int ch;
    cout << "Press 0 to exit\nPress 1 to deposit\nPress 2 to withdraw" << endl;
    cout << "Enter the choice: ";
    cin >> ch;
    cout << endl;
    return EMenu(ch);
}

int main() {
    Account *ptr[5];
    for (int i = 0; i < 5; i++) {
        ptr[i] = new Account;
        ptr[i]->accept();
        ptr[i]->display();
    }

    int ch;
    int counter = 0;
    while ((ch = myMenu()) != EXIT) {
        switch (ch) {
            case DEPOSIT:
                cout << "Enter the amount you want to deposit: ";
                double depo;
                cin >> depo;
                try {
                    ptr[counter]->deposit(depo);
                } catch (InsufficientFunds &s) {
                    cout << s.w() << endl;
                }
                break;

            case WITHDRAW:
                cout << "Enter the amount you want to withdraw: ";
                double wdraw;
                cin >> wdraw;
                try {
                    ptr[counter]->withdraw(wdraw);
                } catch (InsufficientFunds &e) {
                    cout << e.w() << endl;
                }
                break;

            default:
                cout << "Invalid choice" << endl;
                break;
        }

        cout << "Updated balance: " << ptr[counter]->get_balance() << endl;
        counter++;
        if (counter >= 5) {
            cout << "No more accounts available." << endl;
            break;
        }
    }

    // Deallocate memory for accounts
    for (int i = 0; i < 5; i++) {
        delete ptr[i];
    }

    return 0;
}