#pragma once
#include <string>

class Organism
{
private:
	double hp;
	std::string name;
	size_t id; // Used for keeping track of race
public:
	double gethp() const;
	Organism();
	Organism(std::string& newname, double health, size_t id);
	Organism(Organism& other);
	~Organism();
	Organism(std::string&& newName, double health, size_t id);
	Organism(Organism&& other) noexcept;
	Organism& operator=(Organism&& other) noexcept;
	Organism& operator=(Organism& other);

};

