//
// Created by shira on 9/23/19.
//
#include "fish.h"
using std::cout;
//ostream &operator<<(ostream &os, const Fish &fis) {
//
//    return os << static_cast<const Animal&>( fis ) << endl<<"lowest_depth: "<<fis.m_lowest_depth<<endl;
//}

void Fish::print(std::ostream &str) const {
    Animal::print(str);
    cout <<"lowest_depth: "<<this->m_lowest_depth<<endl;
}

