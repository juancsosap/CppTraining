#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0923 {
public:
    
    // Include methods without body (abstract) and couldn't be instantiated
    // It contains normal and pure virtual methods then it's an Abstract Class
    class Person {
    private:
        string name;
        
    public:
        Person(string name) {
            this->name = name;
        }
        
        string getName() {
            return this->name;
        }
        
        virtual void describe() = 0;
    };

    // It class implement the inherited method without body
    class Student : public Person {
    public:
        string career;
        
        Student(string name, string career) : Person(name) {
            this->career = career;
        }
        
        void describe() {
            cout << "I'm " << this->getName() << ", student of " << this->career << endl;
        }
    };

    // It class implement the inherited method without body
    class Teacher : public Person {
    public:
        string subject;
        
        Teacher(string name, string subject) : Person(name) {
            this->subject = subject;
        }
        
        void describe() {
            cout << "I'm " << this->getName() << ", teacher of " << this->subject << endl;
        }
    };
    
    static void run() {
        // Person *juan = new Person("Juan"); // Abstract Classes couldn't be instatiated
        
        Person *luis = new Student("Luis", "Architecture");
        luis->describe();
        
        Person *andres = new Teacher("Andres", "Mathematics");
        andres->describe();
    }
};

/*
int main(int argc, char** argv) {
    App0923::run();
    return 0;
}
*/