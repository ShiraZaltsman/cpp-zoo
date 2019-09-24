//
// Created by shira on 9/24/19.
//

#ifndef CPP_ZOO_SHIRAZALTSMAN_WHALE_H
#define CPP_ZOO_SHIRAZALTSMAN_WHALE_H

#include "mammals.h"
#include "SeaCreatures.h"

class Whale : virtual public Mammals /*virtual public SeaCreatures*/ {
public:
    Whale(string name);

    /*virtual*/ void print(std::ostream &str) const;

    /*virtual*/ unsigned char get_pregnancy_duration() const;

    /*virtual*/ unsigned char get_fetus_number() const;

    /*virtual*/ size_t get_lowest_depth() const;

    string get_species() const;

    string get_foods_list() const;

    unsigned char get_life_expectancy() const;

    string get_zones() const;

    unsigned char get_speed() const;


private:

};

inline Whale::Whale(string name) : Mammals(name) /*,SeaCreatures(name)*/ {}

inline void Whale::print(std::ostream &str) const {
    Mammals::print(str);
    str << "species: " << get_species() << endl << "life expectancy: " << +get_life_expectancy() << " years" <<
        endl << "can be found in: " << get_zones() << endl << "foods: " << get_foods_list() << endl << "speed: "
        << +get_speed() << endl << endl;
}

inline unsigned char Whale::get_pregnancy_duration() const {
    return 3;
}

inline unsigned char Whale::get_fetus_number() const {
    return 4;
}

inline string Whale::get_foods_list() const {
    return "everything";
}

inline unsigned char Whale::get_life_expectancy() const {
    return 3;
}

inline string Whale::get_zones() const {
    return "Atlantic Ocean, Pacific Ocean";
}

inline unsigned char Whale::get_speed() const {
    return 80;
}

inline string Whale::get_species() const {
    return "Whale";
}

size_t Whale::get_lowest_depth() const {
    return 1000;
}

#endif //CPP_ZOO_SHIRAZALTSMAN_WHALE_H
