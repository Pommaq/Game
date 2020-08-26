//
// Created by Pommaq on 2020-08-22.
//


#pragma once
#include <iostream>
#include "Organism.h"
/*
Kartan byggs p� detta s�tt: FET ARRAY
S�g att en rad �r 50 plots l�ng, d� f�r man ju n�sta rad om man tar nuvarande + 50. Den bredvid om +1, bakom om -1. Detta blir l�ttare �n 2d arrayer.
Inspirerat av heap typ
*/

class Plot { // Note that the constructor DOES NOT generate content.
private:
    bool traversable;
    size_t structure; // Represents an index in a prebuilt array. SIZE_MAX if none
    size_t NPC; // Represents creature index in an array, SIZE_MAX if none
    Organism* Npcs;
    size_t NoNpcs;
public:
    bool checkTraversable() const;
    Plot();
    ~Plot();
    Plot(bool trav, size_t structureIndex, size_t npc);
    Plot(Plot& other);
    Plot(Plot&& other) noexcept;

    Plot& operator=(Plot& other);
    Plot& operator=(Plot&& other) noexcept;
};
