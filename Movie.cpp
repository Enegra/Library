//
// Created by agnie on 12/7/2016.
//

#include "Movie.h"

Movie::Movie() {
}

Movie::Movie(int length) {
    movieLength = length;
}

int Movie::getLength() {
    return movieLength;
}

void Movie::setLength(int length) {
    movieLength = length;
}

Movie::Movie(std::string name) : Position(name) {
    this->name = name;
}

Movie::Movie(std::string name, int lenght) {
    this->name = name;
    movieLength = lenght;
}

std::string Movie::getType() {
    return "movie";
}
