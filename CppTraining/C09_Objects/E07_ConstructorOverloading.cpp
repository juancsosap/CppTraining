#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0907 {
public:
    class User {
    private:
        string nick;
        string pass;
        bool enable;

        void createUser(string nick, string pass, bool enable) {
            User::nick = nick;
            User::pass = pass;
            User::enable = enable;
        }

    public:
        bool authenticate(string nick, string pass) {
            bool validNick = (User::nick == nick);
            bool validPass = (User::pass == pass);
            return (validNick && validPass && enable); 
        }

        string getNick() { return nick; }

        void enableUser() { enable = true; }
        void disableUser() { enable = false; }

        User(string nick, string pass, bool enable) { createUser(nick, pass, enable); }    
        User(string nick, string pass) { createUser(nick, pass, false); }
        User(string nick) { createUser(nick, "", false); }
    };

    static void run() {
        bool ticket;
        User *user;

        user = new User("admin", "@dm1n", true);
        ticket = user->authenticate("admin", "@dm1n");
        cout << "User " << user->getNick() << " could" << (ticket ? " " : " not ") << "enter" << endl;

        user = new User("opera", "12345");
        ticket = user->authenticate("opera", "12345");
        cout << "User " << user->getNick() << " could" << (ticket ? " " : " not ") << "enter" << endl;

        user->enableUser();
        ticket = user->authenticate("opera", "12345");
        cout << "User " << user->getNick() << " could" << (ticket ? " " : " not ") << "enter" << endl;

        user = new User("nocer");
        ticket = user->authenticate("nocer", "");
        cout << "User " << user->getNick() << " could" << (ticket ? " " : " not ") << "enter" << endl;

        user->enableUser();
        ticket = user->authenticate("nocer", "");
        cout << "User " << user->getNick() << " could" << (ticket ? " " : " not ") << "enter" << endl;
    }
};

/*
int main(int argc, char** argv) {
    App0907::run();
    return 0;
}
*/