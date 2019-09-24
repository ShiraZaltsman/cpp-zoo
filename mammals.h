//
// Created by shira on 9/23/19.
//

#ifndef CPP_ZOO_SHIRAZALTSMAN_MAMMALS_H
#define CPP_ZOO_SHIRAZALTSMAN_MAMMALS_H

#include "animal.h"
#include "bird.h"

class Mammals : virtual public Animal {
public:
    Mammals(string name);

    /*virtual*/ void print(std::ostream &str) const;

    virtual unsigned char get_pregnancy_duration() const = 0;

    virtual unsigned char get_fetus_number() const = 0;
};

inline Mammals::Mammals(string name) : Animal(name) {}

inline void Mammals::print(std::ostream &str) const {
    Animal::print(str);
    str << "duration of pregnancy: " << +this->get_pregnancy_duration() << " months" << endl << "fetus number: "
        << +this->get_fetus_number() << " on average" << endl;
}

#endif //CPP_ZOO_SHIRAZALTSMAN_MAMMALS_H
