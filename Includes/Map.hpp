//
// Created by Pommaq on 2020-08-22.
//

#pragma once

#include <cstddef>
#include "Plot.hpp"

#define WIDTH_SIZE 10
#define HEIGHT_SIZE 10
#define MAP_SIZE (WIDTH_SIZE * HEIGHT_SIZE)

class Map{
public:
    Map() = delete;
    Map(size_t mapsize);
    ~Map();
    Map& operator=(Map& other);
    Map& operator=(Map&& other) noexcept;
    Map(Map& other);
    Map(Map&& other) noexcept;
    void GenPlots();

    Plot* Plots;
    size_t size;

};