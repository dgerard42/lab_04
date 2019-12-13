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

#include <includes.h>

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
    int row;
    int column;
}

class Karel{
  public:
    Karel(int row, int column, Direction direction);
    Karel();
    int getRow();
    int getColumn();
    Direction getDirection();
    bool move();
    void turnLeft();
    Beeper putBeeper();
    bool pickBeeper();
    void safePickBeeper();

  private:
    int       row;
    int       column;
    Direction direction;
}
