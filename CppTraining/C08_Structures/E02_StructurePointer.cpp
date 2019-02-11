#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

struct animal {
    string name;
    string specie;
    char gender;
    int age;
    bool inZoo;
};

// Passing Value
void displayAnimal(animal ani) {
    cout << "-------------------" << endl;
    cout << " Name   : " << ani.name << endl;
    cout << " Age    : " << ani.age << " years old" << endl;
    cout << " Gender : " << (ani.gender == 'M' ? "Male" : "Female") << endl;
    cout << " Specie : " << ani.specie << endl;
    cout << " State  : " << (ani.inZoo ? "Zoo" : "Free") << endl;
    cout << "-------------------" << endl;
}

// Passing Reference
void displayAnimal(animal *ani) {
    cout << "-------------------" << endl;
    cout << " State  : " << (ani->inZoo ? "Zoo" : "Free") << endl;
    cout << " Name   : " << ani->name << endl;
    cout << " Age    : " << ani->age << " years old" << endl;
    cout << " Gender : " << (ani->gender == 'M' ? "Male" : "Female") << endl;
    cout << " Specie : " << ani->specie << endl;
    cout << "-------------------" << endl;
}

// Passing Reference
void capture(animal *ani) {
    ani->inZoo = true;
}

// Passing Value
void liberate(animal ani) {
    ani.inZoo = false; // No effect outside
}

void app0802() {
    animal ema = {"Ema", "Dog", 'F', 3, false};
    displayAnimal(ema);
    
    capture(&ema);
    displayAnimal(&ema);
    
    liberate(ema);
    displayAnimal(ema);
}

/*
int main(int argc, char** argv) {
    app0802();
    return 0;
}
*/