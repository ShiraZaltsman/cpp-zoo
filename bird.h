//
// Created by shira on 9/23/19.
//

#ifndef CPP_ZOO_SHIRAZALTSMAN_BIRD_H
#define CPP_ZOO_SHIRAZALTSMAN_BIRD_H

#include "animal.h"

class Birds : public Animal {
public:
    Birds(string name, string species, short life_expectancy, list<string> &find_in,
          list<string> &foods, unsigned char speed, size_t typical_height, unsigned char wing_span);
    //friend ostream& operator<<(ostream& os, const Birds& bird);
    virtual void print(std::ostream& str) const;
private:
    size_t m_typical_height;
    unsigned char m_wing_span;
};


inline Birds::Birds(string name, string species, short life_expectancy, list<string> &find_in, list<string> &foods,
                    unsigned char speed, size_t typical_height,
                    unsigned char wing_span)
        : Animal(name, species, life_expectancy, find_in, foods, speed),
          m_typical_height(typical_height), m_wing_span(wing_span) {}



#endif //CPP_ZOO_SHIRAZALTSMAN_BIRD_H
