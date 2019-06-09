#include <iostream>
#include "Movie.h"
#include <string>

Movie::Movie(std::string name, std::string rating, int watched) 
    :name(name), rating(rating), watched(watched) {
}

//Implemention of the copy constructor
Movie::Movie(const Movie &source) 
    : Movie{source.name, source.rating, source.watched} {
}

void Movie::display() const {
    std::cout << name << ", "
        << rating << ", "
        << watched << std::endl;
}

Movie::~Movie()
{
    --watched;
}

