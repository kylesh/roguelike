#include "character.hpp"

Character::Character()
{
   //TODO This should not really be used...
   //Reason for this is that they should be in a valid location???
   //Use =default or =delete???
   setAppearance(' ');
   setXCoord(-1);
   setYCoord(-1);
   setStrideLength(-1);
}

Character::Character(int coord_x, int coord_y, int stride_length, char appearance)
{
   setAppearance(appearance);
   setXCoord(coord_x);
   setYCoord(coord_y);
   setStrideLength(stride_length);
}

const char& Character::getAppearance()
{
   return _appearance;
}

const int& Character::getXCoord()
{
   return _coord_x;
}

const int& Character::getYCoord()
{
   return _coord_y;
}

const int& Character::getStrideLength()
{
   return _stride_length;
}

const int& Character::getHealth()
{
   return _hp;
}

bool Character::setAppearance(char appearance)
{
   return _appearance = appearance;
}

bool Character::setXCoord(int coord_x)
{
   return _coord_x = coord_x;
}

bool Character::setYCoord(int coord_y)
{
   return _coord_y = coord_y;
}

bool Character::setStrideLength(int stride_length)
{
   return _stride_length = stride_length;
}

bool Character::setHealth(int hp)
{
   return _hp = hp;
}

bool Character::move(const char& direction)
{
   //TODO logic needs to be added if the move is valid? Should it know the land?
   switch(direction)
   {
      case 'w':
         _coord_y -= _stride_length;
         break;
      case 'a':
         _coord_x -= _stride_length;
         break;
      case 's':
         _coord_y += _stride_length;
         break;
      case 'd':
         _coord_x += _stride_length;
         break;
      default:
         return false;
   }
   return true;
}
