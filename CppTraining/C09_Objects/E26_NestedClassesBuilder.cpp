#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0926 {
public:
    class Person {
    private:
        string fullname;
        int age;
        bool active;
        
    public:
        Person() {
            this->fullname = "";
            this->age = 0;
            this->active = false;
        }
        
        void display() {
            cout << "---------------------------------------" << endl;
            cout << "Fullname : " << this->fullname << endl;
            cout << "Age      : " << this->age << " years" << endl;
            cout << "Active   : " << (this->active ? "True" : "False") << endl;
            cout << "---------------------------------------" << endl;
        }
        
        class Builder {
        public:
            Person *person;
            
            Builder() {
                Builder::person = new Person();
            }
            
            Builder * fullname(string fullname) {
                Builder::person->fullname = fullname;
                return this;
            }
            
            Builder * age(int age) {
                Builder::person->age = age;
                return this;
            }
            
            Builder * active(bool active) {
                Builder::person->active = active;
                return this;
            }
            
            Person * build() {
                return Builder::person;
            }
        };
        
        static Builder * builder() {
            return new Builder();
        }
    };
    
    static void run() {
        Person *jcsp = Person::builder()->fullname("Juan Carlos Sosa Peña")
                                        ->age(36)
                                        ->active(true)
                                        ->build();
        jcsp->display();
        
        Person::Builder *agppBuilder = Person::builder();
        agppBuilder = agppBuilder->fullname("Ana Griselda Prada Perez");
        agppBuilder = agppBuilder->age(36);
        agppBuilder = agppBuilder->active(true);
        Person *agpp = agppBuilder->build();
        agpp->display();
        
        Person *sesp = Person::builder()->fullname("Sarah ELiana Sosa Prada")->age(7)->build();
        sesp->display();
        
        Person::builder()->fullname("Jadash Amaryah Sosa Prada")->age(5)->build()->display();
    }
};

/*
int main(int argc, char** argv) {
    App0926::run();
    return 0;
}
*/