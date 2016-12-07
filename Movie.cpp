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
