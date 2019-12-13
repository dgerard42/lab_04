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

#include <includes.h>

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

void setRow(int row){

  this->row = row;
  return;
}

void setColumn(int column){

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

bool Karel::move(){

  if (direction == NORTH)
    column++;
  else if (direction == SOUTH)
    column--;
  else if (direction == EAST)
    row++;
  else if (direction == WEST)
    row--;
  if (row >= BOARD_SIZE || row < 0 || column >= BOARD_SIZE || column < 0)
    return false;
  else
    return true;
}

void Karel::turnLeft(){

  if (direction == EAST)
        direction = NORTH;
    else if (direction == NORTH)
        direction = WEST;
    else if (direction == WEST)
        direction = SOUTH;
    else if (direction) == SOUTH)
        direction = EAST;
}

void Karel::safeMove(){

  if (column < BOARD_SIZE && direction == NORTH)
    column++;
  else if (column > 0 && direction == SOUTH)
    column--;
  else if (row < BOARD_SIZE && direction == EAST)
    row++;
  else if (row > 0 && direction == WEST)
    row--;
  return;
}

Beeper  Karel::putBeeper(){

  return Beeper(row, column);
}

bool  
