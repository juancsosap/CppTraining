#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0920 {
public:
    class Father {
    public:
        string name;
        string surname;
        
        Father(string name, string surname) {
            this->name = name;
            this->surname = surname;
        }
        // Copy Constructor
        Father(Father *dad) : Father(dad->name, dad->surname) {}
        
        virtual string getFullname() {
            return this->name + " " + this->surname;
        }
    };

    class Mother {
    public:
        string name;
        string surname;

        Mother(string name, string surname) {
            this->name = name;
            this->surname = surname;
        }
        // Copy Constructor
        Mother(Mother *mom) : Mother(mom->name, mom->surname) {}
        
        virtual string getFullname() {
            return this->name + " " + this->surname;
        }
    };

    // Inherit from multiple base classes
    class Child : protected Father, protected Mother {
    public:
        string name;
        
        Child(string name, Father *dad, Mother *mom) : Father(dad), Mother(mom) {
            this->name = name;
        }

        string getFullname() {
            return this->name + " " + Father::surname + " " + Mother::surname;
        }
        
        void showFamily() {
            cout << "-----------------------------------" << endl;
            cout << "Father: " << Father::getFullname() << endl;
            cout << "Mother: " << Mother::getFullname() << endl;
            cout << "Me    : " << this->getFullname() << endl;
            cout << "-----------------------------------" << endl;
        }
    };

    static void run() {
        Father *juan = new Father("Juan", "Sosa");
        
        Mother *ana = new Mother("Ana", "Prada");
        
        Child *sarah = new Child("Sarah", juan, ana);
        sarah->showFamily();
    }
};

/*
int main(int argc, char** argv) {
    App0920::run();
    return 0;
}
*/