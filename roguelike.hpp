#ifndef ROGUELIKE_HPP
#define ROGUELIKE_HPP

#include "land.hpp"
#include "character.hpp"

class Roguelike {
public:
   Roguelike();
   Roguelike(int num_of_levels);
   int start();
   int nextRound();
private:
   std::vector<Land> lands;
   Character mainCharacter;
   // TODO Character should be a parent class... I need to make two classes...
   std::vector<Character> monsters;
};

#endif
