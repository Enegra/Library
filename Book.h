//
// Created by agnie on 12/7/2016.
//

#ifndef LIBRARY_BOOK_H
#define LIBRARY_BOOK_H


class Book {
private:
    int pageCount;
public:
    Book();
    Book(int pages);
    int getPageCount();
    void setPageCount(int pages);
};


#endif //LIBRARY_BOOK_H
