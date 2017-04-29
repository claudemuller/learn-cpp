#ifndef _ACCUMULATOR_H
#define _ACCUMULATOR_H

template <class T>
class Accumulator {
private:
    T total;
public:
    Accumulator(T start) : total(start) {};
    T operator+=(const T &t) { return total = total + t; };
    T getTotal() { return total; };
};

#endif //_ACCUMULATOR_H