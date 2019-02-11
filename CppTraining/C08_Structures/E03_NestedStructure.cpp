#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

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

void app0803() {
    address work = {"Chile", "Santiago", "Providencia", 1760};
    client jose = {"José", "1234-56", work};
    
    cout << "Name : " << jose.name << endl;
    cout << "City : " << jose.workAddress.city << endl;
}

/*
int main(int argc, char** argv) {
    app0803();
    return 0;
}
*/