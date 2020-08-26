#include "Equippable.h"


Equippable::Equippable(){
	this->endurance = 100;
	this->level = 0;
	this->location = UNUSED;
}


Equippable::Equippable(double wear, int lvl, size_t loc) {
	this->endurance = wear;
	this->level = lvl;
	this->location = loc;
}