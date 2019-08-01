#include <cstdlib>
#include <iostream>

using namespace std;

class App1404 {
public:
    static void run() {
        double number;
        cout << "Number  <--- ";
        cin >> number;
        
        cout << "Default    : " << number << " or " << -number << endl;
        
        // Most of the Manipulators remains after sentence
        // must be disable explicitly
        cout << "SHOWPOS    : " << showpos << number << " or " << -number << noshowpos << endl;
        
        cout << "SHOWPOINT  : " << showpoint << number << " or " << -number << noshowpoint << endl;
        
        cout << "SCIENTIFIC : " << scientific << number << " or " << -number << endl;
        
        cout << "-----------------------------------" << endl;
        
        bool active;
        cout << "Boolean <--- ";
        cin >> active;
        
        cout << "Default     : " << active << endl;
        cout << "BOOLALPHA   : " << boolalpha << active << noboolalpha << endl;
        
        cout << "Boolean <--- ";
        cin >> boolalpha >> active >> noboolalpha;
        
        cout << "Default     : " << active << endl;
        cout << "BOOLALPHA   : " << boolalpha << active << noboolalpha << endl;
        
        cout << "-----------------------------------" << endl;
        
        int value;
        cout << "Integer <-- ";
        cin >> value;
        
        cout << "Default    : " << value << endl;
        
        cout << "HEX        : " << hex << value << endl;
        cout << "SHOWBASE   : " << showbase << value << noshowbase << endl;
        
        cout << "OCT        : " << oct << value << endl;
        cout << "SHOWBASE   : " << showbase << value << noshowbase << endl;
        
        cout << "DEC        : " << dec << value << endl;
        
    }
};

/*
int main(int argc, char** argv) {
    App1404::run();
    return 0;
}
*/