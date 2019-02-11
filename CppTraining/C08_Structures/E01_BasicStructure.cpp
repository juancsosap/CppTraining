#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

struct person {
    string name;
    int age;
    char gender;
    bool active;
};

void displayPerson(person per) {
    cout << "-------------------" << endl;
    cout << " Name   : " << per.name << endl;
    cout << " Age    : " << per.age << " years old" << endl;
    cout << " Gender : " << (per.gender == 'M' ? "Male" : "Female") << endl;
    cout << " Status : " << (per.active ? "Active" : "Suspended") << endl;
    cout << "-------------------" << endl;
}

void app0801() {
    person juan = {"Juan", 35, 'M', true};
    displayPerson(juan);

    person ana;
    displayPerson(ana);
    
    ana.name = "Ana";
    ana.age = 15;
    ana.gender = 'F';
    ana.active = false;
    displayPerson(ana);
}

/*
int main(int argc, char** argv) {
    app0801();
    return 0;
}
*/