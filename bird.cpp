//
// Created by shira on 9/23/19.
//
#include "bird.h"
using std::cout;


void Birds::print(std::ostream &str) const {
    Animal::print(str);
    cout<< "typical height: " << this->m_typical_height << endl<< "wing span: " << +this->m_wing_span << endl;
}