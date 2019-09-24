//
// Created by shira on 9/24/19.
//

#ifndef CPP_ZOO_SHIRAZALTSMAN_MONKEY_H
#define CPP_ZOO_SHIRAZALTSMAN_MONKEY_H
#include "mammals.h"
class Monkey : public Mammals {
public:
    Monkey(string name);

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

inline Monkey::Monkey(string name) : Mammals(name) {}

inline void Monkey::print(std::ostream &str) const {
    Mammals::print(str);
    str << "species: " << get_species() << endl << "life expectancy: " << +get_life_expectancy() << " years" <<
        endl << "can be found in: " << get_zones() << endl << "foods: " << get_foods_list() << endl << "speed: "
        << +get_speed() << endl << endl;
}

inline unsigned char Monkey::get_pregnancy_duration() const {
    return 6;
}

inline unsigned char Monkey::get_fetus_number() const {
    return 1;
}

inline string Monkey::get_foods_list() const {
    return "Banana";
}

inline unsigned char Monkey::get_life_expectancy() const {
    return 30;
}

inline string Monkey::get_zones() const {
    return "Asia, Africa";
}

inline unsigned char Monkey::get_speed() const {
    return 15;
}

inline string Monkey::get_species() const {
    return "Monkey";
}

#endif //CPP_ZOO_SHIRAZALTSMAN_MONKEY_H
