#include "Birds.h"


Birds::Birds() : Animal(){
this->m_incubationTime =0;
}
Birds::Birds(const char *color, int childs, float avgLifetime, float incubation) {
this->m_color = new char[strlen(color)+1];
    strcpy(this->m_color,color);
    this->m_childCount = childs;
    this->m_avgLifetime = avgLifetime;
    this->m_incubationTime = incubation;
}

Birds::Birds(const Birds &other) : Animal(other) {
this->m_incubationTime = other.m_incubationTime;

}

Birds::Birds(ifstream &in_file) : Animal(in_file) {

}

float Birds::GetIncubationTime() const {
    return this->m_incubationTime;
}



Birds::~Birds() = default;


