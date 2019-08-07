#include "land.hpp"

Land::Land():
   _width(0),
   _height(0)
{
   _generateLand();
}

Land::Land(int width, int height)
{
   // TODO This should check if the values are valid (non-negative numbers).
   _width = width;
   _height = height;
   _generateLand();
}

void Land::_generateLand()
{
   _terrain.clear();
   for (int x = 0; x < _height; x++)
   {
      _terrain.push_back(std::vector<bool>());
      for (int y = 0; y < _width; y++)
      {
         _terrain[x].push_back(x == 0 || y == 0 || x == _height - 1 || y == _width - 1);
      }
   }
}

const int& Land::getWidth()
{
   return _width;
}

const int& Land::getHeight()
{
   return _height;
}

const std::vector<std::vector<bool> >& Land::getTerrain()
{
   return _terrain;
}

bool Land::isWithinBounds(int coord_x, int coord_y)
{
   return !(coord_x > _width - 1 || coord_x < 0 || coord_y > _height - 1 || coord_y < 0);
}

bool Land::isWall(int coord_x, int coord_y)
{
   // TODO Clearly going to change once walls are added...
   if (isWithinBounds(coord_x, coord_y))
      return _terrain[coord_x][coord_y];
   return false;
}

void Land::setWidth(int new_width)
{
   _width = new_width;
   _generateLand();
}

void Land::setHeight(int new_height)
{
   _height = new_height;
   _generateLand();
}
