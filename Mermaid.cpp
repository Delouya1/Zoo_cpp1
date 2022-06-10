#include "Mermaid.h"

Mermaid::Mermaid() : MammalsFish() {
this->m_firstName = nullptr;
this->m_lastName = nullptr;
}

Mermaid::Mermaid(const char *color, int childs, float avgLifetime, float preg, float milk, int fin, int gills,const char *firstName, const char *lastName)
:MammalsFish(color,childs,avgLifetime,preg,milk,fin,gills),Animal(color,childs,avgLifetime) {
    setFirstName(firstName);
    setLastName(lastName);
}

Mermaid::Mermaid(const Mermaid &other) : MammalsFish(other), Animal(other){
    setFirstName(other.m_firstName);
    setLastName(other.m_lastName);
}

Mermaid::Mermaid(ifstream &in_file) : MammalsFish(in_file) {

}

Mermaid::~Mermaid() = default;

const char *Mermaid::GetFirstName() const {
    return this->m_firstName;
}

const char *Mermaid::GetLastName() const {
    return this->m_lastName;
}

void Mermaid::setFirstName(const char *firstName) {
    this->m_firstName = new char[strlen(firstName)+1];
    strcpy(this->m_firstName,firstName);
}

void Mermaid::setLastName(const char *lastName) {
    this->m_lastName = new char[strlen(lastName)+1];
    strcpy(this->m_lastName,lastName);
}
