#include <iostream>
#include "Movie.h"
#include "Book.h"
#include "Customer.h"
#include "Library.h"

int main() {
    Movie birds("Angry birds", 120);
    Movie star("Star Wars", 128);
    Movie dogs("War Dogs", 114);

    Book potter("Harry Potter 1", 223);
    Book lotr("Fellowship of the Ring", 423);
    Book witcher("The Last Wish", 288);

    Library library = Library();
    Customer customer = Customer();

    library.addAvailable(birds);
    library.addAvailable(star);
    library.addAvailable(dogs);
    library.addAvailable(potter);
    library.addAvailable(lotr);
    library.addAvailable(witcher);


    std::cout<<"Books available in the library: " << library.getAvailable().size()<<std::endl;

    std::vector<Position *> stuffToLoan = {&dogs, &lotr};
    library.loan(stuffToLoan, customer);

    std::cout<<"Books available in the library: " << library.getAvailable().size()<<std::endl;

    library.returnPosition(dogs, customer);

    std::cout<<"Books available in the library: " << library.getAvailable().size()<<std::endl;

    std::cout<<"Movies watched by the customer : " << customer.getWatchedCount()<<std::endl;



}