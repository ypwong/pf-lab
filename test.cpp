#include <iostream>
using namespace std;

int main()
{
   int num;
   cout << "enter a number: ";
   cin >> num;
   cout << "You entered the number " << num << endl;
   
   int count = 0;
   while (count < num)
   {
      cout << count << " ";
      count = count + 1;
   }

}
