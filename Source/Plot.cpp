#include "Plot.hpp"


Plot::Plot() {
    this->NPC = SIZE_MAX;
    this->Npcs = nullptr;
    this->NoNpcs = 0;
    this->traversable = false;
    this->structure = SIZE_MAX;
}

Plot::~Plot() {
    delete[] Npcs;
    return;
}

Plot::Plot(bool trav, size_t structureIndex, size_t npc) {
    this->Npcs = nullptr;
    this->NoNpcs = 0;
    this->NPC = npc;
    this->traversable = trav;
    this->structure = structureIndex;
}

Plot::Plot(Plot &other): NPC(other.NPC), traversable(other.traversable), structure(other.structure) {
    this->Npcs = new Organism[other.NoNpcs];
    for (size_t i = 0; i < other.NoNpcs; i++){
        this->Npcs[i] = other.Npcs[i];
    }
    return;
}

Plot::Plot(Plot &&other) noexcept: NPC(other.NPC), traversable(other.traversable), structure(other.structure){
    other.traversable = false;
    other.structure = SIZE_MAX;
    other.NPC = SIZE_MAX;
}

Plot &Plot::operator=(Plot &other) {
    this->traversable = other.traversable;
    this->structure = other.structure;
    this->NPC = other.NPC;
    return *this;
}

Plot &Plot::operator=(Plot &&other) noexcept {
    this->traversable = other.traversable;
    this->structure = other.structure;

    other.traversable = false;
    other.structure = SIZE_MAX;
    return *this;
}

bool Plot::checkTraversable() const {
    return traversable;
}
