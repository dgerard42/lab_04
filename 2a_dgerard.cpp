/* ************************************************************************** */
/*                                                                            */
/*                                                  .--.                      */
/*   2a_dgerard.cpp                              __/ o  ".                    */
/*                                              `  ),    "-.                  */
/*   By: dany <github.com/dgerard42>               |;;,      "-._             */
/*                                                 ';;;,,    ",_ "=-._        */
/*   Created: 2019/12/12 20:04:41 by dany            ':;;;;,,..-``"-._`"-.    */
/*   Updated: 2019/12/12 20:04:43 by dany              _/_/`           `'"`   */
/*                                                                            */
/* ************************************************************************** */

#include "karel.h"

//BEEPER FUNCTIONS

Beeper::Beeper(int row, int column){

  this->row = row;
  this->column = column;
}

Beeper::Beeper(){

  row = 0;
  column = 0;
}

int Beeper::getRow(){

  return row;
}

int Beeper::getColumn(){

  return column;
}

void Beeper::setRow(int row){

  this->row = row;
  return;
}

void Beeper::setColumn(int column){

  this->column = column;
  return;
}

//KAREL FUNCTIONS

Karel::Karel(int row, int column, Direction direction){

  this->row = row;
  this->column = column;
  this->direction = direction;
}

Karel::Karel(){

  row = 0;
  column = 0;
  direction = EAST;
}

int Karel::getRow(){

  return row;
}

int Karel::getColumn(){

  return column;
}

Direction Karel::getDirection(){

  return direction;
}

void Karel::move(){

  if (direction == NORTH)
    column++;
  else if (direction == SOUTH)
    column--;
  else if (direction == EAST)
    row++;
  else if (direction == WEST)
    row--;
}

void Karel::turnLeft(){

  if (direction == EAST)
        direction = NORTH;
    else if (direction == NORTH)
        direction = WEST;
    else if (direction == WEST)
        direction = SOUTH;
    else if (direction == SOUTH)
        direction = EAST;
}

/*
I cannot get safeMove to work because I cannot access the board size variables
that are supposed to be part of the GameWorld object

void Karel::safeMove(){

  if (column < COLUMN_SIZE && direction == NORTH)
    column++;
  else if (column > 0 && direction == SOUTH)
    column--;
  else if (row < ROW_SIZE && direction == EAST)
    row++;
  else if (row > 0 && direction == WEST)
    row--;
  return;
}

I can't get the Beeper functions to work because I cannot access the GameWorld
board vector
Also I'm not sure how I would track these Beeper objects
Or get the Karel functions to use Beeper functions??
I think I need inheritance but that would require moving the variables into
new objects and out of the objects that they are currently supposed to be in as
described by the lab pdf??

void  Karel::putBeeper(){

  return Beeper(row, column);
}

bool  Karel::pickBeeper(){
  I would try to remove a beeper object from Karel's current location
}

void safePickBeeper(){
  I would check to see if there is a beeper, then remove it if possible
}
*/
