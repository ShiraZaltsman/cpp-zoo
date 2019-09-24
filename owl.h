//
// Created by shira on 9/24/19.
//

#ifndef CPP_ZOO_SHIRAZALTSMAN_OWL_H
#define CPP_ZOO_SHIRAZALTSMAN_OWL_H
#include "bird.h"

class Owl : public Birds {
public:
    Owl(string name);

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

inline Owl::Owl(string name) : Birds(name) {}

inline void Owl::print(std::ostream &str) const {
    Birds::print(str);
    str << "species: " << get_species() << endl << "life expectancy: " << +get_life_expectancy() << " years" <<
        endl << "can be found in: " << get_zones() << endl << "foods: " << get_foods_list() << endl << "speed: "
        << +get_speed() << endl << endl;
}


inline string Owl::get_foods_list() const {
    return "rats";
}

inline unsigned char Owl::get_life_expectancy() const {
    return 6;
}

inline string Owl::get_zones() const {
    return "Asia, Africa";
}

inline unsigned char Owl::get_speed() const {
    return 3;
}

inline string Owl::get_species() const {
    return "Owl";
}

inline size_t Owl::get_typical_height() const {
    return 150;
}

unsigned char Owl::get_wing_span() const {
    return 2;
}
#endif //CPP_ZOO_SHIRAZALTSMAN_OWL_H
