#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0914 {
public:
    class Building {
    private:
        string architect;
    public:
        string address;

        void setArchitect(string iArchitect) { architect = iArchitect; }
        string getArchitect() { return architect; }
    };

    // Inherit all not private members
    // Except Constructors, Distructors and friends functions and classes
    class House : public Building {
    public:
        int rooms;

        House(string iArchitect, string iAddress, int iRooms) {
            // architect = iArchitect; // not accessible
            setArchitect(iArchitect);
            address = iAddress;
            rooms = iRooms;
        }

        void display() {
            cout << "-----------House------------" << endl;
            cout << " Architect : " << getArchitect() << endl;
            cout << " Address   : " << address << endl;
            cout << " Rooms     : " << rooms << endl;
            cout << "----------------------------" << endl;
        }
    };

    // Inherit all not private members
    // Except Constructors, Distructors and friends functions and classes
    class Barn : public Building {
    public:
        int size;

        Barn(string iArchitect, string iAddress, int iSize) {
            setArchitect(iArchitect);
            address = iAddress;
            size = iSize;
        }

        void display() {
            cout << "-----------Barn-------------" << endl;
            cout << " Architect : " << getArchitect() << endl;
            cout << " Address   : " << address << endl;
            cout << " Size      : " << size << " mtrs2" << endl;
            cout << "----------------------------" << endl;
        }
    };

    static void run() {
        House *myHouse = new House("Pedro Perez", "Providencia", 3);
        myHouse->display();

        Barn *myDeposit = new Barn("Tomáz Moro", "Quilicura", 1200);
        myDeposit->display();
    }
};

/*
int main(int argc, char** argv) {
    App0914::run();
    return 0;
}
*/