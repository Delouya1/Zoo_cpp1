#include "Fish.h"

Fish::Fish() : Animal() {
this->m_finCount = 0;
this->m_gillsCount = 0;
}

Fish::Fish(const char *color, int childs, float avgLifetime, int fin, int gills) : Animal(color,childs,avgLifetime){
this->m_finCount = fin;
this->m_gillsCount = gills;
}

Fish::Fish(const Fish &other) : Animal(other){
this->m_gillsCount = other.m_gillsCount;
this->m_finCount = other.m_finCount;
}

Fish::Fish(ifstream &in_file) : Animal(in_file) {

}

Fish::~Fish() = default;

int Fish::GetFinCount() const  {
    return this->m_finCount;
}

int Fish::GetGillsCount() const {
    return this->m_gillsCount;
}


