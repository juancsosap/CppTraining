#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

class App1411 {
public:
    static void run() {
        cout << "What date we are in? (dd/mm/yyyy)" << endl;
        string currentDate;
        cin >> currentDate;
        stringstream currentSSO(currentDate);
        
        int currentDay;
        currentSSO >> currentDay;
        currentSSO.ignore(); // Ignoring the / symbol
        
        int currentMonth;
        currentSSO >> currentMonth;
        currentSSO.ignore(); // Ignoring the / symbol
        
        int currentYear;
        currentSSO >> currentYear;
        
        cout << "What is your birthday? (dd/mm/yyyy)" << endl;
        string birthDate;
        cin >> birthDate;
        stringstream birthSSO(birthDate);
        
        int birthDay;
        birthSSO >> birthDay;
        birthSSO.ignore(); // Ignoring the / symbol
        
        int birthMonth;
        birthSSO >> birthMonth;
        birthSSO.ignore(); // Ignoring the / symbol
        
        int birthYear;
        birthSSO >> birthYear;
        
        int age = currentYear - birthYear;
        cout << "At the end of this year you will be " << age << " years old" << endl;
        
        int nextYear = currentYear;
        if(currentMonth > birthMonth) nextYear++;
        else if (currentMonth == birthMonth && currentDay > birthDay) nextYear++;
        else if (currentMonth == birthMonth && currentDay == birthDay) {
            nextYear++;
            cout << "Your Birthday is today." << endl;
        }
        
        stringstream nextSSO;
        nextSSO << setw(2) << setfill('0') << birthDay << setw(1) << "/"; 
        nextSSO << setw(2) << setfill('0') << birthMonth << setw(1) << "/"; 
        nextSSO << setw(4) << setfill('0') << nextYear; 
        
        string nextDate;
        nextSSO >> nextDate;
        
        cout << "Your next Birthday will be at " << nextDate;
        
    }
};

/*
int main(int argc, char** argv) {
    App1411::run();
    return 0;
}
*/