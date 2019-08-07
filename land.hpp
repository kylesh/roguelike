#ifndef LAND_HPP
#define LAND_HPP

#include <vector>

class Land {
public:
   Land();
   Land(int width, int height);
   void _generateLand();
   const int& getWidth();
   const int& getHeight();
   const std::vector<std::vector<bool> >& getTerrain();
   bool isWithinBounds(int coord_x, int coord_y);
   bool isWall(int coord_x, int coord_y);
   void setWidth(int new_width);
   void setHeight(int new_height);
private:
   int _width;
   int _height;
   std::vector<std::vector<bool> > _terrain;
};

#endif
