//
// Created by agnie on 12/7/2016.
//

#ifndef LIBRARY_POSITION_H
#define LIBRARY_POSITION_H

#include <iostream>

class Position {
protected:
    std::string name;
public:
    Position();

    Position(std::string name);

    std::string getName();

    void setName(std::string newName);
};


#endif //LIBRARY_POSITION_H
