#include <iostream>
#include "person.h"
#include "tweeter.h"
#include "status.h"

using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
    Person p1("Kate", "Gregory", 123);
    {
        Tweeter t1("Claude", "Mŭller", 456, "@something");
        cout << "t1: " << t1.getName() << " " << t1.getNumber() << endl;
    }
    cout << "after innermost block" << endl;
    p1.setNumber(200);
    cout << "p1: " << p1.getName() << " " << p1.getNumber() << endl;

    Status s = Pending;

    return 0;
}

