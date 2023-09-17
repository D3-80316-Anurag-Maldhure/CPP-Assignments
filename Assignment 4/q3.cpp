// Q3. A shop sells book or tapes. The Book class holds id, title, author, and price; 
// whereas Tape class holds id, title, artist, and price. There is 5% discount on tapes, 
// while 10% discount on books. Assuming that each user purchase 3 products (either book or tape), calculate final
// bill. The program should be menu driven and should not cause memory leakage.


//// INCOMPLETE

#include <iostream>
using namespace std;

class Item{
    public:
        int id;
        string title;
        float price;
        Item(){
            this->id = 0;
            this->title = "";
            this->price = 0; 
        }

        virtual float calculateDiscount(){
            return 0;
        }

        void acceptDetails(){
            cout << "_____________________________" << endl;
            cout << "Enter id : " << endl;
            cin >> this->id;
            cout << "Enter title : " << endl;
            cin >> this->title;
            cout << "Enter price : " << endl;
            cin >> this->price;
        };
        void printDetails(){
            cout << "_____________________________" << endl;
            cout << "ID: "<<this->id<<" , TITLE: "<< this->title<<" , PRICE: "<<this->price;
        };
};



class Book : public Item{
    //Book class holds id, title, author, and price
    private:
        string author;
    public:
        Book(){
            this->author = "";
        }
        float calculateDiscount(){
            //10% discount on books
            return this->price * 0.1; 
            
        }
        void acceptDetails(){
            Item::acceptDetails();
            cout << "Enter book author : " << endl;
            cin >> this->author;
            cout << "_____________________________" << endl;
        }
        void printDetails(){
            Item::printDetails();
            cout <<" , AUTHOR: "<<this->author<< endl;
            cout << "_____________________________" << endl;
        }
};



class Tape : public Item{
    //Tape class holds id, title, artist, and price
    private:
        string artist;
    public:
        Tape(){
            this->artist = "";
        }
        float calculateDiscount(){
            //5% discount on tapes
            return this->price * 0.05; 
        }
        void acceptDetails(){
            Item::acceptDetails();
            cout << "Enter tape artist : " << endl;
            cin >> this->artist;
            cout << "_____________________________" << endl;
        }
        void printDetails(){
            Item::printDetails();
            cout <<" , ARTIST: "<<this->artist<< endl;
            cout << "_____________________________" << endl;
        }
};

enum options{
    Buy_Items=1, Generate_Bill
};

//Menu function
int menu(){
    int choice;
    cout << "__________________________________________________________________________" << endl;
    cout << "Please select action from options below : " << endl;
    cout<< "0. EXIT \n1. Buy Items (Book/Tape) \n2. Generate bill (including discount)" <<endl;
    cin>>choice;
    return choice;
}

int main(){
    int choice;
    int bookOrTapeBuy;
    int totalPrice =0;
    int id;
    int discount;

    Item *bookArray = new Book[3];
    Item *tapeArray = new Tape[3];

    //accept
    cout << "Enter data for 3 books and 3 tapes : " <<endl;
    for(int i=0; i<3; i++){
        bookArray[i].acceptDetails();
    }
    for(int i=0; i<3; i++){
        tapeArray[i].acceptDetails();
    }

    //print 
    cout << "List to choose any 3 items from : "<<endl;
    for(int i=0; i<3; i++){
        bookArray[i].printDetails();
    }
    for(int i=0; i<3; i++){
        tapeArray[i].printDetails();
    }

    cout<< "What you want to buy? 1. Book or 2. Tape (Please enter your choice) " <<endl;

    while((choice=menu())!=0){
        switch (choice)
        {
            case Buy_Items:
                for(int i=0; i<3; i++){
                    cout<< "What you want to buy? 1. Book or 2. Tape (Please enter your choice) " <<endl;
                    cin >> bookOrTapeBuy;
                    //buy book
                    if(bookOrTapeBuy==1){
                        cout << "Choose a book from items kist above by entering id" <<endl;
                        cin >> id;
                        for(int i=0; i<3; i++){
                            if(bookArray[i].id==id){
                                discount = bookArray[i].calculateDiscount();
                                cout << "Discount on item : " << discount <<endl;
                                totalPrice += (bookArray[i].price -discount);
                                break;
                            }
                        }
                    }
                    else{
                        for(int i=0; i<3; i++){
                            cout << "Choose a book from items kist above by entering id" <<endl;
                            cin >> id;
                            if(tapeArray[i].id==id){
                                discount = tapeArray[i].calculateDiscount();
                                cout << "Discount on item : " << discount <<endl;
                                totalPrice += (tapeArray[i].price -discount);
                                break;
                            }
                        }
                    }
                }
                break;

            case Generate_Bill:
                cout << "____________________________________" << endl;
                cout << "Your total bill is : " << totalPrice << endl;
                cout << "Your total bill is : " << totalPrice << endl;
                cout << "____________________________________" << endl;
                break;
            
            default:
                cout << "Enter a valid choice" << endl;
                break;
        }
    }

    delete[] bookArray;
    delete[] tapeArray;

    return 0;
}