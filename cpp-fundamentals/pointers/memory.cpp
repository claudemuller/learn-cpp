#include <string>
#include "resource.h"
#include "person.h"

using namespace std;

int main(int argc, char* argv[]) {
    { // its own scope
        // On the stack
        Resource localResource("local");
        string localString = localResource.getName();
    } // goes out of scope

    // On the heap/free store
    Resource* pResource = new Resource("created with new");
    string newString = pResource->getName();

    // Create copy of pResource
    Resource* p2 = pResource;
    string string2 = p2->getName();

    // Delete the stuff pointed to by pResource in the memory
//    delete pResource;
    string string3 = pResource->getName();

    // Null out the pointer to not point to the "new Resource" chunk in memory
    pResource = nullptr; // delete on nullptr does not error
    delete pResource;
    delete p2;

    Person john("John", "Snow", 345);
    john.addResource();
    john.setFirstName("Piet");
    john.addResource();
    Person john2 = john;

    return 0;
}

