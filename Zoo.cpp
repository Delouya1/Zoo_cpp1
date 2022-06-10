#include "Zoo.h"

Zoo::Zoo() {
this->m_address = nullptr;
this->m_ticketPrice = 0;
this->m_openHours = nullptr;
this->m_numOfAnimals = 0;
this->m_name = nullptr;
this->m_closeHours = nullptr;
this->m_animals = nullptr;
}

Zoo::Zoo(const char *name, const char *address, float ticket, const char *open, const char *close)
{
    setName(name);
    setAddress(address);
    setTicketPrice(ticket);
    setOpenHours(open);
    setCloseHours(close);
    setNumOfAnimals(0);
    this->m_animals = nullptr;

}

Zoo::Zoo(ifstream &in_file) {

}

Zoo::~Zoo() {

}

const char *Zoo::GetName() const {
    return this->m_name;
}

const char *Zoo::GetAddress() const {
    return this->m_address;
}

float Zoo::GetTicketPrice() const {
    return this->m_ticketPrice;
}

const char *Zoo::GetOpenHour() const {
    return this->m_openHours;
}

const char *Zoo::GetCloseHour() const {
    return this->m_closeHours;
}

int Zoo::GetNumOfAnimals() const {
    return this->m_numOfAnimals;
}

Animal **Zoo::GetAnimals() const {
    return this->m_animals;
}

void Zoo::setName(const char *name) {
this->m_name = new char[strlen(name)+1];
    strcpy(this->m_name,name);
}

void Zoo::setAddress(const char *address) {
    this->m_address = new char[strlen(address)+1];
    strcpy(this->m_address,address);
}

void Zoo::setTicketPrice(float price) {
this->m_ticketPrice = price;
}

void Zoo::setOpenHours(const char *openHours) {
    this->m_openHours = new char[strlen(openHours)+1];
    strcpy(this->m_openHours,openHours);
}

void Zoo::setCloseHours(const char *closeHours) {
    this->m_closeHours = new char[strlen(closeHours)+1];
    strcpy(this->m_closeHours,closeHours);
}

void Zoo::setNumOfAnimals(int numOfAnimals) {
this->m_numOfAnimals = numOfAnimals;
}


void Zoo::AddAnimal(Animal *an){

Animal** tmp = new Animal*[this->m_numOfAnimals+1];
    for (int i = 0; i <this->m_numOfAnimals ; ++i)
    {
        tmp[i] = this->m_animals[i];
    }
    Flamingo* tmp1 = dynamic_cast<Flamingo*>(an);
    if(tmp1)
    {
        tmp[this->m_numOfAnimals] = new Flamingo(*tmp1);
    }
    GoldFish* tmp2 = dynamic_cast<GoldFish*>(an);
    if(tmp2)
    {
        tmp[this->m_numOfAnimals] = new GoldFish(*tmp2);
    }

    Horse* tmp3 = dynamic_cast<Horse*>(an);
    if(tmp3)
    {
        tmp[this->m_numOfAnimals] = new Horse(*tmp3);
    }
    Mermaid* tmp4 = dynamic_cast<Mermaid*>(an);
    if(tmp4)
    {
        tmp[this->m_numOfAnimals] = new Mermaid(*tmp4);
    }

    this->m_numOfAnimals++;
    this->m_animals = tmp;
}

Zoo &Zoo::operator+(Animal *an) {
    return *this;
}

Zoo Zoo::operator+(const Zoo &other) const {
    return Zoo();
}

void Zoo::Save(ofstream &ofs) const {

}

void Zoo::Load(ifstream &ifs) {

}

void Zoo::SaveBin(ofstream &ofs) const {

}
