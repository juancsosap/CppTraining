#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

class App1407 {
public:
    static void run() {
        ofstream ofile;
        
        // Default open modes
        // ios::trunc mode means that the file is created if it
        // doesn't exist or delete all the content in the existing file
        ofile.open("files/test.txt", ios :: out | ios :: trunc);
        
        if(ofile.is_open()) {
            cout << "What you want to write in the file?" << endl;
            cout << "(write quit() in a new line to exit)" << endl;
            cout << "------------------------------------" << endl;
            
            string line;
            while(true) {
                getline(cin, line);
                if(line == "quit()") break;
                ofile << line << endl;
            }
            
            ofile.close();
        } else {
            cout << "Error opening the file in Writing Mode" << endl;
        }
        
        // ios::app mode means that the file is created if it
        // doesn't exist or append to the existing file content
        ofile.open("files/test.txt", ios :: out | ios :: app);
        
        if(ofile.is_open()) {
            cout << "How write this document?" << endl;
            cout << "------------------------------------" << endl;
            
            string line;
            getline(cin, line);
            ofile << line << endl;
            
            ofile.close();
        } else {
            cout << "Error opening the file in Writing Mode" << endl;
        }
        
        // Default mode is ios:in
        ifstream ifile("files/test.txt");
        
        if(ifile.is_open()) {
            cout << "The final content in the file is:" << endl;
            cout << "------------------------------------" << endl;
            
            string line;
            while(ifile.good()) {
                getline(ifile, line);
                cout << line << endl;
            }
            
            ifile.close();
        } else {
            cout << "Error opening the file in Writing Mode" << endl;
        }
    }
};

/*
int main(int argc, char** argv) {
    App1407::run();
    return 0;
}
*/