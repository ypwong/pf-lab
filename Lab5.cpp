#include <iostream>
using namespace std;

int main()
{
    /*display upside down triangle

    ....*
    ...*
    ..*
    .*
    *
    
    */
    int i;
    i = 5;
	
    while ( i >= 1 )
    {
        int j = 1;
        while ( j < i )
        {
            cout << " ";
            j = j + 1;
        }

        int nStars;
        nStars = 11 - 2 * i;
        j = 0;
        while (j < nStars) 
        {
            cout << "*";       
            j = j + 1;
        }
        cout << endl;

        i = i - 1;
    }

    /*display right-side up triangle

    .*
    ..*
    ...*
    ....*
    
    */
    i = 2;
	
    while ( i <= 5 )
    {
        int j = 1;

        while ( j < i )
        {
            cout << " ";
            j = j + 1;
        }

        int nStars;
        nStars = 11 - 2 * i;
        j = 0;
        while (j < nStars) 
        {
            cout << "*";       
            j = j + 1;
        }
        cout << endl;

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

*/