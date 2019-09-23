#include <iostream>
#include "animal.h"
#include "mammals.h"
#include "fish.h"
#include "bird.h"
#include "zoo.h"
#include <vector>

using std::vector;
using std::cout;

void test_zoo() {
    vector<Animal *> my_animal;
    list<string> find_in;
    find_in.push_back("Africa");
    find_in.push_back("Australia");
    find_in.push_back("America");
    list<string> food;
    food.push_back("zebra"); food.push_back("Buffalo");
    Mammals Simba("Simba", "lion", 40, find_in, food, 80, 10, 3);
    my_animal.push_back(&Simba);
    Mammals Mufasa("Mufasa", "lion", 40, find_in, food, 80, 10, 3);
    my_animal.push_back(&Mufasa);
    Mammals Rafiki("Rafiki", "monkey", 40, find_in, food, 80, 10, 3);
    my_animal.push_back(&Rafiki);
    Birds Akka("Akka", "goose", 40, find_in, food, 80, 70, 50);
    my_animal.push_back(&Akka);
    Birds Morten("Morten", "goose", 40, find_in, food, 80, 10, 3);
    my_animal.push_back(&Morten);
    Birds Hedwig("Hedwig", "owl", 40, find_in, food, 80, 10, 3);
    my_animal.push_back(&Hedwig);
    Mammals Toto("Toto", "dog", 40, find_in, food, 80, 10, 3);
    my_animal.push_back(&Toto);
    Fish Jaws("Jaws", "shark", 40, find_in, food, 80, 10);
    my_animal.push_back(&Jaws);
    Fish Nemo("Nemo", "clown fish", 40, find_in, food, 80, 10);
    my_animal.push_back(&Nemo);

    Zoo my_zoo(my_animal);
    my_zoo.print_all_animals();
}

int main() {
    test_zoo();
    return 0;
}