//
// Created by shira on 9/23/19.
//

#ifndef CPP_ZOO_SHIRAZALTSMAN_ANIMAL_H
#define CPP_ZOO_SHIRAZALTSMAN_ANIMAL_H

#include <string>
#include <list>
#include <iostream>

using std::string;
using std::list;
using std::ostream;
using std::endl;


class Animal {
public:

    Animal(string name, string species, short life_expectancy, list<string> find_in,
           list<string> foods, unsigned char speed);

    virtual void print(std::ostream &str) const;

    friend ostream &operator<<(ostream &os, const Animal &dt);

private:
    string m_name;
    string m_species;
    short m_life_expectancy;
    list<string> m_find_in;
    list<string> m_foods;
    unsigned char m_speed;
};


inline Animal::Animal(string name, string species, short life_expectancy,
                      list<string> find_in, list<string> foods, unsigned char speed) :
        m_name(name), m_species(species), m_life_expectancy(life_expectancy), m_find_in(find_in),
        m_foods(foods), m_speed(speed) {}


#endif //CPP_ZOO_SHIRAZALTSMAN_ANIMAL_H
