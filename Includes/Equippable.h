#pragma once
#include "Item.hpp"
#include <stdint.h>

#define UNUSED SIZE_MAX
#define HEAD 0
#define BODY 1
#define LEFTARM 2
#define RIGHTARM 3
#define LEFTLEG 4
#define RIGHTLEG 5
#define LEFTHAND 6 
#define RIGHTHAND 7

class Equippable : public Item
{
	protected:
		size_t location;
		double endurance;
		int level;
	public:
		Equippable(); // sets endurance to 100, lvl to 0
		Equippable(double wear, int lvl, size_t loc);

		Equippable(Equippable&& other) = default;
		Equippable& operator = (Equippable&& other) = default;
		Equippable& operator = (Equippable& other) = default;
		~Equippable() = default;

};

