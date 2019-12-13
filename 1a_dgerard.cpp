/* ************************************************************************** */
/*                                                                            */
/*                                                  .--.                      */
/*   1a_dgerard.cpp                              __/ o  ".                    */
/*                                              `  ),    "-.                  */
/*   By: dany <github.com/dgerard42>               |;;,      "-._             */
/*                                                 ';;;,,    ",_ "=-._        */
/*   Created: 2019/12/03 11:44:47 by dany            ':;;;;,,..-``"-._`"-.    */
/*   Updated: 2019/12/03 11:52:06 by dany              _/_/`           `'"`   */
/*                                                                            */
/* ************************************************************************** */

#include <includes.h>

Point::Point(){

  this->xCoord = 0;
  this->yCoord = 0;
  this->zCoord = 0;
}

float Point::getX(){

  return xCoord;
}

float Point::getY(){

  return yCoord;
}

float Point::getZ(){

  return zCoord;
}

void Point::setX(float xInput){

  xCoord = xInput;
  return;
}

void Point::setY(float yInput){

  yCoord = yInput;
  return;
}

void Point::setZ(float zInput){

  zCoord = zInput;
  return;
}

Point::Point(float xCoord, float ycoord, float zCoord){

  this->xCoord = xCoord;
  this->yCoord = yCoord;
  this->zCoord = zCoord;
}
