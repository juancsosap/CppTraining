#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0909 {
public:
    class Food {
    private:
        string *name;

    public:
        string getName() { return *name; }

        // Constructor
        Food(string name) {
            Food::name = new string(name);
            cout << "Cooking " << getName() << endl;
        }

        // Distructor
        ~Food() {
            cout << "Eating " << getName() << endl;
            delete name;
        }
    };

    static void run() {
        Food *bread = new Food("Bread");
        Food *cookies = new Food("Cookies");

        delete bread;
        delete cookies;

        Food *meat = new Food("Meat");
    }
};

/*
int main(int argc, char** argv) {
    App0909::run();
    return 0;
}
*/