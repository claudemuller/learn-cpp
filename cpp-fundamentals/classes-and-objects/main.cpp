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
    }
    cout << "after innermost block" << endl;

    Status s = Pending;

    return 0;
}

