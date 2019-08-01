#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0925 {
public:
    class Person {
    public:
        string name;
        string surname;
        
        Person(string name, string surname) {
            this->name = name;
            this->surname = surname;
        }
        
        virtual string getFullname() {
            return this->name + " " + this->surname;
        }
        
    };
    
    class Writer : virtual public Person {
    public:
        Writer(string name, string surname) : Person(name, surname) {}
        void write() {
            cout << "I'm Writing" << endl;
        }
    };

    class Reader : virtual public Person {
    public:
        Reader(string name, string surname) : Person(name, surname) {}
        void read() {
            cout << "I'm Reading" << endl;
        }
    };

    class Thinker : public Writer, public Reader {
    public:
        Thinker(string name, string surname) : Writer(name, surname), 
                                               Reader(name, surname), 
                                               Person(name, surname) {}
        void think() {
            cout << "I'm Thinking" << endl;
        }
    };

    static void run() {
        Person *juan = new Person("Juan", "Sosa");
        cout << "Person: " << juan->getFullname() << endl;
        
        cout << "-------------------------------" << endl;
        
        Writer *luis = new Writer("Luis", "Perez");
        cout << "Writer: " << luis->getFullname() << endl;
        luis->write();
        
        cout << "-------------------------------" << endl;
        
        Reader *pepe = new Reader("Pepe", "Prada");
        cout << "Reader: " << pepe->getFullname() << endl;
        pepe->read();
        
        cout << "-------------------------------" << endl;
        
        Thinker *ana = new Thinker("Ana", "Peña");
        cout << "Thinker: " << ana->getFullname() << endl;
        ana->read();
        ana->write();
        ana->think();
    }
};

/*
int main(int argc, char** argv) {
    App0925::run();
    return 0;
}
*/