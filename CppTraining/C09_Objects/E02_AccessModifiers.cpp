#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/* ACCESS MODIFIERS
 * -------------------------------------------------------  
 *                Public  Protected   Private
 * Same Class      YES       YES        YES
 * Derived Class   YES       YES        NO
 * Other Classes   YES       NO         NO
 */

class App0902 {
public:
    class Animal {
    private:
        string name;

    protected:
        string specie;

    public:
        void display() {
            cout << "-------------------" << endl;
            cout << " Name   : " << name << endl;
            cout << " Specie : " << specie << endl;
            cout << "-------------------" << endl;
        }

        string getName() { return name; }
        void setName(string value) { name = value; }

        string getSpecie() { return specie; }
        void setSpecie(string value) { specie = value; }
    };

    static void run() {
        Animal ema;

        // ema.name = "Ema"; // Compilation error, private access

        ema.setName("Ema");
        ema.setSpecie("Dog");

        ema.display();

        cout << ema.getName() << " is a(n) " << ema.getSpecie() << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0902::run();
    return 0;
}
*/