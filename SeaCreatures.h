//
// Created by shira on 9/23/19.
//

#ifndef CPP_ZOO_SHIRAZALTSMAN_SEACREATURES_H
#define CPP_ZOO_SHIRAZALTSMAN_SEACREATURES_H

#include "animal.h"

class SeaCreatures : virtual public Animal {
public:
    SeaCreatures(string name);

    /*virtual*/void print(std::ostream &str) const;
    virtual size_t get_lowest_depth()const =0;
};

inline SeaCreatures::SeaCreatures(string name): Animal(name){}


inline void SeaCreatures::print(std::ostream &str) const {
    Animal::print(str);
    str << "lowest depth: " << this->get_lowest_depth() <<" meters"<< endl;
}

#endif //CPP_ZOO_SHIRAZALTSMAN_SEACREATURES_H
