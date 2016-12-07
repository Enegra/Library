//
// Created by agnie on 12/7/2016.
//
#include <iostream>
#include <algorithm>
#include "Customer.h"

int Customer::getReadCount() const {
    return readCount;
}

void Customer::setReadCount(int readCount) {
    Customer::readCount = readCount;
}

int Customer::getWatchedCount() const {
    return watchedCount;
}

void Customer::setWatchedCount(int watchedCount) {
    Customer::watchedCount = watchedCount;
}

void Customer::addToHistory(Position *position) {
    history.push_back(position);
}

void Customer::addToCurrent(Position *position) {
    history.push_back(position);
}

void Customer::removeFromCurrent(Position *position) {
    current.erase(std::remove(current.begin(), current.end(), &position), current.end());
}

void Customer::operator+(Position &position) {
    addToCurrent(&position);
}
