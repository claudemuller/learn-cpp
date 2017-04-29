#include <iostream>
#include "accumulator.h"

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

    return 0;
}