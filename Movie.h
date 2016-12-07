//
// Created by agnie on 12/7/2016.
//

#ifndef LIBRARY_MOVIE_H
#define LIBRARY_MOVIE_H


#include "Position.h"

class Movie : public Position {
    private:
        int movieLength;
    public:
        Movie();

    Movie(std::string name);
        Movie(int length);

    Movie(std::string name, int lenght);
        int getLength();
        void setLength(int length);
};


#endif //LIBRARY_MOVIE_H
