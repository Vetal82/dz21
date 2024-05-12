#pragma once
#pragma warning(disable : 4996).
#ifndef FLAT_H
#define FLAT_H

#include "Resident.h"
using namespace std;
class Flat {
private:
    vector<Resident> residents;
public:
    Flat();
    Flat(const Flat& other);
    Flat& operator=(const Flat& other);
    ~Flat();
    void addPerson(const Resident& person);
    void printResidents() const;
};

#endif //FLAT_H
