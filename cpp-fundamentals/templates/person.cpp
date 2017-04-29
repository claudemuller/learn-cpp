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

bool Person::operator<(Person &p) {
    return arbitraryNumber < p.arbitraryNumber;
}

bool Person::operator<(int i) {
    return arbitraryNumber < i;
}

bool operator<(int i, Person &p) {
    return i < p.getNumber();
}
