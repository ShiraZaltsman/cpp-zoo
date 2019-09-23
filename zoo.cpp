//
// Created by shira on 9/23/19.
//

#include "zoo.h"
#include <iostream>

void Zoo::print_all_animals() {
    for (std::vector<Animal *>::iterator it = this->m_animals_vector.begin();
         it != this->m_animals_vector.end(); ++it) {
        std::cout << *(*it) << endl;
    }
}

void Zoo::add_animal(Animal *ani) {
    this->m_animals_vector.push_back(ani);
}

Zoo::Zoo(std::vector<Animal *> vector_animal) : m_animals_vector(vector_animal) {

}

Zoo::Zoo() {

}
