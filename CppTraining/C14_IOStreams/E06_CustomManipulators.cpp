#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class App1406 {
public:
    class User {
    public:
        int id;
        string name;
        int age;
        double height;
        
        User(int id, string name,  int age,  double height) : 
              id(id),  name(name), age(age), height(height) {} 
        User() : id(0),  name(""), age(0), height(0.0) {} 


        friend ostream &operator << (ostream &out, User &user) {
            out << " " << setfill('0') << setw(8) << user.id << " ";
            out << " " << setfill(' ') << setw(20) << left << user.name << " ";
            out << " " << setw(10) << right << user.age << " years" << " ";
            out << " " << setw(5) << showpoint << setprecision(3) << user.height << " mts" << " ";
            return out;
        }
        
        friend istream &operator >> (istream &in, User &user) {
            in >> getId >> user.id;
            in >> getName >> user.name;
            in >> getAge >> user.age;
            in >> getHeight >> user.height;
            return in;
        }

        
        static void displayHeader() {
            cout << " " << setw(8) << "ID" << " ";
            cout << " " << setw(20) << left << "NAME" << " ";
            cout << " " << setw(16) << right << "AGE" << " ";
            cout << " " << setw(9) << "HEIGHT" << " ";
            cout << endl << line << "" << endl;
        }
        
        static ostream &line(ostream &out) {
            out << setw(61) << setfill('-') << "" << setfill(' ');
            return out;
        }
        
        static istream &getId(istream &in) {
            cout << "Id : ";
            return in;
        }
        
        static istream &getName(istream &in) {
            cout << "Name : ";
            return in;
        }
        
        static istream &getAge(istream &in) {
            cout << "Age : ";
            return in;
        }
        
        static istream &getHeight(istream &in) {
            cout << "Height : ";
            return in;
        }
    };
    
    static void run() {
        cout << " USER DATABASE ";
        cout << endl << User::line << endl;;
        
        User user0;
        cin >> user0;

        cout << endl << User::line << endl;;
        
        User::displayHeader();
        
        cout << user0 << endl;
        
        User user1(101, "Juan Sosa", 36, 1.723);
        cout << user1 << endl;
        
        User user2(102, "Ana Prada", 35, 1.575);
        cout << user2 << endl;
        
        User user3(103, "Maria Gomez", 70, 1.857);
        cout << user3 << endl;
        
        
    }
};

/*
int main(int argc, char** argv) {
    App1406::run();
    return 0;
}
*/