//
// Created by agnie on 12/7/2016.
//

#include "Library.h"

void Library::addAvailable(Position *position) {
    available.push_back(position);
}

void Library::loan(std::vector<Position *> positions, Customer *customer) {
    for (auto &position : positions) {
        customer->addToCurrent(position);
    }
}

void Library::returnPosition(Position *position) {

}

