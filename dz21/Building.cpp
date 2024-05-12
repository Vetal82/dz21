#include "Building.h"
using namespace std;

Building::Building(int numFloors) {
    setlocale(LC_ALL, "ukr");
    this->numFloors = numFloors;
    for (int i = 0; i < numFloors * 4; i++) {
        flats.push_back(Flat());
    }
}

Building::Building(const Building& other) {
    flats = other.flats;
    numFloors = other.numFloors;
}

Building& Building::operator=(const Building& other) {
    if (this != &other) {
        flats = other.flats;
        numFloors = other.numFloors;
    }
    return *this;
}

Building::~Building() {
}

void Building::addPerson(const Resident& person, int nFlat) {
    setlocale(LC_ALL, "ukr");
    if (nFlat >= 0 && nFlat < numFloors * 4) {
        flats[nFlat].addPerson(person);
    }
    else {
        cout << "Такої квартири не існує" << endl;
    }
}

void Building::printResidents() const {
    for (const auto& flat : flats) {
        flat.printResidents();
    }
}