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

inline void Zoo::print_all_animals() {
    for (std::vector<Animal *>::iterator it = this->m_animals_vector.begin();
         it != this->m_animals_vector.end(); ++it) {
        std::cout << *(*it);
    }
}

inline void Zoo::add_animal(Animal *ani) {
    this->m_animals_vector.push_back(ani);
}

inline Zoo::Zoo(std::vector<Animal *> vector_animal) : m_animals_vector(vector_animal) {

}

inline Zoo::Zoo() {

}

#endif //CPP_ZOO_SHIRAZALTSMAN_ZOO_H
