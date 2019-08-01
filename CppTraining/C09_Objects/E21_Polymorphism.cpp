#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0921 {
public:
    class Person {
    public:
        string name;
        string surname;
        
        Person(string name, string surname) {
            this->name = name;
            this->surname = surname;
        }
        
        string getFullname() {
            return this->name + " " + this->surname;
        }
        
        virtual void describe() {
            cout << "My name is " << this->getFullname() << endl;
        }
    };
    
    class Father : public Person {
    public:
        string sport;
        
        Father(string name, string surname, string sport) : Person(name, surname) {
            this->sport = sport;
        }
        // Copy Constructor
        Father(Father *dad) : Father(dad->name, dad->surname, dad->sport) {}
        
        void describe() {
            Person::describe();
            cout << "My favorite sport is " << this->sport << endl;
        }

    };

    class Mother : public Person {
    public:
        string clothing;

        Mother(string name, string surname, string clothing) : Person(name, surname) {
            this->clothing = clothing;
        }
        // Copy Constructor
        Mother(Mother *mom) : Mother(mom->name, mom->surname, mom->clothing) {}
        
        void describe() {
            Person::describe();
            cout << "My favorite clothing are " << this->clothing << endl;
        }
    };

    // Inherit from multiple base classes
    class Child : public Person {
    public:
        Father *dad;
        Mother *mom;
        
        Child(string name, Father *dad, Mother *mom) : Person(name, dad->surname + " " + mom->surname) {
            this->dad = dad;
            this->mom = mom;
        }

        string getFullname() {
            return this->name + " " + this->surname + " (C)";
        }
        
        void describe() {
            Person::describe();
            cout << "My Father is " << dad->getFullname() << endl;
            cout << "My Mother is " << mom->getFullname() << endl;
        }
    };

    static void run() {
        Father *juan = new Father("Juan", "Sosa", "swimming");
        juan->describe();
        
        cout << "-----------------------------------------" << endl;
        
        Mother *ana = new Mother("Ana", "Prada", "dresses");
        ana->describe();
        
        cout << "-----------------------------------------" << endl;
        
        Child *sarah = new Child("Sarah", juan, ana);
        sarah->describe();
        
        cout << "#########################################" << endl;
        
        Person *carlos = new Father("Carlos", "Peña", "trekking");
        cout << "My name is " << carlos->getFullname() << endl;
        carlos->describe();
        
        cout << "-----------------------------------------" << endl;
        
        Person *griselda = new Mother("Griselda", "Perez", "Skirts");
        cout << "My name is " << griselda->getFullname() << endl;
        griselda->describe();
        
        cout << "-----------------------------------------" << endl;
        
        Person *eliana = new Child("Eliana", juan, ana);
        cout << "My name is " << eliana->getFullname() << endl;
        eliana->describe();
    }
};

/*
int main(int argc, char** argv) {
    App0921::run();
    return 0;
}
*/