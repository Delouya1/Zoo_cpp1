#include "GoldFish.h"

GoldFish::GoldFish() : MammalsFish() {
this->m_avgLength = 0;
this->m_avgWeight = 0;
}

GoldFish::GoldFish(const char *color, int childs, float avgLifetime, float preg, float milk, int fin, int gills,
                   float avgW, float avgL) : Animal(color,childs,avgLifetime), MammalsFish(color,childs,avgLifetime,preg,milk,fin, gills) {
this->m_avgWeight = avgW;
this->m_avgLength = avgL;
}
GoldFish::GoldFish(const GoldFish &other) : Animal(other), MammalsFish(other) {
    this->m_avgWeight = other.m_avgWeight;
    this->m_avgLength = other.m_avgLength;
}


GoldFish::GoldFish(ifstream &in_file) : MammalsFish(in_file) {

}

GoldFish::~GoldFish() = default;

float GoldFish::GetWeight() const {
    return this->m_avgWeight;
}

float GoldFish::GetLength() const {
    return this->m_avgLength;
}

