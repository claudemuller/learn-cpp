#include "person.h"

using namespace std;

Person::Person(string first, string last, int arbitrary) :
    firstname(first), lastname(last), arbitraryNumber(arbitrary) {
    cout << "constructing " << firstname << " " << lastname << endl;
}

Person::~Person() {
    cout << "destructing " << firstname << " " << lastname << endl;
}
