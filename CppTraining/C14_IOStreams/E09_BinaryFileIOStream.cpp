#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

class App1409 {
public:
    static void run() {
        ifstream ifile("files/original.jpg", ios::binary | ios::in);
        ofstream ofile("files/copy.jpg", ios::binary | ios::out | ios::trunc);
        
        if(ifile.is_open() && ofile.is_open()) {
            
            char byte;
            while(ifile.good()) {
                ifile.get(byte);
                ofile.put(byte);
            }
            
            ifile.close();
            ofile.close();
        } else {
            cout << "Error opening the file" << endl;
        }
    }
};

/*
int main(int argc, char** argv) {
    App1409::run();
    return 0;
}
*/