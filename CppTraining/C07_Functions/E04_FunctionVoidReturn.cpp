#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0704 {
public:
    static void println(string message) {
        cout << message << endl;
    }

    static void print(string message) {
        cout << message;
    }

    static void printLine() {
        println("--------------------");
    }

    static int requestInt(string message) {
        int number;
        do {
            print(message);
            cin >> number;
        } while(number < 0);
        return number;
    }

    static string requestString(string message) {
        string word;
        print(message);
        cin >> word;
        return word;
    }

    static void authorize(int age) {
        if(age < 18) {
            println("Restricted access to minors !!!");
            return;
        }
        println("Authorized Access to adults !!!");
    }

    static void run() {
        println("   Access Control   ");
        printLine();

        string firstname = requestString("Firstname : ");
        string surname = requestString("Surname   : ");
        int age = requestInt("Age       : ");

        printLine();

        authorize(age);
    }
};

/*
int main(int argc, char** argv) {
    App0704::run();
    return 0;
}
*/