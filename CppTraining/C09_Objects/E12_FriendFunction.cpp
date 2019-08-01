#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Human {
private:
    string name;
    int age;
    
public:
    Human(string name, int age) {
        Human::name = name;
        Human::age = age;
    }
    
    friend void display(Human *human);
};

void display(Human *human) {
    cout << "-------------------" << endl;
    cout << " Name : " << human->name << endl;
    cout << " Age  : " << human->age << endl;
    cout << "-------------------" << endl;
}

void show(Human *human) {
    // No Access to private members
    // cout << human->name << " is " << human->age << " years old" << endl;
}

class App0912 {
public:
    static void run() {
        Human *juan = new Human("Juan", 36);
        display(juan);
        show(juan);
    }
};

/*
int main(int argc, char** argv) {
    App0912::run();
    return 0;
}
*/