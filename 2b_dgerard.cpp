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
  for(int height = 0; height < column; height++){
    for (int length = 0; length < row; length++){
      current.append(1, '.');
    }
  }
  board.push_back(current);
  current.clear();
}

GameWorld::GameWorld(int row, int column){

    string current;
    this->row = row;
    this->column = column;
    for(int height = 0; height < column; height++){
      for (int length = 0; length < row; length++){
        current.append(1, '.');
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
