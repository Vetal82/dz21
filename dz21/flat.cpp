#include "Flat.h"
using namespace std;
Flat::Flat() {
    residents = {};
}

Flat::Flat(const Flat& other) {
    residents = other.residents;
}

Flat& Flat::operator=(const Flat& other) {
    if (this != &other) {
        residents = other.residents;
    }
    return *this;
}

Flat::~Flat() {
}

void Flat::addPerson(const Resident& person) {
    residents.push_back(person);
}

void Flat::printResidents() const {
    for (const auto& resident : residents) {
        std::cout << resident.getName() << " ";
    }
    std::cout << std::endl;
}