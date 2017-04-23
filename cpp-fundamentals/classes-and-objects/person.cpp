#include "person.h"

using namespace std;

Person::Person(string first, string last, int arbitrary) :
    firstname(first), lastname(last), arbitraryNumber(arbitrary) {
    cout << "constructing " << getName() << endl;
}

Person::~Person() {
    cout << "destructing " << getName() << endl;
}

string Person::getName() {
    return firstname + " " + lastname;
}

