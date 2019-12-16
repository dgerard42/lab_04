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

#ifndef ONEB_DGERARD_H
# define ONEB_DGERARD_H

#include "karel.h"

//why are spheres a thing though????????? im confused

class Sphere{
  public:
    Sphere(float radius);
    Sphere(Point center, float radius);
    Point getCenter();
    float getRadius();
    float getVolume();
    float getSurfaceArea();

  private:
    Point center;
    float radius;
};

#endif
