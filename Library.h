//
// Created by agnie on 12/7/2016.
//

#ifndef LIBRARY_LIBRARY_H
#define LIBRARY_LIBRARY_H


#include <vector>
#include "Position.h"
#include "Customer.h"

class Library {
private:
    std::vector<Position *> available;
public:
    void loan(std::vector<Position *> positions, Customer &customer);

    void addAvailable(Position *position);

    void returnPosition(Position *position);
};


#endif //LIBRARY_LIBRARY_H
