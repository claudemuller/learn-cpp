#ifndef _RESOURCE_H
#define _RESOURCE_H

#include <string>

class Resource {
private:
    std::string name;
public:
    Resource(std::string n);
    ~Resource();
    std::string getName() const { return name; }
};


#endif //_RESOURCE_H
