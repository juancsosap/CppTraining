#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0915 {
public:
    class Transport {
    private:
        int maxSpeed;
        string patent;

    protected: // Only accessable by member of this class or its subclasses
        void setMaxSpeed(int iMaxSpeed) { maxSpeed = iMaxSpeed; }
        void setPatent(string iPatent) { patent = iPatent; }

    public:
        int getMaxSpeed() { return maxSpeed; }
        string getPatent() { return patent; }

    };

    // Inherit public and protected members with the same access modifier
    //   present in the base class
    class Boat : public Transport {
    public:
        Boat(string patent) {
            setMaxSpeed(100);
            setPatent(patent);
        }
    };

    // Inherit public and protected members with protected access modifier
    class Plane : protected Transport {
    public:
        Plane(string patent) {
            setMaxSpeed(500);
            setPatent(patent);
        }

        void display() {
            cout << "Plane : " << getPatent() << "(" << getMaxSpeed() << " Kph)" << endl;
        }
    };

    // Inherit public and protected members with private access modifier
    class Automovil : private Transport {
    public:
        Automovil(string patent) {
            setMaxSpeed(200);
            setPatent(patent);
        }

        void display() {
            cout << "Automovil : " << getPatent() << "(" << getMaxSpeed() << " Kph)" << endl;
        }
    };

    static void run() {
        Boat *boat = new Boat("KZMH12");
        cout << "Boat : " << boat->getPatent() << endl;

        Plane *plane = new Plane("PKDF12");
        // Inherited as Protected and is not accessible
        // cout << "Plane : " << plane->getPatent() << endl; 
        plane->display();

        Automovil *automovil = new Automovil("PJDK23");
        // Inherited as Private and is not accessible
        // cout << "Automovil : " << automovil->getPatent() << endl; 
        automovil->display();
    }
};

/*
int main(int argc, char** argv) {
    App0915::run();
    return 0;
}
*/