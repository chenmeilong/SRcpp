#include <iostream>
using namespace std;
class Shape   // 基类 Shape
{
   public:
      void setWidth(int w)
      {width = w;}
      void setHeight(int h)
      {height = h; }
   protected:
      int width;
      int height;
};
class PaintCost   // 基类 PaintCost
{
   public:
      int getCost(int area)
      {return area * 70;}
};
class Rectangle: public Shape, public PaintCost   // 派生类
{
   public:
      int getArea()
      {return (width * height);}
};
int main_6(void)
{
   Rectangle Rect;
   int area;
   Rect.setWidth(5);
   Rect.setHeight(7);
   area = Rect.getArea();
   cout << "Total area: " << Rect.getArea() << endl;   // 输出对象的面积
   cout << "Total paint cost: $" << Rect.getCost(area) << endl;     // 输出总花费
   return 0;
}
