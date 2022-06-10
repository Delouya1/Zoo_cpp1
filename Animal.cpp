#include "Animal.h"

Animal::Animal() {
    setColor("GRAY");
    this->m_avgLifetime = 0;
    this->m_childCount = 0;
}

Animal::Animal(const char *color, int childs, float avgLifetime) {
    setColor(color);
    this->m_childCount = childs;
    this->m_avgLifetime = avgLifetime;
}
Animal::Animal(const Animal &other)
{
    setColor(other.m_color);
    this->m_avgLifetime = other.m_avgLifetime;
    this->m_childCount = other.m_childCount;
}

Animal::Animal(ifstream &in_file) {


}

Animal::~Animal() {
    delete this->m_color;
}

const char *Animal::GetColor() const {
    return this->m_color;
}

int Animal::GetChildCount() const {
    return this->m_childCount;
}

float Animal::GetLifetime() const {
    return this->m_avgLifetime;
}

void Animal::setColor(const char *color) {
    this->m_color = new char [strlen(color)+1];
    strcpy(this->m_color,color);
}




