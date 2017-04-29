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
    std::string getName();
    int getNumber() { return arbitraryNumber; }
    void setNumber(int number) { arbitraryNumber = number; }
    bool operator<(Person &p);
    bool operator<(int i);
    // Give access to class but does not make it a member
    friend bool operator<(int i, Person &p);
};

bool operator<(int i, Person &p);

#endif //_PERSON_H
