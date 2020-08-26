#include "Organism.h"

double Organism::gethp() const {
	return this->hp;
}

Organism::Organism(std::string& newname, double health, size_t id){
	this->name = newname;
	this->hp = health;
	this->id = id;
}

Organism::Organism(Organism& other){
	this->hp = other.hp;
	this->name = other.name;
	this->id = other.id;
}


Organism::~Organism() {

}

Organism::Organism(Organism&& other) noexcept : name(std::move(other.name)), hp(other.hp), id(other.id) {
	other.name = "";
	other.hp = 0;
	other.id = 0;

}


Organism::Organism(std::string&& newName, double health, size_t id) {
	this->name = newName;
	newName = "";
	this->hp = health;
	this->id = id;
}


Organism& Organism::operator=(Organism&& other) noexcept{
	this->name = std::move(other.name);
	this->id = other.id;
	this->hp = other.hp;
	other.hp = 0;
	other.name = "";
	other.id = SIZE_MAX;
	return *this;
}

Organism::Organism() {
    this->name = "";
    this->hp = 0;
    this->id = 0;
}

Organism &Organism::operator=(Organism &other) {
    this->name = other.name;
    this->hp = other.hp;
    this->id = other.id;
    return *this;
}
