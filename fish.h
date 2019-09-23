//
// Created by shira on 9/23/19.
//

#ifndef CPP_ZOO_SHIRAZALTSMAN_FISH_H
#define CPP_ZOO_SHIRAZALTSMAN_FISH_H

#include "animal.h"

class Fish : public Animal {
public:
    Fish(string name, string species, short life_expectancy, list<string> &find_in,
         list<string> &foods, unsigned char speed, size_t lowest_depth);
    //virtual
    void print(std::ostream& str) const;
    //friend ostream& operator<<(ostream& os, const Fish& fis);

private:
    size_t m_lowest_depth;
};


inline Fish::Fish(string name, string species, short life_expectancy, list<string> &find_in, list<string> &foods,
                  unsigned char speed, size_t lowest_depth)
        : Animal(name, species, life_expectancy, find_in, foods, speed),
          m_lowest_depth(lowest_depth) {}



#endif //CPP_ZOO_SHIRAZALTSMAN_FISH_H
