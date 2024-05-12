#include "Resident.h"
using namespace std;
Resident::Resident(const char* n) {
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}

Resident::Resident(const Resident& other) {
    name = nullptr;
    *this = other;
}

Resident& Resident::operator=(const Resident& other) {
    if (this != &other) {
        delete[] name;
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
    }
    return *this;
}

Resident::~Resident() {
    delete[] name;
}

const char* Resident::getName() const {
    return name;
}