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

    Animal(string name);
    virtual ~Animal();
    virtual void print(std::ostream &str) const = 0;

    friend ostream &operator<<(ostream &os, const Animal &dt);

private:
    string m_name;
//    string m_species;
//    short m_life_expectancy;
//    list<string> m_find_in;
//    list<string> m_foods;
//    unsigned char m_speed;
};


inline Animal::Animal(string name) :m_name(name) {}
inline ostream &operator<<(ostream &os, const Animal &Ani) {
    Ani.print(os);
    return os;
}

inline void Animal::print(std::ostream &str) const {
    str<<"name: "<<this->m_name<<endl;
}

inline Animal::~Animal() {

}


#endif //CPP_ZOO_SHIRAZALTSMAN_ANIMAL_H
