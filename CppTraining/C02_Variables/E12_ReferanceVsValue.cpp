#include <cstdlib>
#include <iostream>

using namespace std;

class App0212 {
public:
    static void run() {
        int num11 = 10;
        int num12 = num11;
        cout << num11 << " : " << num12 << endl;
        num11 = 20;
        cout << num11 << " : " << num12 << endl;
        
        cout << "----------------" << endl;
        
        int num21 = int(10);
        int num22 = num21;
        cout << num21 << " : " << num22 << endl;
        num21 = 20;
        cout << num21 << " : " << num22 << endl;
        
        cout << "----------------" << endl;
        
        int *num31 = new int(10);
        int *num32 = num31;
        cout << *num31 << " : " << *num32 << endl;
        *num31 = 20;
        cout << *num31 << " : " << *num32 << endl;
        
        cout << "----------------" << endl;
        
        int &num41 = *(new int(10));
        int &num42 = num41;
        cout << num41 << " : " << num42 << endl;
        num41 = 20;
        cout << num41 << " : " << num42 << endl;

        cout << "----------------" << endl;
        
        int num51(10);
        int num52 = num51;
        cout << num51 << " : " << num52 << endl;
        num51 = 20;
        cout << num51 << " : " << num52 << endl;

    }
};

/*
int main(int argc, char** argv) {
    App0212::run();
    return 0;
}
*/