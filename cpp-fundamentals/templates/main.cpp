#include <iostream>
#include "accumulator.h"
#include "person.h"

using namespace std;

int main(int argc, char* argv[]) {
    Accumulator<int> integers(0);
    integers += 3;
    integers += 7;
    cout << integers.getTotal() << endl;

    Accumulator<string> strings("");
    strings += "Hello ";
    strings += "World";
    cout << strings.getTotal() << endl;

//    Person start("", "", 0);
    Accumulator<Person> people(0);
    Person p1("John", "Doe", 123);
    Person p2("Piet", "Snot", 456);
    people += p1;
    people += p2;
    cout << people.getTotal() << endl;

    return 0;
}