/* ************************************************************************** */
/*                                                                            */
/*                                                  .--.                      */
/*   2d_dgerard.cpp                              __/ o  ".                    */
/*                                              `  ),    "-.                  */
/*   By: dany <github.com/dgerard42>               |;;,      "-._             */
/*                                                 ';;;,,    ",_ "=-._        */
/*   Created: 2019/12/12 20:05:38 by dany            ':;;;;,,..-``"-._`"-.    */
/*   Updated: 2019/12/12 20:05:39 by dany              _/_/`           `'"`   */
/*                                                                            */
/* ************************************************************************** */

#include "karel.h"

int   main(){

  string userInput = "";
  Karel newKarel;

  cout << "hi welcome to shitty karel. they don't run well, but you can try to give them commands."
  << endl << "commands are:" << endl << "quit();" << endl << "move();" << endl
  << "safeMove();" << endl << "turnLeft();" << endl << "putBeeper();" << endl
  << "pickBeeper();" << endl << "safePickBeeper();" << endl;

  while (userInput != "quit();"){
    cin >> userInput;
    if (userInput == "move();")
      newKarel.move();
    else if (userInput == "turnLeft();")
      newKarel.turnLeft();
    else if (userInput == "safeMove();" || userInput == "putBeeper();"
    || userInput == "safePickBeeper();" || userInput == "safeMove();")
      cout << "sorry, Karel does not have that functionality at this time" << endl;
    else if (userInput == "quit();")
      cout << "byyyyyeeeeee" << endl;
    else
      cout << "invalid input. try again" << endl;
  }
  return 0;
}
