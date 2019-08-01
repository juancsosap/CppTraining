#include <cstdlib>
#include <iostream>

#include "E01_IncludePreProcesorExternal.cpp"

using namespace std;

class App1101 {
public:
    static void run() {
        Person user("Juan", "Sosa");
        cout << user.getFullname() << endl;
    }
};

/*
int main(int argc, char** argv) {
    App1101::run();
    return 0;
}
*/