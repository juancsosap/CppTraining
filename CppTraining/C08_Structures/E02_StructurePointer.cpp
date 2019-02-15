#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0802 {
public:
    struct animal {
        string name;
        string specie;
        char gender;
        int age;
        bool inZoo;
    };

    // Passing Value
    static void displayAnimal(animal ani) {
        cout << "-------------------" << endl;
        cout << " Name   : " << ani.name << endl;
        cout << " Age    : " << ani.age << " years old" << endl;
        cout << " Gender : " << (ani.gender == 'M' ? "Male" : "Female") << endl;
        cout << " Specie : " << ani.specie << endl;
        cout << " State  : " << (ani.inZoo ? "Zoo" : "Free") << endl;
        cout << "-------------------" << endl;
    }

    // Passing Reference
    static void displayAnimal(animal *ani) {
        cout << "-------------------" << endl;
        cout << " State  : " << (ani->inZoo ? "Zoo" : "Free") << endl;
        cout << " Name   : " << ani->name << endl;
        cout << " Age    : " << ani->age << " years old" << endl;
        cout << " Gender : " << (ani->gender == 'M' ? "Male" : "Female") << endl;
        cout << " Specie : " << ani->specie << endl;
        cout << "-------------------" << endl;
    }

    // Passing Reference
    static void capture(animal *ani) {
        ani->inZoo = true;
    }

    // Passing Value
    static void liberate(animal ani) {
        ani.inZoo = false; // No effect outside
    }

    static void run() {
        animal ema = {"Ema", "Dog", 'F', 3, false};
        displayAnimal(ema);

        capture(&ema);
        displayAnimal(&ema);

        liberate(ema);
        displayAnimal(ema);
    }
};

/*
int main(int argc, char** argv) {
    App0802::run();
    return 0;
}
*/