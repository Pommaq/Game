//
// Created by Pommaq on 2020-08-22.
//
#include <iostream>
#include <string>
#include "GameEngine.h"

const char menu() {

    std::cout << "Welcome to the game.\n1: Start\n2: Exit" << std::endl;

    std::string choice;
    bool success = false;

    while (!success){
        std::cin >> choice;
        switch(choice[0]) {
            case '1':
                success = true;
                break;
            case '2':
                success = true;
                break;
            default:
                break;
        }
    }
    return choice[0];
}

void traverse() {

}

Map &&genMap(size_t size) {

    Map target(size);

    return std::move(target);
}

