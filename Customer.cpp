//
// Created by agnie on 12/7/2016.
//
#include <iostream>
#include <algorithm>
#include "Customer.h"

int Customer::getReadCount() {
    return readCount;
}

void Customer::setReadCount(int readCount) {
    Customer::readCount = readCount;
}

int Customer::getWatchedCount() {
    return watchedCount;
}

void Customer::setWatchedCount(int watchedCount) {
    Customer::watchedCount = watchedCount;
}

void Customer::addToHistory(Position &position) {
    history.push_back(&position);
    if (position.getType()=="movie"){
        watchedCount++;
    } else if (position.getType()=="book"){
        readCount++;
    }
    // once something goes to history, it is added to read or watched counter
}

void Customer::addToCurrent(Position &position) {
    current.push_back(&position);
}

void Customer::removeFromCurrent(Position &position) {
    current.erase(std::remove(current.begin(), current.end(), &position), current.end());
}

void Customer::operator+(Position &position) {
    addToCurrent(position);
}
