#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Toy {
private:
    static int count;
    
    int id; 
    string description;
    double cost;

public:
    Toy(string description, double cost) {
        Toy::id = ++count;
        Toy::description = description;
        Toy::cost = cost;
    }
    
    void display() {
        cout << "----------------------" << endl;
        cout << " Id          : " << id << endl;
        cout << " Description : " << description << endl;
        cout << " Cost        : " << cost << endl;
        cout << "----------------------" << endl;        
    }
};

int Toy::count = 0;

class App0910 {
public:
    static void run() {
        Toy *toy1 = new Toy("Block", 10.5);
        Toy *toy2 = new Toy("Dolly", 25.3);
        Toy *toy3 = new Toy("Teddy", 30.2);
        Toy *toy4 = new Toy("Plane", 20.7);

        toy1->display();
        toy2->display();
        toy3->display();
        toy4->display();

        delete toy1;
        toy1 = new Toy("Car", 20.5);
        toy1->display();    
    }
};

/*
int main(int argc, char** argv) {
    App0910::run();
    return 0;
}
*/