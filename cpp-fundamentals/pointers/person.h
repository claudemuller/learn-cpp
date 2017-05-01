#include <string>

#ifndef _PERSON_H
#define _PERSON_H

#include "resource.h"
#include <iostream>
#include <memory>

class Person {
private:
    std::string firstname;
    std::string lastname;
    int arbitraryNumber;
//    Resource* pResource;
    std::shared_ptr<Resource> pResource; // Smart pointer

public:
    Person(std::string first, std::string last, int arbitrary);
    //Person(const Person& p); // "copy constructor" isn't needed with smart pointers
    ~Person();
    std::string getName();
    int getNumber() { return arbitraryNumber; }
    void setNumber(int number) { arbitraryNumber = number; }
    void setFirstName(std::string name) { firstname = name; };
    bool operator<(Person& p);
    bool operator<(int i);
    // Give access to class but does not make it a member
    friend bool operator<(int i, Person& p);
    //Person& operator=(const Person& p); // operator= isn't needed with smart pointers
    void addResource();
    std::string getResourceName() const { return pResource->getName(); };
};

bool operator<(int i, Person& p);

#endif //_PERSON_H
