#include <cstdlib>
#include <iostream>

using namespace std;

class App1104 {
public:
    static void run() {

        cout << "This command is in the line " << __LINE__ << " of the file " << __FILE__ << endl;
        cout << "This command is in the line " << __LINE__ << " of the file " << __FILE__ << endl;
        
        cout << "This program was compiled on " << __DATE__ << " at " << __TIME__ << endl;
        
        // Change the line number and file name is __LINE__ and __FILE__ refer to
        #line 100 "program.cpp"

        cout << "This command is in the line " << __LINE__ << " of the file " << __FILE__ << endl;
        
    }
};

/*
int main(int argc, char** argv) {
    App1104::run();
    return 0;
}
*/