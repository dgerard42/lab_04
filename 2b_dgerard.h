/* ************************************************************************** */
/*                                                                            */
/*                                                  .--.                      */
/*   2b_dgerard.h                                __/ o  ".                    */
/*                                              `  ),    "-.                  */
/*   By: dany <github.com/dgerard42>               |;;,      "-._             */
/*                                                 ';;;,,    ",_ "=-._        */
/*   Created: 2019/12/12 20:04:50 by dany            ':;;;;,,..-``"-._`"-.    */
/*   Updated: 2019/12/12 20:04:52 by dany              _/_/`           `'"`   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TWOB_DGERARD_H
# define TWOB_DGERARD_H

#include "karel.h"

//I'm not sure why I needed these 2 lines vvv, but I did
using std::string;
using std::vector;

class GameWorld{
  public:
    GameWorld();
    GameWorld(int row, int column);
    int getRow();
    int getColumn();

  private:
    const int DEFAULT_ROW = 8;
    const int DEFAULT_COLUMN = 8;
    int row;
    int column;
    vector<string> board;
};

#endif
