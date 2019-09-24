//
// Created by shira on 9/24/19.
//

#ifndef CPP_ZOO_SHIRAZALTSMAN_GOOSE_H
#define CPP_ZOO_SHIRAZALTSMAN_GOOSE_H

#include "bird.h"

class Goose : public Birds {
public:
    Goose(string name);

    /*virtual*/ void print(std::ostream &str) const;

    /*virtual*/ size_t get_typical_height() const;

    /*virtual*/ unsigned char get_wing_span() const;

    string get_species() const;

    string get_foods_list() const;

    unsigned char get_life_expectancy() const;

    string get_zones() const;

    unsigned char get_speed() const;


private:

};

inline Goose::Goose(string name) : Birds(name) {}

inline void Goose::print(std::ostream &str) const {
    Birds::print(str);
    str << "species: " << get_species() << endl << "life expectancy: " << +get_life_expectancy() << " years" <<
        endl << "can be found in: " << get_zones() << endl << "foods: " << get_foods_list() << endl << "speed: "
        << +get_speed() << endl << endl;
}


inline string Goose::get_foods_list() const {
    return "fish";
}

inline unsigned char Goose::get_life_expectancy() const {
    return 6;
}

inline string Goose::get_zones() const {
    return "Asia, Africa";
}

inline unsigned char Goose::get_speed() const {
    return 3;
}

inline string Goose::get_species() const {
    return "Goose";
}

inline size_t Goose::get_typical_height() const {
    return 0;
}

unsigned char Goose::get_wing_span() const {
    return 2;
}

#endif //CPP_ZOO_SHIRAZALTSMAN_GOOSE_H
