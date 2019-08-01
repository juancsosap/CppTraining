#include <string>

using namespace std;

class Person {
public:
    string name;
    string surname;
    
    Person(string name, string surname) : name(name), surname(surname) {}
    
    string getFullname() {
        return this->name + " " + this->surname;
    }
};