#include <cstdlib>
#include <iostream>

using namespace std;

class App1403 {
public:
    static void run() {
        double number;
        cout << "Number  <--- ";
        cin >> number;
        cout << "Flags -> " << hex << cin.flags() << dec << endl << endl;
        cout << "###################################" << endl;
        
        ios_base::fmtflags iniflags = cout.flags();
        
        cout << "Default    : " << number << " or " << -number << endl;
        cout << "Flags -> " << hex << cout.flags() << dec << endl << endl;
        
        cout.setf(ios::showpos);
        cout << "SHOWPOS    : " << number << " or " << -number << endl;
        cout << "Flags -> " << hex << cout.flags() << dec << endl << endl;
        
        cout.setf(ios::showpoint);
        cout << "SHOWPOINT  : " << number << " or " << -number << endl;
        cout << "Flags -> " << hex << cout.flags() << dec << endl << endl;
        
        cout.flags(ios::scientific);
        cout << "SCIENTIFIC : " << number << " or " << -number << endl;
        cout << "Flags -> " << hex << cout.flags() << dec << endl << endl;
        
        cout.unsetf(ios :: showpos);
        cout.unsetf(ios :: showpoint);
        cout.unsetf(ios :: scientific);
        cout << "Reset      : " << number << " or " << -number << endl;
        cout << "Flags -> " << hex << cout.flags() << dec << endl << endl;
        
        cout.flags(ios :: showpos | ios :: showpoint);
        cout << "Multiple   : " << number << " or " << -number << endl;
        cout << "Flags -> " << hex << cout.flags() << dec << endl << endl;
                
        cout.flags(iniflags);
        cout << "-----------------------------------" << endl;
        
        bool active;
        cout << "Boolean <--- ";
        cin >> active;
        cout << "Flags -> " << hex << cin.flags() << dec << endl << endl;
        
        cout << "###################################" << endl;
        
        cout << "Default    : " << active << endl;
        cout << "Flags -> " << hex << cout.flags() << dec << endl << endl;
        
        cout.setf(ios::boolalpha);
        cout << "BOOLALPHA  : " << active << endl;
        cout << "Flags -> " << hex << cout.flags() << dec << endl << endl;
        
        cout.flags(iniflags);
        
        cout << "-----------------------------------" << endl;

        cout << "Boolean <--- ";
        cin.setf(ios::boolalpha);
        cin >> active;
        cout << "Flags -> " << hex << cin.flags() << dec << endl << endl;
        
        cout << "###################################" << endl;
        
        cout << "Default    : " << active << endl;
        cout << "Flags -> " << hex << cout.flags() << dec << endl << endl;
        
        cout.setf(ios::boolalpha);
        cout << "BOOLALPHA  : " << active << endl;
        cout << "Flags -> " << hex << cout.flags() << dec << endl << endl;
        
        cout.flags(iniflags);
        cout << "-----------------------------------" << endl;
        
        int value;
        cout << "Integer <-- ";
        cin >> value;
        cout << "Flags -> " << hex << cin.flags() << dec << endl << endl;

        cout << "###################################" << endl;
        
        cout << "Default    : " << value << " or " << -value << endl;
        cout << "Flags -> " << hex << cout.flags() << dec << endl << endl;
        
        cout.setf(ios::showpos);
        cout << "SHOWPOS    : " << value << " or " << -value << endl;
        cout << "Flags -> " << hex << cout.flags() << dec << endl << endl;
        
        cout.setf(ios::showpoint);        
        // No effect for integers
        cout << "SHOWPOINT  : " << value << " or " << -value << endl;
        cout << "Flags -> " << hex << cout.flags() << dec << endl << endl;

        cout.flags(ios::hex);
        cout << "HEX        : " << value << " or " << -value << endl;
        cout << "Flags -> " << hex << cout.flags() << dec << endl << endl;
        
        cout.flags(ios::hex | ios::showbase);        
        cout << "SHOWBASE   : " << value << " or " << -value << endl;
        cout << "Flags -> " << hex << cout.flags() << dec << endl << endl;

        cout.flags(ios::dec);
        cout << "DEC        : " << value << " or " << -value << endl;
        cout << "Flags -> " << hex << cout.flags() << dec << endl << endl;
        
    }
};

/*
int main(int argc, char** argv) {
    App1403::run();
    return 0;
}
*/