#include <iostream>
#include <sstream>

#include "land.hpp"
#include "character.hpp"

int cStrToInt(const char* const v)
{
   std::stringstream s;
   int value = 0;
   s << v;
   s >> value;
   return value;

   //int value = 0;
   //(std::stringstream() << v) >> value;
   //return value;
}

void display_terrain(const std::vector<std::vector<bool> >& terrain)
{
   for (auto row: terrain)
   {
      for (auto unit: row)
      {
         std::cout << (unit ? "#" : ".");
      }
      std::cout<< std::endl;
   }
}

int main(int argc, char** argv)
{
   if (argc != 3)
      std::cout << "Incorrect number of arguments... There must be two." << std::endl;

   int width  = cStrToInt(argv[1]);
   int height = cStrToInt(argv[2]);

   Land level(width, height);

   display_terrain(level.getTerrain());

   std::cout << level.isWall(0,0) << std::endl;
   std::cout << level.isWall(1,1) << std::endl;
   std::cout << level.isWall(-1,1) << std::endl;

   Character character(1,1,1,'@');
   std::cout << character.getXCoord() << std::endl;
   int x = character.getXCoord();
 
   return 0;
}
