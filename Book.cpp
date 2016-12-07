//
// Created by agnie on 12/7/2016.
//

#include "Book.h"

Book::Book() {

}

Book::Book(int pages) {
    pageCount = pages;
}

int Book::getPageCount() {
    return pageCount;
}

void Book::setPageCount(int pages) {
    pageCount = pages;
}
