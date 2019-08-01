#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

class App1410 {
public:
    class Address {
    public:
        string country;
        string city;
        string street;
        int number;
        
        Address(string country, string city, string street, int number) {
            this->country = *(new string(country));
            this->city = *(new string(city));
            this->street = *(new string(street));
            this->number = *(new int(number));
        }
        
        Address() : country(""),  city(""), street(""), number(0) {}
        
        Address(Address &address) : Address(address.country, address.city, 
                                            address.street, address.number) {}
        
        friend ostream &operator << (ostream &out, Address &add) {
            out << add.street << " " << add.number << ". " << add.city << ". " << add.country;
            return out;
        }
    };
    
    class Person {
    public:
        string name;
        int age;
        Address address;
        
        Person(string name,  int age,  Address &address) {
            this->name = *(new string(name));
            this->age = *(new int(age));
            this->address = address;
        }
        Person() : name(""), age(0) {}
        
        friend ostream &operator << (ostream &out, Person &per) {
            out << "Name    : " << per.name << endl;
            out << "Age     : " << per.age << endl;
            out << "Address : " << per.address << endl;
            return out;
        }
    };
    
    static void run() {
        Address home("Chile", "Santiago", "Providencia", 2000);
        Person oUser("Juan Carlos Sosa", 36, home);
        
        ofstream ofile("files/user.data", ios::binary | ios::out | ios::trunc);
        
        if(ofile.is_open()) {
            ofile.write((char *)&oUser, sizeof(Person));
            
            ofile.close();
        } else {
            cout << "Error opening the file" << endl;
        }
        
        ifstream ifile("files/user.data", ios::binary | ios::in);

        Person iUser;
        if(ifile.is_open()) {
            ifile.read((char *)&iUser, sizeof(Person));
            
            ifile.close();
        } else {
            cout << "Error opening the file" << endl;
        }
        
        cout << oUser;
        cout << "----------------------------------------------" << endl;
        cout << iUser;
        
        cout << "----------------------------------------------" << endl;
        
        oUser.name = "Ana Prada";
        oUser.age = 35;
        oUser.address = Address("Chile", "Santiago", "Alameda", 5000);
        cout << oUser;
        cout << "----------------------------------------------" << endl;
        cout << iUser;
        
    }
};

/*
int main(int argc, char** argv) {
    App1410::run();
    return 0;
}
*/