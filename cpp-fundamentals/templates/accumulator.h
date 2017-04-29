#ifndef _ACCUMULATOR_H
#define _ACCUMULATOR_H

#include <string>
#include "person.h"

template <class T>
class Accumulator {
private:
    T total;
public:
    Accumulator(T start) : total(start) {};
    T operator+=(const T &t) { return total = total + t; };
    T getTotal() { return total; };
};

template <>
class Accumulator<Person> {
private:
    int total;
public:
    Accumulator(int start) : total(start) {};
    int operator+=(Person &t) { return total = total + t.getNumber(); };
    int getTotal() { return total; };
};

#endif //_ACCUMULATOR_H