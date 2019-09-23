//
// Created by shira on 9/23/19.
//

#include "animal.h"
using std::cout;
ostream &operator<<(ostream &os, const Animal &Ani) {
    Ani.print(os);
    return os;
}

void Animal::print(std::ostream &str) const {
    cout <<"name: " <<this->m_name <<endl<< "species: " << this->m_species << endl << "life_expectancy: "<<this->m_life_expectancy<<endl<<"can be found in: ";
    for (list<string>::const_iterator it = this->m_find_in.begin(); it != this->m_find_in.end(); ++it){
        cout << *it<<", ";
    }
    cout<<endl<<"foods: ";
    for (list<string>::const_iterator it = this->m_foods.begin(); it != this->m_foods.end(); ++it){
        cout << *it<<", ";
    }
    cout<<endl<<"speed: "<<+this->m_speed<<endl;
}
