#include <iostream>
using namespace std;

int main()
{
    //display upside down triangle
    int nLines = 21;
    int nSpaces = nLines / 2;
    int nStars = 1;
    int sign = 1;

    int i;
    i = 0;
    while ( i < nLines )
    {
        int j;
        
        j = 0;
        while ( j < nSpaces )
        {
            cout << " ";
            j = j + 1;
        }

        bool isStar = true;
        j = 0;
        while ( j < nStars )
        {
            if (isStar)
            {
                cout << "*";       
            }
            else
            {
                cout << ".";
            }

            isStar = !isStar;  //toggle

            j = j + 1;
        }

        cout << endl;

        /*
        if (i < 4)
        {
            nSpaces = nSpaces - 1;
            nStars = nStars + 2;
        }
        else
        {
            nSpaces = nSpaces + 1;
            nStars = nStars - 2;
        }*/

        if (i == nLines / 2)
        {
            sign = -1;
        }

        nSpaces = nSpaces - 1 * sign;
        nStars = nStars + 2 * sign;

        i = i + 1;
    }

}



/*


....*       <-- i = 5    4 dots  1 star 
...*        <-- i = 4    3 dots  1 star
..*         <-- i = 3    2 dots  1 star
.*          <-- i = 2    1 dots  1 star
*           <-- i = 1    0 dots  1 star

....*       <-- i = 5    4 dots  1 star 
...***      <-- i = 4    3 dots  3 star
..*****     <-- i = 3    2 dots  5 star
.*******    <-- i = 2    1 dots  7 star
*********   <-- i = 1    0 dots  9 star

                                 1 + 2*(45-i)
*/