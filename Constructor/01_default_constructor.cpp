// Default Constructor: This constructor has no parameters. 
// If no constructors are explicitly defined in a class, the compiler automatically generates a default constructor
// that initializes member variables to their default values (e.g., 0 for integral types, nullptr for pointers).
#include <iostream>
#include <string>
using namespace std;

class Account{
    private:
    float balance = 105035.89;
    public:
    string Account_HolderName;
    string Account_Number;
    string Bank_Name;
    // default constructor
    Account(){
        cout << "I am account Manager"<<endl;
    }
    // function defination
    void showBalance(){
        cout << "The Account Balance is: "<< balance << endl;
    }
};
int main(){
    Account customer1;
    customer1.Account_HolderName = "Muhammad Anas";
    customer1.Account_Number = "PWD33102343245";
    customer1.Bank_Name = "UBL";

    cout << "The Account Holder name is: " << customer1.Account_HolderName <<endl;
    cout << "The Account number is: "<< customer1.Account_Number <<endl;
    cout << "The Bank name is: "<< customer1.Bank_Name <<endl;
    // function calling
    customer1.showBalance();
    return 0 ;
}