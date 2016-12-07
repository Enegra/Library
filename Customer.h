//
// Created by agnie on 12/7/2016.
//

#ifndef LIBRARY_CUSTOMER_H
#define LIBRARY_CUSTOMER_H


#include <vector>
#include "Position.h"

class Customer {
private:
    std::vector<Position *> history;
    std::vector<Position *> current;
    int readCount;
    int watchedCount;
public:
    int getReadCount();

    void setReadCount(int readCount);

    int getWatchedCount();

    void setWatchedCount(int watchedCount);

    void addToHistory(Position &position);

    void addToCurrent(Position &position);

    void removeFromCurrent(Position &position);

    void operator+(Position &position);
};


#endif //LIBRARY_CUSTOMER_H
