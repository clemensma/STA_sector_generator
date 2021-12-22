#ifndef NOTABLESYSTEM_H
#define NOTABLESYSTEM_H
#include "star.hpp"
#include "spatial_phenomenon.hpp"
#include <vector>

class notable_system {
public:
    notable_system();
    ~notable_system();

private:
    std::vector<star> stars;
    std::vector<spatial_phenomenon> spatial_phenomenons;
};


#endif