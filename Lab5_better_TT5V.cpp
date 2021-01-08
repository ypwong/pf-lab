#include <iostream>
using namespace std;

int main()
{
    /*display

    ....*
    ...***
    ..*****
    .*******
    *********
    .*******
    ..*****
    ...***
    ....*

    */
    
    int sign = 1;
    int nLines = 21;
    int nSpaces = nLines / 2;
    int nStars = 1;
    int i;
    i = 0;
	
    while ( i < nLines )
    {
        int j = 0;
        while ( j < nSpaces )
        {
            cout << " ";
            j = j + 1;
        }

        bool isStar = true;
        j = 0;
        while (j < nStars) 
        {
            if (isStar)
            {
                cout << "*";
            }
            else
            {
                cout << ".";       
            }
            
            isStar = !isStar;   //toggle
            j = j + 1;
        }
        cout << endl;

        if (i == nLines / 2)
        {
            sign = -1;
        }
        nSpaces = nSpaces - 1 * sign;
        nStars = nStars + 2 * sign;
        
        i = i + 1;
    }


}


