//
// Created by agnie on 12/7/2016.
//

#include "Position.h"
#include "Customer.h"

Position::Position() {
}

Position::Position(std::string name) {
    this->name = name;
}

std::string Position::getName() {
    return name;
}

void Position::setName(std::string newName) {
    name = newName;
}

std::string Position::getType() {
    return "undefined";
}

