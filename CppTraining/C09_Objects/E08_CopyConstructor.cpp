#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class App0908 {
public:
    class Task {
    private:
        string description;
        string category;
        string date;


    public:
        string getDescription() { return description; }
        void setDescription(string value) { description = value; }

        string getCategory() { return category; }
        void setCategory(string value) { category = value; }

        string getDate() { return date; }
        void setDate(string value) { date = value; }

        void display() {
            cout << "----------------------------" << endl;
            cout << "Description : " << getDescription() << endl;
            cout << "Category    : " << getCategory() << endl;
            cout << "Date        : " << getDate() << endl;
            cout << "----------------------------" << endl;
        }

        Task(string description = "No Description", string category = "No Category", string date = "No Date") {
            setDescription(description);
            setCategory(category);
            setDate(date);
        }

        // Clone Constructor
        Task(Task *task) {
            setDescription(task->getDescription());
            setCategory(task->getCategory());
            setDate(task->getDate());
        }
        
        // Copy Constructor
        Task(Task &task) {
            setDescription(task.getDescription());
            setCategory(task.getCategory());
            setDate(task.getDate());
        }
    };

    static void run() {
        Task *task1 = new Task("Study English", "Education", "01/03/2019");
        task1->display();
        cout << "Address : " << task1 << endl << endl;

        Task *task2 = new Task("Study Greek", "Education");
        task2->display();
        cout << "Address : " << task2 << endl << endl;

        Task *task3 = new Task();
        task3->setDescription("Do something");
        task3->display();
        cout << "Address : " << task3 << endl << endl;

        Task *task4 = new Task("Clean the House", "Homework", "15/04/2019");
        task4->display();
        cout << "Address : " << task4 << endl << endl;

        Task *task5 = new Task(task4->getDescription(), task4->getCategory(), task4->getDate());
        task5->display();
        cout << "Address : " << task5 << endl << endl;

        Task *task6 = new Task(task4);
        task6->display();
        cout << "Address : " << task6 << endl << endl;
        
        Task task7("Meeting", "Work", "23/05/2019");
        task7.display();
        cout << "Address : " << &task7 << endl << endl;

        Task task8(&task7);
        task8.display();
        cout << "Address : " << &task8 << endl << endl;

        Task task9 = task7;
        task9.display();
        cout << "Address : " << &task9 << endl << endl;
        
        cout << endl << "###############################" << endl << endl;
        
        task4->setCategory("Personal");
        task4->display();
        task5->display();
        task6->display();
                
        cout << endl << "###############################" << endl << endl;
        
        task7.setCategory("Professional");
        task7.display();
        task8.display();
        task9.display();
        
    }
};

/*
int main(int argc, char** argv) {
    App0908::run();
    return 0;
}
*/