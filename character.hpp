#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class Character {
public:
   Character();
   Character(int coord_x, int coord_y, int stride_length=1, char appearance='@');
   const char& getAppearance();
   const int& getXCoord();
   const int& getYCoord();
   const int& getStrideLength();
   const int& getHealth();
   bool setAppearance(char appearance);
   bool setXCoord(int coord_x);
   bool setYCoord(int coord_y);
   bool setStrideLength(int stride_length);
   bool setHealth(int hp);
   bool move(const char& direction);
private:
   char _appearance;
   int _coord_x;
   int _coord_y;
   int _stride_length;
   int _hp;
};

#endif
