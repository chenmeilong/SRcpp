#include <iostream>
using namespace std;
int main_10 ()
{
   int    i;            // 声明简单的变量
   int&    r = i;       // 声明引用变量
   i = 5;
   cout << "Value of i : " << i << endl;
   cout << "Value of i reference : " << r  << endl;
   cout << "Addr of i: " << &i << endl;
   cout << "Addr of r: " << &r << endl;
   return 0;
}
