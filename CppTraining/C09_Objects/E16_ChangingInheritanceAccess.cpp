#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0916 {
public:
    class Transport {
    private:
        int maxSpeed;
        string patent;

    protected: // Only accessable by member of this class or its subclasses
        void setMaxSpeed(int iMaxSpeed) { maxSpeed = iMaxSpeed; }
        void setPatent(string iPatent) { patent = iPatent; }

    public:
        int currentSpeed = 0;
        
        int getMaxSpeed() { return maxSpeed; }
        string getPatent() { return patent; }

    };

    // Inherit public and protected members with private access modifier
    class Automovil : private Transport {
    public:
        Automovil(string patent) {
            setMaxSpeed(200);
            setPatent(patent);
        }
        
        // Change the access modifier to Public
        using Transport::currentSpeed; // Variable
        using Transport::getPatent; // Method

        void display() {
            cout << "Automovil : " << getPatent() << " (" << getMaxSpeed() << " Kph)" << endl;
        }
    };

    static void run() {
        Automovil *automovil = new Automovil("PJDK23");
        // Inherited as Private and is not accessible
        cout << "Automovil : " << automovil->getPatent() << endl; 
        automovil->display();
        
        automovil->currentSpeed = 100;
        cout << "Speed: " << automovil->currentSpeed << " Kph" << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0916::run();
    return 0;
}
*/