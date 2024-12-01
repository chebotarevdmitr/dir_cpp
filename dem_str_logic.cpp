#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
   int i, j;
   bool b1, b2;

   i = 10;
   j = 11;
   if(i<j)   cout << " i<j \n";
   if(i<=j)  cout << "i<=j \n";
   if(i!=j)  cout << "It will not be executed  \n";
   if(i==j)  cout << "It will not be executed  \n";
   if(i>=j)  cout << "It will not be executed  \n";
   if( i>j)  cout << "It will not be executed  \n";

   b1 = true;
   b2 = false;
   if  (b1&&b2)  cout << "It will not be executed    \n";
   if(!(b1&&b2)) cout << "!(b1&&b2)There is a truth  \n";
   if(b1 || b2)  cout << " b1 || b2 There is a truth \n";

   return 0;
}
