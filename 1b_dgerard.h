/* ************************************************************************** */
/*                                                                            */
/*                                                  .--.                      */
/*   1b_dgerard.h                                __/ o  ".                    */
/*                                              `  ),    "-.                  */
/*   By: dany <github.com/dgerard42>               |;;,      "-._             */
/*                                                 ';;;,,    ",_ "=-._        */
/*   Created: 2019/12/11 21:20:59 by dany            ':;;;;,,..-``"-._`"-.    */
/*   Updated: 2019/12/11 21:21:00 by dany              _/_/`           `'"`   */
/*                                                                            */
/* ************************************************************************** */

#include <includes.h>

class Sphere{
  public:
    Sphere(float radius);
    Sphere(Point center, float radius);

  private:
    Point center;
    float radius;
}
