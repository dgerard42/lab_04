/* ************************************************************************** */
/*                                                                            */
/*                                                  .--.                      */
/*   2a_dgerard.h                                __/ o  ".                    */
/*                                              `  ),    "-.                  */
/*   By: dany <github.com/dgerard42>               |;;,      "-._             */
/*                                                 ';;;,,    ",_ "=-._        */
/*   Created: 2019/12/12 20:05:26 by dany            ':;;;;,,..-``"-._`"-.    */
/*   Updated: 2019/12/12 20:05:27 by dany              _/_/`           `'"`   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TWOA_DGERARD_H
# define TWOA_DGERARD_H

#include "karel.h"

enum Direction{NORTH, SOUTH, EAST, WEST};

class Beeper{
  public:
    Beeper(int row, int column);
    Beeper();
    int getRow();
    void setRow(int row);
    int getColumn();
    void setColumn(int column);

  private:
    int column;
    int row;
};

class Karel{
  public:
    Karel(int row, int column, Direction direction);
    Karel();
    int getRow();
    int getColumn();
    Direction getDirection();
    void move();
    void turnLeft();
    //void putBeeper();
    //void pickBeeper();
    //void safePickBeeper();

  private:
    int       row;
    int       column;
    Direction direction;
};

#endif
