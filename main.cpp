#include <iostream>
#include <vector>
#include <sstream>

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

   int  width  = cStrToInt(argv[1]);
   int  height = cStrToInt(argv[2]);
   std::vector<std::vector<bool> > terrain;

   for (int x = 0; x < height; x++)
   {
      terrain.push_back(std::vector<bool>());
      for (int y = 0; y < width; y++)
      {
         terrain[x].push_back(x == 0 || y == 0 || x == height - 1 || y == width - 1);
      }
   }

   display_terrain(terrain);
 
   return 0;
}
