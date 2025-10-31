🧑‍💻 Student Class (C++ Project)
📘 About This Project

This C++ program explains the basic concepts of Object-Oriented Programming (OOP).
It uses a Student class to show how objects, encapsulation, and constructors work in a simple and easy way.

🧩 What is a Class?

A class is like a blueprint for creating objects.
It defines what data (variables) and actions (functions) an object will have.

Example:
If Student is a class, it can have data like name, degree, and CGPA, and functions like showDetails().

🧠 What is an Object?

An object is a real example (instance) of a class.
If Student is a class, then student1 and student2 are two real students (objects).

Example in code:

Student student1;
Student student2("Ali", "6032-ag-2024", "Software Engineering", 3.8);

🔒 What is Encapsulation?

Encapsulation means hiding important data from direct access and only allowing it through functions.

In this program:

Data like password is private → cannot be accessed directly.

Other data like name, degree, and CGPA are public → can be accessed easily.

Access Modifiers:

public: — can be used anywhere in the program.

private: — only used inside the class for security.

⚙️ What are Constructors?

Constructors are special functions that run automatically when an object is created.
They are used to set values when the object starts.

Types of Constructors:

Default Constructor
Runs automatically and can print a message or set default values.

Student() {
    cout << "Student object created!" << endl;
}


Parameterized Constructor
Takes arguments (data) when creating an object and assigns them automatically.

Student(string n, string ag, string deg, float cg) {
    name = n;
    ag_number = ag;
    degree = deg;
    CGPA = cg;
}

🧾 Example Output
Student object created!
Enter Student Name: Ahmed
Enter AG Number: 6032-ag-2024
Enter Degree: Software Engineering
Enter CGPA: 3.5

Student Name: Ahmed
AG Number: 6032-ag-2024
Degree: Software Engineering
CGPA: 3.5
Password: abc123

🛠️ How to Run
g++ student_class_summary.cpp -o student
./student

🏁 Summary

This program helps you understand:

What a class and object are

How encapsulation protects data

How constructors automatically set values when creating objects
