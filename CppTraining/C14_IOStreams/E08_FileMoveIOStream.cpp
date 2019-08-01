#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

class App1408 {
public:
    static void run() {
        // Default open modes ios::in | ios::out
        // If the file doesn't exist it generate an error
        fstream file("files/test.txt", ios::in);
        
        string iline = "";
        int pos = 0;
        if(file.is_open()) {
            cout << "The current content of the file is:" << endl;
            cout << "------------------------------------" << endl;
            
            string line;
            while(file.good()) {
                int tempPos = file.tellg();
            
                getline(file, line);
                if(line != "") {
                    pos = tempPos;
                    iline = line;
                }
                cout << line << endl;
            }
            
            file.close();
        }
        
        file.open("files/test.txt", ios::in | ios :: out);
        
        if(file.is_open()) {
        
            cout << "What do you want to add to the file?" << endl;
            cout << "(write quit() in a new line to exit)" << endl;
            cout << "------------------------------------" << endl;
            
            file.seekp(pos);
            
            string line;
            while(true) {
                getline(cin, line);
                if(line == "quit()") break;
                file << line << endl;
            }
            file << iline << endl;
            
            cout << endl << "The final content of the file is:" << endl;
            cout << "------------------------------------" << endl;
            
            file.seekg(0, ios::beg);
            
            while(file.good()) {
                getline(file, line);
                cout << line << endl;
            }
            
            file.close();
        } else {
            cout << "Error opening the file in Writing Mode" << endl;
        }
    }
};

/*
int main(int argc, char** argv) {
    App1408::run();
    return 0;
}
*/