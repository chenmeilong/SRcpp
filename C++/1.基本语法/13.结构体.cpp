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
   Books Book1;        // ����ṹ������ Books �ı��� Book1
   strcpy( Book1.title, "C++ �̳�");   //strcpy�����ַ���
   strcpy( Book1.author, "Runoob");
   strcpy( Book1.subject, "�������");
   Book1.book_id = 12345;
   printBook( &Book1 );      // ͨ���� Book1 �ĵ�ַ����� Book1 ��Ϣ
   return 0;
}
void printBook( struct Books *book )  //�ú����Խṹָ����Ϊ����
{
   cout << "�����  : " << book->title <<endl;
   cout << "������ : " << book->author <<endl;
   cout << "����Ŀ : " << book->subject <<endl;
   cout << "�� ID : " << book->book_id <<endl;
}
