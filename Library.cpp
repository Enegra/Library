//
// Created by agnie on 12/7/2016.
//

#include <algorithm>
#include "Library.h"


void Library::loan(std::vector<Position*> &positions, Customer &customer) {
    if (positions.size()>4){
        std::cout<<"Over the limit! No positions will be loaned!"<<std::endl;
        return;
    }
    for (auto &position : positions) {
        customer+*position;
        available.erase(std::remove(available.begin(), available.end(), position), available.end());
    }
}

void Library::returnPosition(Position &position, Customer &customer) {
    available.push_back(&position);
    customer.removeFromCurrent(position);
    customer.addToHistory(position);

}

std::vector<Position *> Library::getAvailable() {
    return available;
}

void Library::addAvailable(Position &position) {
    available.push_back(&position);
}

