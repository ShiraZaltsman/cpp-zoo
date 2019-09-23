//
// Created by shira on 9/23/19.
//

#include "mammals.h"

using std::cout;

void Mammals::print(std::ostream &str) const {
    Animal::print(str);
    cout << "duration of pregnancy: " << +this->m_duration_pregnancy << endl << "fetus number: " << this->m_fetus_number
         << endl;
}