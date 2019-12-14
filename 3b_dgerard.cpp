/* ************************************************************************** */
/*                                                                            */
/*                                                  .--.                      */
/*   3b_dgerard.cpp                              __/ o  ".                    */
/*                                              `  ),    "-.                  */
/*   By: dany <github.com/dgerard42>               |;;,      "-._             */
/*                                                 ';;;,,    ",_ "=-._        */
/*   Created: 2019/12/13 23:42:17 by dany            ':;;;;,,..-``"-._`"-.    */
/*   Updated: 2019/12/14 12:26:38 by dany              _/_/`           `'"`   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

bool  isAdorable(string &test){

    if((test[0] == 'u' || test[0] == 'U') && (test[1] == 'w' || test[1] == 'W')
        && (test[2] == 'u' || test[2] == 'U'))
        return true;
    else if (test == "")
        return false;
    else if (test [0] != 'u' && test[0] != 'U')
        return isAdorable(test.erase(0, 1));
    else if (test [1] != 'w' && test[1] != 'W')
        return isAdorable(test.erase(1, 1));
    else if (test[2] != 'u' && test[2] != 'U')
        return isAdorable(test.erase(2, 1));
}

int adorableCount(string test){

    int adorableScore = 0;
    
    cout << test << endl;
    while (test != ""){
        if (isAdorable(test) == true){
            cout << test << endl;
            adorableScore++;
            test.erase(0, 3);
        } else
            break;
    }
    return adorableScore;
}

int main(){

    string string00 = "workers of the world Uwunite!!!";    
    string string01 = "one big uwunion";
    string string02 = "Pwolwitratwiate";
    string string03 = "sowidawity fowever";
    string string04 = "DO U WATCH NAWUTO??!!?";
    string string05 = "God is dead. God remains dead. And we have killed him. How shall\
        we comfort ourselves, the murderers of all murderers? What was holiest\
        and mightiest of all that the world has yet owned has bled to death under\
        our knives: who will wipe this blood off us? What water is there for us to\
        clean ourselves? What festivals of atonement, what sacred games shall we\
        HAVE TO INVENT?????!!!!!!!!?";
    cout << adorableCount(string00) << endl;
    cout << adorableCount(string01) << endl;
    cout << adorableCount(string02) << endl;
    cout << adorableCount(string03) << endl;
    cout << adorableCount(string04) << endl;
    cout << adorableCount(string05) << endl;
    return 0;
}
