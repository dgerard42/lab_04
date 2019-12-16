/* ************************************************************************** */
/*                                                                            */
/*                                                  .--.                      */
/*   2b_dgerard.cpp                              __/ o  ".                    */
/*                                              `  ),    "-.                  */
/*   By: dany <github.com/dgerard42>               |;;,      "-._             */
/*                                                 ';;;,,    ",_ "=-._        */
/*   Created: 2019/12/12 20:05:15 by dany            ':;;;;,,..-``"-._`"-.    */
/*   Updated: 2019/12/12 20:05:16 by dany              _/_/`           `'"`   */
/*                                                                            */
/* ************************************************************************** */

#include "karel.h"

GameWorld::GameWorld(){

  string current;
  row = DEFAULT_ROW;
  column = DEFAULT_COLUMN;
  for(int height = 0; height < row; height++){
    for (int length = 0; length < column; length++){
      current.append(1, '-');
    }
  }
  board.push_back(current);
  current.clear();
}

GameWorld::GameWorld(int row, int column){

    string current;
    this->row = row;
    this->column = column;
    for(int height = 0; height < row; height++){
      for (int length = 0; length < column; length++){
        current.append(1, '-');
      }
    }
    board.push_back(current);
    current.clear();
}

int GameWorld::getRow(){

  return row;
}

int GameWorld::getColumn(){

  return column;
}

bool  GameWorld::inBounds(int row, int column){
  if (row >= 0 && row <= this->row && column >= 0 && column <= this->column
    && board[row][column] == '-')
    return true;
  else
    return false;
}

/*
I'm not sure how I'm supposed to look at all of my Beeper objects without
storing an array/vector/linkedlist of them in GameWorld and having inheritance
between the 2 kinds of objects, which we didn't learn about and I don't know how
to do
Or I could have each beeper marked onto the board vector as created, but that
would also require inheritance the opposite direction I think??

so this won't work but I wrote it anyways

VVVVVVVVVVVVVVVVVVVV
*/
bool  GameWorld::beepersPresent(int row, int column){

  if (row >= 0 && row <= this->row && column >= 0 && column <= this->column
    && board[row][column] == '@')
    return true;
  else
    return false;
}

void GameWorld::printWorld(){

  for(int height = 0; height < row; height++)
    cout << board[height] << endl;
  return;
}
