//
// Created by shira on 9/23/19.
//

#ifndef CPP_ZOO_SHIRAZALTSMAN_ZOO_H
#define CPP_ZOO_SHIRAZALTSMAN_ZOO_H


#include "animal.h"

#include <vector>


class Zoo {
public:
    Zoo();

    Zoo(std::vector<Animal *> animals_vector);

    void print_all_animals();

    void add_animal(Animal *ani);

private:
    std::vector<Animal *> m_animals_vector;
};


#endif //CPP_ZOO_SHIRAZALTSMAN_ZOO_H
