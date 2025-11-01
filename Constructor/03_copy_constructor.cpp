#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Copy constructor
    Student(const Student &obj) {
        name = obj.name;
        age = obj.age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Ali", 20);     // Normal constructor called
    Student s2 = s1;           // Copy constructor called

    cout << "Original Object: ";
    s1.display();

    cout << "Copied Object: ";
    s2.display();

    return 0;
}
