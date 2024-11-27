#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
   cout << "division modulo operators %" << endl;
   int x = 10, y = 3;
   cout << x << " / " << y << " = " << x / y << " with the "
   "remainder" << x % y << endl;
   x = 1;
   y = 2;
   cout << x << " / " << y << " = " << x / y << endl;
   cout << x << " % " << y << " = " << x % y << endl;

   return 0;
}
