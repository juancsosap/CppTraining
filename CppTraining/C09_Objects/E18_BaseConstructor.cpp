#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0918 {
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
    };

    static void run() {
        Father *juan = new Father("Juan", "Sosa");
        
        Mother *ana = new Mother("Ana", "Prada");
        
        Child *jadash = new Child("Jadash", juan, ana);
        cout << jadash->getFullname() << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0918::run();
    return 0;
}
*/