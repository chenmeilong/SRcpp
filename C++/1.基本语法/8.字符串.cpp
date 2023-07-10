#include <iostream>
using namespace std;
int main_8()
{
   char site[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};
   cout << site << endl;

   string str1 = "runoob";
   string str2 = "google";
   string str3;
   int  len ;
   // 复制 str1 到 str3
   str3 = str1;
   cout << "str3 : " << str3 << endl;
   // 连接 str1 和 str2
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;
   // 连接后，str3 的总长度
   len = str3.size();
   cout << "str3.size() :  " << len << endl;
   return 0;
}
