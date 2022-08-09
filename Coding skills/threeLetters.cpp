#include <iostream>

using namespace std;

string threeLetters(int A, int B)
{
    int maxChar, max;
    int minChar, min;
    string str;

    // defining who are the players in the game
    if (A > B)
    {
        max = A;
        maxChar = 'a';
        min = B;
        minChar = 'b';
    }
    else
    {
        max = B;
        maxChar = 'b';
        min = A;
        minChar = 'a';
    }
    // as long is they are not equale, insert two from the max and one from the min
    while (max != min)
    {
        if (max > 1)
        {
            str += maxChar;
            str += maxChar;
            max -= 2;
        }
        else
        {
            str += maxChar;
            max--;
        }

        if (min > 0)
        {
            str += minChar;
            min--;
        }
    }
    // when they are finally equal, insert one of each kind.
    while (max != 0 && min != 0)
    {
        if (max >= 0)
        {
            str += maxChar;
            max--;
        }
        if (min >= 0)
        {
            str += minChar;
            min--;
        }
    }
    return str;
}

int main()
{
    cout << threeLetters(5, 2) << endl;
    return 0;
}