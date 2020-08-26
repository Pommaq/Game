//
// Created by Pommaq on 2020-08-22.
//

#include "Map.hpp"
#include "Plot.hpp"
#include <iostream>

Map::Map(size_t mapsize) {
    Plots = new Plot[mapsize];
    size = mapsize;
    this->GenPlots();
}

Map::~Map() {
    delete[] Plots;
}

Map &Map::operator=(Map &other) {
    if (this != &other){
        this->size = other.size;
        this->Plots = new Plot[this->size];

        for (size_t i = 0; i < size; i++){
            this->Plots[i] = other.Plots[i];
        }
    }
    return *this;
}

Map &Map::operator=(Map &&other) noexcept{
    size = other.size;
    Plots = other.Plots;

    other.size = 0;
    other.Plots = nullptr;

    return *this;
}

Map::Map(Map &other): size(other.size){

    this->Plots = new Plot[size];

    for (size_t i = 0; i < this->size; i++){
        Plots[i] = other.Plots[i];
    }

}

Map::Map(Map &&other) noexcept: size(other.size), Plots(other.Plots) {
    other.size = 0;
    other.Plots = nullptr;
}

void Map::GenPlots() {
    for (size_t i = 0; i < size; i++){
        Plots[i] = Plot(false, SIZE_MAX, SIZE_MAX);
    }
}


