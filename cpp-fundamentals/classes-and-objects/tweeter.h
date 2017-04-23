#ifndef _TWEETER_H
#define _TWEETER_H

#include <iostream>
#include <string>
#include "person.h"

class Tweeter : public Person {
private:
    std::string twitterHandle;
public:
    Tweeter(std::string first, std::string last, int arbitrary, std::string handle);
    ~Tweeter();
};

#endif //_TWEETER_H
