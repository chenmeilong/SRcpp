#include <iostream>
using namespace std;
class Box
{
   double width;
public:
   friend void printWidth( Box box );
   void setWidth( double wid );
};
void Box::setWidth( double wid )  // 成员函数定义
{
    width = wid;
}
void printWidth( Box box )  // 请注意：printWidth() 不是任何类的成员函数
{
   /* 因为 printWidth() 是 Box 的友元，它可以直接访问该类的任何成员 */
   cout << "Width of box : " << box.width <<endl;
}
int main_3( )   // 程序的主函数
{
   Box box;
   box.setWidth(10.0);     // 使用成员函数设置宽度
   printWidth( box );     // 使用友元函数输出宽度
   return 0;
}
