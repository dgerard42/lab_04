/* ************************************************************************** */
/*                                                                            */
/*                                                  .--.                      */
/*   1a_dgerard.h                                __/ o  ".                    */
/*                                              `  ),    "-.                  */
/*   By: dany <github.com/dgerard42>               |;;,      "-._             */
/*                                                 ';;;,,    ",_ "=-._        */
/*   Created: 2019/12/03 12:05:30 by dany            ':;;;;,,..-``"-._`"-.    */
/*   Updated: 2019/12/03 12:05:35 by dany              _/_/`           `'"`   */
/*                                                                            */
/* ************************************************************************** */

#include <includes.h>

class Point{
  public:
    Point();
    Point(float xCoord, float yCoord, float zCoord);
    float getX();
    float getY();
    float getZ();
    void  setX(float xInput);
    void  setY(float yInput);
    void  setZ(float zInput);

  private:
    float xCoord;
    float yCoord;
    float zCoord;
}
