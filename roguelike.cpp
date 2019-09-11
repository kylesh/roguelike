#include "roguelike.hpp"

//   std::vector<Land> lands;
//   Character mainCharacter;
//   std::vector<Character> monsters;

Roguelike::Roguelike()
{
   lands.clear();
   monsters.clear();
   mainCharacter = Character(0,0);
}

Roguelike::Roguelike(int num_of_levels)
{
}

int Roguelike::start()
{
   return 0;
}

int Roguelike::nextRound()
{
   return 0;
}
