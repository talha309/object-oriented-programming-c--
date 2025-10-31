#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    float salary = 150000;  // default salary

public:
    string name;
    string dept;
    string subject;
    string position;

    // parameterized constructor with 4 parameters
    Teacher(string name, string dept, string subject, string position) {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->position = position;
    }

    // function definition
    float showSalary(float s) {
        salary = s;
        return salary;
    }

    // function to display teacher information
    void showInfo() {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
        cout << "Position: " << position << endl;
    }
};

int main() {
    Teacher t1("Ahmed", "Computer Science", "Software", "Senior");

    t1.showSalary(180000);
    t1.showInfo();

    return 0;
}
