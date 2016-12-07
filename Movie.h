//
// Created by agnie on 12/7/2016.
//

#ifndef LIBRARY_MOVIE_H
#define LIBRARY_MOVIE_H


class Movie {
    private:
        int movieLength;
    public:
        Movie();
        Movie(int length);
        int getLength();
        void setLength(int length);
};


#endif //LIBRARY_MOVIE_H
