//
// Created by agnie on 12/7/2016.
//

#ifndef LIBRARY_BOOK_H
#define LIBRARY_BOOK_H


#include "Position.h"

class Book : public Position {
private:
    int pageCount;
public:
    Book();
    Book(int pages);

    Book(std::string name);

    Book(std::string name, int pages);
    int getPageCount();
    void setPageCount(int pages);

    virtual std::string getType();
};


#endif //LIBRARY_BOOK_H
