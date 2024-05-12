#pragma once
#pragma warning(disable : 4996).
#ifndef BUILDING_H
#define BUILDING_H

#include "Flat.h"
using namespace std;
class Building {
private:
    vector<Flat> flats;
    int numFloors;
public:
    Building(int numFloors);
    Building(const Building& other);
    Building& operator=(const Building& other);
    ~Building();
    void addPerson(const Resident& person, int nFlat);
    void printResidents() const;
};

#endif //BUILDING_H
