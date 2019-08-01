#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App1402 {
public:
    class Person {
    public:
        string name;
        string surname;
        
        Person(string name, string surname) {
            this->name = name;
            this->surname = surname;
        }
        Person() : Person("", "") {}
        
        friend ostream &operator << (ostream &out, Person &per) {
            out << per.name << " " << per.surname;
            return out;
        }
        
        friend istream &operator >> (istream &in, Person &per) {
            cout << "Name    : ";
            getline(in, per.name);
            
            cout << "Surname : ";
            getline(in, per.surname);
            
            return in;
        }
    };
    
    static void run() {
        Person user = Person("Juan", "Sosa");
        cout << user << endl << endl;
        
        Person boss;
        cout << "Information Required" << endl;
        cin >> boss;
        cout << boss << endl;
    }
};

/*
int main(int argc, char** argv) {
    App1402::run();
    return 0;
}
*/