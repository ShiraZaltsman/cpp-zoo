#include <iostream>
#include "animal.h"
#include "mammals.h"
#include "SeaCreatures.h"
#include "bird.h"
#include "zoo.h"
#include <vector>
#include "lion.h"
#include "monkey.h"
#include "goose.h"
#include "owl.h"
#include "whale.h"

using std::vector;
using std::cout;

void test_zoo() {
    vector<Animal *> my_animal;
    Lion l1("Simba");
    Lion l2("Mufasa");
    Monkey m1("Rafiki");
    Goose g1("Akka");
    Goose g2("Morten");
    Owl o1("Hedwig");
    Whale w1("Willy");
    my_animal.push_back(&l1); my_animal.push_back(&l2); my_animal.push_back(&m1);  my_animal.push_back(&g1);
    my_animal.push_back(&g2); my_animal.push_back(&o1); my_animal.push_back(&w1);


//    Mammals Toto("Toto", "dog", 40, find_in, food, 80, 10, 3);
//    my_animal.push_back(&Toto);
//    Fish Jaws("Jaws", "shark", 40, find_in, food, 80, 10);
//    my_animal.push_back(&Jaws);
//    Fish Nemo("Nemo", "clown fish", 40, find_in, food, 80, 10);
//    my_animal.push_back(&Nemo);

    Zoo my_zoo(my_animal);
    my_zoo.print_all_animals();
}

int main() {
    test_zoo();
    return 0;
}