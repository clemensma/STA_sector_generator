#ifndef STAR_H
#define STAR_H
#include <vector>
#include "planet.hpp"
#include "spatial_phenomenon.hpp"

class star {
public:
    star();
    ~star();
private:
    std::string spectral_class;
    std::string luminocity;
    std::vector<planet> planets; 
    spatial_phenomenon *phenomenon;
};

#endif