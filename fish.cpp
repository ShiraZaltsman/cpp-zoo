//
// Created by shira on 9/23/19.
//
#include "fish.h"

using std::cout;

void Fish::print(std::ostream &str) const {
    Animal::print(str);
    cout << "lowest depth: " << this->m_lowest_depth << endl;
}

