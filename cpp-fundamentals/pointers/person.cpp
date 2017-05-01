#include "person.h"

using namespace std;

Person::Person(string first, string last, int arbitrary) :
    firstname(first), lastname(last), arbitraryNumber(arbitrary)
        // shared_prt initialises this
        // , pResource(nullptr)
{
    cout << "constructing " << getName() << endl;
}

// Copy constructor isn't needed with smart pointers
//Person::Person(const Person& p) : firstname(p.firstname), lastname(p.lastname),
//                                  arbitraryNumber(p.arbitraryNumber), pResource(new Resource(p.pResource->getName())) {
//
//}

Person::~Person() {
    cout << "destructing " << getName() << endl;
    // Not needed with smart pointers
    delete pResource;
}

string Person::getName() {
    return firstname + " " + lastname;
}

bool Person::operator<(Person& p) {
    return arbitraryNumber < p.arbitraryNumber;
}

bool Person::operator<(int i) {
    return arbitraryNumber < i;
}

void Person::addResource() {
    //delete pResource; // Not needed with smart pointers
    pResource.reset(); // shared_ptr thing instead of above
    //pResource = new Resource("Resource for " + getName()); // Not needed with smart pointers
    pResource = std::make_shared<Resource>("Resource for " + getName());
}

// operator= isn't needed with smart pointers
//Person& Person::operator=(const Person& p) {
//    firstname = p.firstname;
//    lastname = p.lastname;
//    arbitraryNumber = p.arbitraryNumber;
//    delete pResource;
//    pResource = new Resource(p.pResource->getName());
//
//    // operator= overload always returns *this
//    return *this;
//}

bool operator<(int i, Person &p) {
    return i < p.getNumber();
}
