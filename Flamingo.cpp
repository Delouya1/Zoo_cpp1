#include "Flamingo.h"

Flamingo::Flamingo() : Birds() {
this->m_avgHeight = 0;
}

Flamingo::Flamingo(const char *color, int childs, float avgLifetime, float incubation, float avgHeight) : Birds(color,childs,avgLifetime,incubation){
this->m_avgHeight = avgHeight;
}

Flamingo::Flamingo(const Flamingo &other) : Birds(other) {
    this->m_avgHeight = other.m_avgHeight;
}

Flamingo::Flamingo(ifstream &in_file) : Birds(in_file) {

}

Flamingo::~Flamingo() = default;

float Flamingo::GetHeight() const {
    return this->m_avgHeight;
}




