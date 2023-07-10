#include <iostream>
using namespace std;
int main_12( )
{
   char name[10];
   cout << "请输入： ";
   cin >> name;
   cout << "是： " << name << endl;
   cerr << "是： " << name << endl;
   clog << "是： " << name << endl;
   return 0;
}
