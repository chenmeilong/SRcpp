#include <iostream>
using namespace std;
int main_10 ()
{
   int    i;            // �����򵥵ı���
   int&    r = i;       // �������ñ���
   i = 5;
   cout << "Value of i : " << i << endl;
   cout << "Value of i reference : " << r  << endl;
   cout << "Addr of i: " << &i << endl;
   cout << "Addr of r: " << &r << endl;
   return 0;
}
