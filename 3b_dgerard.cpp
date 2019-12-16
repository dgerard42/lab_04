/* ************************************************************************** */
/*                                                                            */
/*                                                  .--.                      */
/*   3b_dgerard.cpp                              __/ o  ".                    */
/*                                              `  ),    "-.                  */
/*   By: dany <github.com/dgerard42>               |;;,      "-._             */
/*                                                 ';;;,,    ",_ "=-._        */
/*   Created: 2019/12/13 23:42:17 by dany            ':;;;;,,..-``"-._`"-.    */
/*   Updated: 2019/12/16 00:52:19 by dany              _/_/`           `'"`   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

void  onlyAdorable(string &test){

    int index = 0;
    while (index < test.length()){
      if (test[index] == 'u' || test[index] == 'U' || test[index] == 'w'
        || test[index] == 'W')
        index++;
      else
        test.erase(index, 1);
    }
    return;
}

int adorableCount(string test){

  onlyAdorable(test);
  string copy1 = test;
  string copy2 = test;
  string copy3 = test;
  string copy4 = test;
  if (test == "" || test.length() < 3)
    return 0;
  else if (test[0] == 'w' || test[0] == 'W')
    return adorableCount(copy1.erase(0, 1));
  else if (test[1] == 'U' || test[1] == 'u')
    return adorableCount(copy1.erase(1, 1));
  else if (test[2] == 'w' || test[2] == 'W')
    return adorableCount(copy1.erase(2, 1));
  else if (test.length() >= 3 && (test[0] == 'u' || test[0] == 'U')
    && (test[1] == 'W' || test[1] == 'w') && (test[2] == 'u' || test[2] == 'U') &&
    adorableCount(copy4.erase(0, 3)) == 0)
    return (1 + adorableCount(copy1.erase(0, 1)) + adorableCount(copy2.erase(1, 1)) + adorableCount(copy3.erase(2, 1)));
  else
    return (adorableCount(copy1.erase(0, 1)) + adorableCount(copy2.erase(1, 1)) + adorableCount(copy3.erase(2, 1)));
}

int main(){

    string string00 = "workers of the world Uwunite!!!";
    string string01 = "one big uwunion";
    string string02 = "Pwolwitratwiate";
    string string03 = "uwu uwu";
    string string04 = "DO U WATCH NAWUTO!?";
    string string05 = "God is dead. God remains dead. And we have killed him. How shall\
        we comfort ourselves, the murderers of all murderers? What was holiest\
        and mightiest of all that the world has yet owned has bled to death under\
        our knives: who will wipe this blood off us? What water is there for us to\
        clean ourselves? What festivals of atonement, what sacred games shall we\
        HAVE TO INVENT?!";
    cout << adorableCount(string00) << endl;
    cout << adorableCount(string01) << endl;
    cout << adorableCount(string02) << endl;
    cout << adorableCount(string03) << endl;
    cout << adorableCount(string04) << endl;
    cout << adorableCount(string05) << endl;
    return 0;
}

