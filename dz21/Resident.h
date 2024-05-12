#pragma once
#pragma warning(disable : 4996).
#ifndef RESIDENT_H
#define RESIDENT_H

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;



class Resident {
private:
    char* name;
public:
    Resident(const char* n);
    Resident(const Resident& other);
    Resident& operator=(const Resident& other);
    ~Resident();
    const char* getName() const;
};

#endif //RESIDENT_H
