#include <iostream>
 
using namespace std;
 
class Box
{
   public:
      static int objectCount;
      // ���캯������
      Box(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         // ÿ�δ�������ʱ���� 1
         objectCount++;
      }
      double Volume()
      {
         return length * breadth * height;
      }
   private:
      double length;     // ����
      double breadth;    // ���
      double height;     // �߶�
};
 
// ��ʼ���� Box �ľ�̬��Ա
int Box::objectCount = 0;
 
int main_5(void)
{
   Box Box1(3.3, 1.2, 1.5);    // ���� box1
   Box Box2(8.5, 6.0, 2.0);    // ���� box2

   cout << Box1.Volume() << endl;
   cout << Box2.Volume() << endl;
 
   // ������������
   cout << "Total objects: " << Box::objectCount << endl;
 
   return 0;
}