#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    string name;
    float *cgpaptr;

private:
    long long CNIC;   // FIX: int → long long

public:

    // parameterized constructor
    Student(string name, float cgpa){
        this->name = name;
        cgpaptr = new float;
        *cgpaptr = cgpa;
    }

    // deep copy constructor
    Student (const Student &orgObj){
        name = orgObj.name;

        cgpaptr = new float; 
        *cgpaptr = *(orgObj.cgpaptr);   // FIX: deep copy
    }

    // destructor
    ~Student(){
        cout<<"Destructor called for " << name << endl;
        delete cgpaptr;
    }

    void getInfo(){
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaptr << endl;
        cout << "CNIC: " << CNIC << endl;
    }

    void setCNIC(long long c){
        CNIC = c;
    }

    long long getCNIC(){
        return CNIC;
    }
};

int main(){
    Student s1("Anas", 3.6);
    s1.setCNIC(343450239203);
    s1.getInfo();

    Student s2(s1);   // deep copy
    *(s2.cgpaptr) = 3.4;
    s2.name = "Talha";

    s2.getInfo();
    s1.getInfo();     // original not changed

    return 0;
}
