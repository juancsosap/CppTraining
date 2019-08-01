#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0917 {
public:
    class Father {
    public:
        string name;
        string surname;
    };

    class Mother {
    public:
        string name;
        string surname;
    };

    // Inherit from multiple base classes
    class Child : protected Father, protected Mother {
    public:
        void born(Father *dad, Mother *mom) {
            Father::name = dad->name;
            Father::surname = dad->surname;
            Mother::name = mom->name;
            Mother::surname = mom->surname;
        }
        
        string getSurname() {
            return Father::surname + " " + Mother::surname;
        }
    };

    static void run() {
        Father *juan = new Father();
        juan->name = "Juan";
        juan->surname = "Sosa";
        
        Mother *ana = new Mother();
        ana->name = "Ana";
        ana->surname = "Prada";
        
        Child sarah;
        sarah.born(juan, ana);
        cout << sarah.getSurname() << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0917::run();
    return 0;
}
*/