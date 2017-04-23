#include "tweeter.h"

Tweeter::Tweeter(std::string first, std::string last, int arbitrary, std::string handle) :
    Person(first, last, arbitrary), twitterHandle(handle) {
    std::cout << "constructing tweeter " << twitterHandle << std::endl;
}

Tweeter::~Tweeter() {
    std::cout << "destructing tweeter " << twitterHandle << std::endl;
}

