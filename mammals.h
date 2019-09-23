//
// Created by shira on 9/23/19.
//

#ifndef CPP_ZOO_SHIRAZALTSMAN_MAMMALS_H
#define CPP_ZOO_SHIRAZALTSMAN_MAMMALS_H

#include "animal.h"
#include "bird.h"

class Mammals : public Animal {
public:
    Mammals(string name, string species, short life_expectancy, list<string> &find_in,
            list<string> &foods, unsigned char speed, unsigned char duration_pregnancy,
            size_t fetus_number);

    /*virtual*/ void print(std::ostream &str) const;

private:
    unsigned char m_duration_pregnancy;
    size_t m_fetus_number;

};

inline Mammals::Mammals(string name, string species, short life_expectancy, list<string> &find_in,
                        list<string> &foods, unsigned char speed, unsigned char duration_pregnancy,
                        size_t fetus_number) : Animal(name, species, life_expectancy, find_in, foods, speed),
                                               m_duration_pregnancy(duration_pregnancy), m_fetus_number(fetus_number) {}

#endif //CPP_ZOO_SHIRAZALTSMAN_MAMMALS_H
