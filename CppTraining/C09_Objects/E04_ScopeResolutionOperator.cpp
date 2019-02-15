#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Monitor {
private:
    string serial;
public:
    string brand;
    string model;
    string size;
    
    string getSerial() { return serial; }
    void setSerial(string value) { serial = value; }
    
    void display();
};

void Monitor::display() {
    cout << "-------------------" << endl;
    cout << " Serial  : " << Monitor::getSerial() << endl;
    cout << " Brand   : " << Monitor::brand << endl;
    cout << " Model   : " << Monitor::model << endl;
    cout << " Size    : " << Monitor::size << endl;
    cout << "-------------------" << endl;
}

class App0904 {
public:
    static void run() {
        Monitor mon1;

        mon1.setSerial("KML1234-5");
        mon1.brand = "Samsung";
        mon1.model = "S22F1234FLH";
        mon1.size = "15 inch";

        mon1.display();
    }
};

/*
int main(int argc, char** argv) {
    App0904::run();
    return 0;
}
*/