#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    static int count;
    
    string name;
    double cost;

public:
    Book(string name, double cost) {
        count++;
        Book::name = name;
        Book::cost = cost;
    }
    
    ~Book() {
        count--;
    }
    
    void display() {
        cout << "----------------------" << endl;
        cout << " Name : " << name << endl;
        cout << " Cost : " << cost << endl;
        cout << "----------------------" << endl;        
    }
    
    static int getCount() { return count; }
};

int Book::count = 0;

class App0911 {
public:
    static void run() {
        cout << "Quantity : " << Book::getCount() << endl;

        Book *book1 = new Book("Go ahead", 50.7);
        Book *book2 = new Book("Be patient", 13.3);
        Book *book3 = new Book("Do something", 90.8);
        Book *book4 = new Book("By Train", 75.0);

        book1->display();
        book2->display();
        book3->display();
        book4->display();

        cout << "Quantity : " << Book::getCount() << endl;

        delete book1;

        cout << "Quantity : " << Book::getCount() << endl;

        book1 = new Book("Far away", 95.0);
        book1 = new Book("Far away", 95.0);
        book1 = new Book("Far away", 95.0);
        book1 = new Book("Far away", 95.0);

        cout << "Quantity : " << Book::getCount() << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0911::run();
    return 0;
}
*/