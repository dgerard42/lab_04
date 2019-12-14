/* ************************************************************************** */
/*                                                                            */
/*                                                  .--.                      */
/*   1b_dgerard.cpp                              __/ o  ".                    */
/*                                              `  ),    "-.                  */
/*   By: dany <github.com/dgerard42>               |;;,      "-._             */
/*                                                 ';;;,,    ",_ "=-._        */
/*   Created: 2019/12/11 21:20:50 by dany            ':;;;;,,..-``"-._`"-.    */
/*   Updated: 2019/12/11 21:20:52 by dany              _/_/`           `'"`   */
/*                                                                            */
/* ************************************************************************** */

#include "karel.h"

float Sphere::getVolume(){

  float volume;

  volume = ((4 * M_PI) * pow(radius, 3)) / 3;
  return volume;
}

float Sphere::getSurfaceArea(){

  float surfaceArea;

  surfaceArea = 4 * M_PI * pow(radius, 2);
  return surfaceArea;
}

Point Sphere::getCenter(){

    return center;
}

float Sphere::getRadius(){

    return radius;
}

Sphere::Sphere(float radius){

  center = Point(0,0,0);
  this->radius = radius;
}

Sphere::Sphere(Point center, float radius){

  this->center = center;
  this->radius = radius;
}
