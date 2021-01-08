#include <iostream>
using namespace std;

int main() {
    int sign = 1, nLines = 21, nStars = 1, j, nSpaces = nLines / 2;
	bool isStar;

    for (int i = 0; i < nLines; ++i, nSpaces -= 1 * sign, nStars += 2 * sign) {
        for (int j = 0; j < nSpaces; ++j ) cout << " ";
        for (j = 0, isStar = true; j < nStars; ++j, isStar = !isStar) cout << (isStar ? "*" : ".") ;
        cout << endl;
        if (i == nLines / 2) sign = -1;
    }
}



