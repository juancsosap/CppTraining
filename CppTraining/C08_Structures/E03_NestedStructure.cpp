#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0803 {
public:
    struct address {
        string country;
        string city;
        string street;
        int number;
    };

    struct client {
        string name;
        string id;
        address workAddress;
    };

    static void run() {
        address work = {"Chile", "Santiago", "Providencia", 1760};
        client jose = {"José", "1234-56", work};

        cout << "Name : " << jose.name << endl;
        cout << "City : " << jose.workAddress.city << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0803::run();
    return 0;
}
*/