#include <iostream>
#include <stdio.h>
#include <windows.h> // for Beep()
#include <unistd.h> // for usleep()
#include <conio.h> // for _getch()
// #include <ctype.h>
using namespace std;
int main()
{
    /*--- Musical Notes of Increasing Pitches ---*/
    double pitch[]=
    {
        0, 523.3, 587.3, 659.3, 698.5, 784.0, 880.0, 987.8, 1047
    };
    int music[] = {5, 3, 3, 0, 0, 0, 4, 2, 2, 0, 0, 0, 1, 2, 3, 4, 5, 5, 5, 0, 0, 0,
                   5, 3, 3, 0, 0, 0, 4, 2, 2, 0, 0, 0, 1, 3, 5, 5, 1
                  };
    /*for(int t=0;t<=39;t++){
        if(music[t]==0)
            usleep(150000); // sleep for a while without making any sound
        else
            Beep(pitch[music[t]], 400); // Beep for a musical note
    }
    /*--- play the music defined in music[] automatically ---*/

    cout << "Please press the key a,s,d,f,g,h,j,k to represent each notes." << endl << "Press other keys to exit." << endl;

    while(true)
    {
        int button, i;
        button = toupper(getch());
        switch (button)
        {
        case 'A':
            Beep(pitch[1], 200);
            break;
        case 'S':
            Beep(pitch[2], 200);
            break;
        case 'D':
            Beep(pitch[3], 200);
            break;
        case 'F':
            Beep(pitch[4], 200);
            break;
        case 'G':
            Beep(pitch[5], 200);
            break;
        case 'H':
            Beep(pitch[6], 200);
            break;
        case 'J':
            Beep(pitch[7], 200);
            break;
        case 'K':
            Beep(pitch[8], 200);
            break;
        default:
            i = 1;
            break;
        }
        if (i == 1)
            break;
        /*int button;
        button = toupper(getch());
        if(button == 'A') //a is Do
        {
            Beep(pitch[1], 200);
        }
        else if(button == 'S') // s is Re
        {
            Beep(pitch[2], 200);
        }
        else if(button == 'D')// d is Mi
        {
            Beep(pitch[3], 200);
        }
        else if(button == 'F')// f is Fa
        {
            Beep(pitch[4], 200);
        }
        else if(button == 'G')// g is Sol
        {
            Beep(pitch[5], 200);
        }
        else if(button == 'H')// h is La
        {
            Beep(pitch[6], 200);
        }
        else if(button == 'J')// j is Ti
        {
            Beep(pitch[7], 200);
        }
        else if(button == 'K')// k is #Do
        {
            Beep(pitch[8], 200);
        }
        else
        {
            break;
        }*/

    }

    return 0;
}
