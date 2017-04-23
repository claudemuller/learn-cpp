#ifndef _PERSON_H
#define _PERSON_H

#include <iostream>
#include <string>

class Person {
private:
    std::string firstname;
    std::string lastname;
    int arbitraryNumber;

public:
    Person(std::string first, std::string last, int arbitrary);
    ~Person();
};

#endif //_PERSON_H
