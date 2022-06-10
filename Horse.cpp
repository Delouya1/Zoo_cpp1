#include "Horse.h"

Horse::Horse() : Mammals() {
this->m_type = nullptr;
}

Horse::Horse(const char *color, int childs, float avgLifetime, float preg, float milk, const char *type) : Mammals(color,childs,avgLifetime,preg,milk){
    setType(type);
}

Horse::Horse(const Horse &other) : Mammals(other){
    setType(other.m_type);
}


Horse::Horse(ifstream &in_file) : Mammals(in_file) {

}

Horse::~Horse() = default;

const char *Horse::GetType() const {
    return this->m_type;
}

void Horse::setType(const char *type) {
    this->m_type = new char[strlen(type)+1];
    strcpy(this->m_type,type);
}

