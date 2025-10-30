#include <iostream>
#include <string>
using namespace std;

// 💡 Class: A "blueprint" that defines how an object behaves or what data it holds.
// Example: 'Student' is a class, and 'studen1' is one object of that class.

class Student {
    // 💡 Encapsulation:
    // It means "wrapping data and functions together in one unit (class)".
    // We use 'public' and 'private' access modifiers to control who can see or modify data.
private:  // private = secure data, not directly accessible
    string password;

public:   // public = accessible from main()
    string name;
    string ag_number;
    string degree;
    float CGPA;

    // This function sets and displays the password
    void getPassword() {
        password = "ertew42";
        cout << "Password is: " << password << endl;
    }
};

int main() {
    Student studen1;
    // Accessing public data members (we can modify and read these)
    studen1.name = "Ahmed";
    studen1.ag_number = "6032-ag-2024";
    studen1.degree = "Software Engineering";
    studen1.CGPA = 3.5;
    // Displaying student details
    cout << "Student Name: " << studen1.name << endl;
    cout << "AG Number: " << studen1.ag_number << endl;
    cout << "Degree: " << studen1.degree << endl;
    cout << "CGPA: " << studen1.CGPA << endl;
    
    Student student2;

    cout << "Enter student name: ";
    cin >> student2.name;

    cout << "Enter AG number: ";
    cin >> student2.ag_number;

    cout << "Enter degree: ";
    cin >> student2.degree;

    cout << "Enter CGPA: ";
    cin >> student2.CGPA;

    cout << "\nStudent Information:\n";
    cout << "Name: " << student2.name << endl;
    cout << "AG Number: " << student2.ag_number << endl;
    cout << "Degree: " << student2.degree << endl;
    cout << "CGPA: " << student2.CGPA << endl;
    // Accessing the private variable through a public function
    studen1.getPassword();

    return 0;
}
