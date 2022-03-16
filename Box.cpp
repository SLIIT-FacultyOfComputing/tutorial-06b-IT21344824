#include "Box.h"

// Implement setters and getters
//////////////setters
void Box::setLength(int l)
{
  length = l ;
}
int Box::getLength()
{
  return length ;
}


void Box::setWidth(int w)
{
  width = w ;
}
int Box::getWidth()
{
  return width ;
}


void Box::setHeight(int H)
{
  height = H ;
}

int Box::getHeight()
{
  return height ;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
 // Volume of Box is
  //return  l * w * H ;
 return length * (width * height);
}
