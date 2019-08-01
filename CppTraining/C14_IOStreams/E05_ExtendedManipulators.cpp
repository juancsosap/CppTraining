#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class App1405 {
public:
    class User {
    public:
        int id;
        string name;
        int age;
        double height;
        
        User(int id, string name,  int age,  double height) : 
              id(id),  name(name), age(age), height(height) {} 

        friend ostream &operator << (ostream &out, User &user) {
            out << " " << setfill('0') << setw(8) << user.id << " ";
            out << " " << setfill(' ') << setw(20) << left << user.name << " ";
            out << " " << setw(10) << right << user.age << " years" << " ";
            out << " " << setw(5) << setprecision(3) << user.height << " mts" << " ";
            return out;
        }
        
        static void displayHeader() {
            cout << " " << setw(8) << "ID" << " ";
            cout << " " << setw(20) << left << "NAME" << " ";
            cout << " " << setw(16) << right << "AGE" << " ";
            cout << " " << setw(9) << "HEIGHT" << " ";
            cout << endl << setw(61) << setfill('-') << "" << endl;
        }
    };
    
    static void run() {
        User::displayHeader();
        
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
    App1405::run();
    return 0;
}
*/