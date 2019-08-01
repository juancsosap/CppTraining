#include <cstdlib>
#include <iostream>

#define WIN 0
#define MAC 1
#define LINUX 2

#define OS LINUX

#define MSG "This is my Default App"

using namespace std;

class App1103 {
public:
    static void run() {
        
        #ifdef OS

            #if OS == WIN
                // This line is only compiled if OS == WIN
                cout << "Sistema Operativo Windows" << endl;
            #elif OS == MAC
                // This line is only compiled if OS == MAC
                cout << "Sistema Operativo Mac" << endl;
            #else
                // This line is only compiled if OS != WIN and MAC 
                cout << "Sistema Operativo Linux" << endl;
            #endif

            #undef MSG
                
            #ifndef MSG
                cout << "This is my App" << endl;
            #else
                cout << MSG << endl;
            #endif
        
        #else
        
            cout << "Incomplete App" << endl;
            
        #endif

    }
};

/*
int main(int argc, char** argv) {
    App1103::run();
    return 0;
}
*/