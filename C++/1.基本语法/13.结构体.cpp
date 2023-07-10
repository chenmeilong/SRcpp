#include <iostream>
#include <cstring>
using namespace std;
void printBook( struct Books *book );
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
int main_13( )
{
   Books Book1;        // 定义结构体类型 Books 的变量 Book1
   strcpy( Book1.title, "C++ 教程");   //strcpy复制字符串
   strcpy( Book1.author, "Runoob");
   strcpy( Book1.subject, "编程语言");
   Book1.book_id = 12345;
   printBook( &Book1 );      // 通过传 Book1 的地址来输出 Book1 信息
   return 0;
}
void printBook( struct Books *book )  //该函数以结构指针作为参数
{
   cout << "书标题  : " << book->title <<endl;
   cout << "书作者 : " << book->author <<endl;
   cout << "书类目 : " << book->subject <<endl;
   cout << "书 ID : " << book->book_id <<endl;
}
