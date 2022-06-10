#include "Mammals.h"

Mammals::Mammals() : Animal() {
this->m_milkLiters = 0;
this->m_pregnancyTime = 0;
}

Mammals::Mammals(const char *color, int childs, float avgLifetime, float preg, float milk) : Animal(color,childs,avgLifetime){
this->m_pregnancyTime = preg;
this->m_milkLiters = milk;
}

Mammals::Mammals(const Mammals &other) : Animal(other) {
this->m_milkLiters = other.m_milkLiters;
this->m_pregnancyTime = other.m_pregnancyTime;
}

Mammals::Mammals(ifstream &in_file) : Animal(in_file) {

}

Mammals::~Mammals() = default;

float Mammals::GetPregnanceTime() const {
    return this->m_pregnancyTime;
}

float Mammals::GetMilk() const {
    return this->m_milkLiters;
}


