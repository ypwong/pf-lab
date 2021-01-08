#include <iostream>
using namespace std;

int main()
{
    int count;
    long long int prod;
    int numStart, numEnd;

//    cout << "Enter first number: ";
//    cin >> numStart;
//    cout << "Enter second number: ";
//    cin >> numEnd;
    numStart = 1;
    cout << "Enter a number: ";
    cin >> numEnd;
 
    prod = 1;
    count = numStart;
    while ( count <= numEnd )
    {  
        prod = prod * count;
        count = count + 1;
    }
    //cout << "Product = " << prod;
    cout << numEnd << "! = " << prod;

    return 0;
}
