#include <iostream>
using namespace std;
class Box
{
   double width;
public:
   friend void printWidth( Box box );
   void setWidth( double wid );
};
void Box::setWidth( double wid )  // ��Ա��������
{
    width = wid;
}
void printWidth( Box box )  // ��ע�⣺printWidth() �����κ���ĳ�Ա����
{
   /* ��Ϊ printWidth() �� Box ����Ԫ��������ֱ�ӷ��ʸ�����κγ�Ա */
   cout << "Width of box : " << box.width <<endl;
}
int main_3( )   // �����������
{
   Box box;
   box.setWidth(10.0);     // ʹ�ó�Ա�������ÿ��
   printWidth( box );     // ʹ����Ԫ����������
   return 0;
}
