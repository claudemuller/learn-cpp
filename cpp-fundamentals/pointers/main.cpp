#include <iostream>
#include "person.h"

using namespace std;

int main(int argc, char* argv[]) {
    int a = 3;
    cout << "a is " << a << endl;
    int* pA = &a;
    *pA = 4;
    cout << "a is " << a << endl;
    int b = 100;
    pA = &b;
    (*pA)++;
    cout << "a " << a << ", *pA " << *pA << endl;

    Person john("John", "Doe", 123);
    Person* pJohn = &john;
    (*pJohn).setNumber(456); //pJohn->setNumber(456);
    cout << "John: " << john.getName() << " " << john.getNumber() << endl;
    cout << "pJohn: " << pJohn->getName() << " " << pJohn->getNumber() << endl;

    // References
    int& rA = a; // have to initialise reference upon declaration
    rA = 5;
    cout << "a is " << a << endl;

    Person& rJohn = john;
    rJohn.setNumber(678);
    cout << "rJohn: " << rJohn.getName() << " " << rJohn.getNumber() << endl;

    // Const pointer that can't point to something else
    int* const cpI = &a; // so cpI = &b won't work
    // Const pointer that stops target from being changed
    const int* cpJ = &a; // so *cpJ = 4 won't work

    return 0;
}
