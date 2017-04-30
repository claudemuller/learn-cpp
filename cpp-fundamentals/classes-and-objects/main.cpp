#include <iostream>
#include "person.h"
#include "tweeter.h"
#include "status.h"

using std::cout;
using std::endl;

template <class T>
T max(T &t1, T &t2) {
    return t1 < t2 ? t2 : t1;
}

int main(int argc, char* argv[]) {
    Person p1("Kate", "Gregory", 123);
    Person p2("Kate", "Gregory", 123);
    {
        Tweeter t1("Claude", "Mŭller", 456, "@something");
        cout << "t1: " << t1.getName() << " " << t1.getNumber() << endl;
    }
    cout << "after innermost block" << endl;
    p1.setNumber(200);
    cout << "p1: " << p1.getName() << " " << p1.getNumber() << endl;

    Status s = Pending;

    // Comparison overloading
    // Class operator < overloading
    cout << (p1 < p2) << endl;
    cout << (p1 < 300) << endl;
    // Free function operator < overloading
    cout << (300 < p1) << endl;

    int i = 1,
        j = 2;
    max(i, j);
    double k = 22,
        l = 20.3;
    max<double>(k, l);

    return 0;
}

