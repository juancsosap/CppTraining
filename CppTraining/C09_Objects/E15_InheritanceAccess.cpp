#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0915 {
public:
    class Transport {
    private:
        string serial;
        int maxSpeed;
        string patent;

    protected: // Only accessable by member of this class or its subclasses
        void setSerial(string iSerial) { serial = iSerial; }
        void setMaxSpeed(int iMaxSpeed) { maxSpeed = iMaxSpeed; }
        void setPatent(string iPatent) { patent = iPatent; }

    public:
        string getSerial() { return serial; }
        int getMaxSpeed() { return maxSpeed; }
        string getPatent() { return patent; }

    };

    // Inherit public and protected members with the same access modifier
    //   present in the base class
    class Boat : public Transport {
    public:
        Boat(string serial, string patent) {
            setSerial(serial);
            setMaxSpeed(100);
            setPatent(patent);
        }
    };

    // Inherit public and protected members with protected access modifier
    class Plane : protected Transport {
    public:
        Plane(string serial, string patent) {
            setSerial(serial);
            setMaxSpeed(500);
            setPatent(patent);
        }

        void display() {
            cout << "Plane : " << getPatent() << endl;
        }
    };

    // Inherit public and protected members with private access modifier
    class Automovil : private Transport {
    public:
        Automovil(string serial, string patent) {
            setSerial(serial);
            setMaxSpeed(200);
            setPatent(patent);
        }

        void display() {
            cout << "Automovil : " << getPatent() << endl;
        }
    };

    static void run() {
        Boat *boat = new Boat("KL123456789","KZMH12");
        cout << "Boat : " << boat->getPatent() << endl;

        Plane *plane = new Plane("MH1333885999","PKDF12");
        // Inherited as Protected and is not accessible
        // cout << "Plane : " << plane->getPatent() << endl; 
        plane->display();

        Automovil *automovil = new Automovil("MP2341135999","PJDK23");
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