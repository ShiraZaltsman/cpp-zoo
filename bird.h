//
// Created by shira on 9/23/19.
//

#ifndef CPP_ZOO_SHIRAZALTSMAN_BIRD_H
#define CPP_ZOO_SHIRAZALTSMAN_BIRD_H

#include "animal.h"

class Birds : public Animal {
public:
    Birds(string name);

    virtual void print(std::ostream &str) const;

    virtual size_t get_typical_height() const = 0;

    virtual unsigned char get_wing_span() const = 0;

};


inline Birds::Birds(string name) : Animal(name) {}

inline void Birds::print(std::ostream &str) const {
    Animal::print(str);
    str << "typical height: " << this->get_typical_height() << endl << "wing span: " << +get_wing_span()
        << endl;
}

#endif //CPP_ZOO_SHIRAZALTSMAN_BIRD_H
