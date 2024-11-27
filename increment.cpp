#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
   cout << "Demonstration of increment " << endl;
   int x = 10 ,  y = ++x;
   // x = 10;
   //  y = ++x;
   cout << " x =10 ,y = ++x" << " y = " << y << endl;
   x = 10;
   y = x++;
   cout << " x =10 ,y = x++" << " y = " << y << endl;
   return 0;
}
