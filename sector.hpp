#ifndef SECTOR_H
#define SECTOR_H
#include <vector>
#include "notable_system.hpp"

class sector {
public:
    sector();
    ~sector();

private:
    std::vector<notable_system> notable_systems;

};

#endif