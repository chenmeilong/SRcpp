#include <iostream>
using namespace std;

namespace first_space{
   void func(){
      cout << "Inside first_space" << endl; // ��һ�������ռ�
   }
}
namespace second_space{
   void func(){
      cout << "Inside second_space" << endl;// �ڶ��������ռ�
   }
}
int main_5 ()
{
   first_space::func();   // ���õ�һ�������ռ��еĺ���
   second_space::func();   // ���õڶ��������ռ��еĺ���
   return 0;
}
