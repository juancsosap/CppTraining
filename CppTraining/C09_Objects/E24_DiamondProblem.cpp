#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0924 {
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
    
    class Father : public Person {
    public:
        Father(string name, string surname) : Person(name, surname) {}
        Father(Father *dad) : Person(dad->name, dad->surname) {}
    };

    class Mother : public Person {
    public:
        Mother(string name, string surname) : Person(name, surname) {}
        Mother(Mother *mom) : Mother(mom->name, mom->surname) {}
    };

    // Inherit from multiple base classes
    class Child : public Father, public Mother, public Person {
    public:
        Child(string name, Father *dad, Mother *mom) : Father(dad), Mother(mom),
                                                       Person(name, dad->surname + " " + mom->surname) {}
    };

    static void run() {
        Father *juan = new Father("Juan", "Sosa");
        cout << "Father: " << juan->getFullname() << endl;
        
        Mother *ana = new Mother("Ana", "Prada");
        cout << "Mother: " << ana->getFullname() << endl;
        
        Child *sarah = new Child("Sarah", juan, ana);
        // Ambiguous Reference throw Father/Person, Mother/Person and directly Child/Person
        // cout << "Child : " << sarah->getFullname() << endl; 
    }
};

/*
int main(int argc, char** argv) {
    App0924::run();
    return 0;
}
*/