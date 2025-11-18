// #include <iostream>
// using namespace std;
// // call by value
// void changeValue(int x){
//     x = 100;     
// }
// // call by reference
// void changeReference(int &x){
//     x = 100;    
// }

// int main(){
//     int a = 5;
//     int *ptr = &a;
//     int **q = &ptr;

//     cout << *ptr << endl;    // prints 5
//     cout << **q  << endl;    // prints 5

//     cout << ptr << endl;     // prints memory address of a
//     cout << q   << endl;     // prints memory address of ptr
//     int c = 5;
//     changeReference(c);

//     cout << "Value of a after function (call by reference): " << c << endl;
//     changeValue(a);

//     cout << "Value of a after function (call by value): " << a << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// void swapValue(int x, int y){
//     int temp = x;
//     x = y;
//     y = temp;
//     cout << "Inside swapValue function (call by value): x=" << x << " y=" << y << endl;
// }

// int main(){
//     int a = 10;
//     int b = 20;

//     swapValue(a, b);

//     cout << "After call by value: a=" << a << " b=" << b << endl;

//     return 0;
// }
#include <iostream>
using namespace std;

void swapReference(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside swapReference function (call by reference): x=" << x << " y=" << y << endl;
}

int main(){
    int a = 10;
    int b = 20;

    swapReference(a, b);

    cout << "After call by reference: a=" << a << " b=" << b << endl;

    return 0;
}
