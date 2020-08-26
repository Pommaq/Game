//
// Created by Pommaq on 2020-08-22.
//

#include <crtdefs.h>
#include "Movement.hpp"
#include "Map.hpp"

bool Moveleft(size_t location) {
    if (!(location % WIDTH_SIZE)){
        // we can move this way without being outside of map
        return true;
    }
    else{
        return false;
    }
}


bool Moveright(size_t location) {
    if ((location + 1) < WIDTH_SIZE && !((location + 1) % WIDTH_SIZE)){
        return true;
    }
    else{
        return false;
    }
}

bool Moveup(size_t location) {
    if ((location - WIDTH_SIZE) > 0){
        return true;
    }
    else{
        return false;
    }
}

bool Movedown(size_t location){
    if ((location + WIDTH_SIZE) < MAP_SIZE){
        return true;
    }
    else{
        return false;
    }
}