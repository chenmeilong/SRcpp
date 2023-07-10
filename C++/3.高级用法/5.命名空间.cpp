#include <iostream>
using namespace std;

namespace first_space{
   void func(){
      cout << "Inside first_space" << endl; // 第一个命名空间
   }
}
namespace second_space{
   void func(){
      cout << "Inside second_space" << endl;// 第二个命名空间
   }
}
int main_5 ()
{
   first_space::func();   // 调用第一个命名空间中的函数
   second_space::func();   // 调用第二个命名空间中的函数
   return 0;
}
