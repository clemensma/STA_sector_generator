#ifndef PLANET_H
#define PLANET_H
#include <string>

class planet {
public:
    planet();
    ~planet();

private:
    int moons;
    std::string world_type;
    char planet_class;

};

#endif