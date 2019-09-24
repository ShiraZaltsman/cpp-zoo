//
// Created by shira on 9/24/19.
//

#ifndef CPP_ZOO_SHIRAZALTSMAN_LION_H
#define CPP_ZOO_SHIRAZALTSMAN_LION_H

#include "mammals.h"

class Lion : public Mammals {
public:
    Lion(string name);

    /*virtual*/ void print(std::ostream &str) const;

    /*virtual*/ unsigned char get_pregnancy_duration() const;

    /*virtual*/ unsigned char get_fetus_number() const;

    string get_species() const;

    string get_foods_list() const;

    unsigned char get_life_expectancy() const;

    string get_zones() const;

    unsigned char get_speed() const;


private:

};

inline Lion::Lion(string name) : Mammals(name) {}

inline void Lion::print(std::ostream &str) const {
    Mammals::print(str);
    str << "species: " << get_species() << endl << "life expectancy: " << +get_life_expectancy() << " years" <<
        endl << "can be found in: " << get_zones() << endl << "foods: " << get_foods_list() << endl << "speed: "
        << +get_speed() << endl << endl;
}

inline unsigned char Lion::get_pregnancy_duration() const {
    return 3;
}

inline unsigned char Lion::get_fetus_number() const {
    return 4;
}

inline string Lion::get_foods_list() const {
    return "Zebra, Buffalo";
}

inline unsigned char Lion::get_life_expectancy() const {
    return 16;
}

inline string Lion::get_zones() const {
    return "Asia, Africa";
}

inline unsigned char Lion::get_speed() const {
    return 30;
}

inline string Lion::get_species() const {
    return "Lion";
}

#endif //CPP_ZOO_SHIRAZALTSMAN_LION_H
