#include <iostream>
using namespace std;
class printData
{
   public:
      void print(int i) {
        cout << "����Ϊ: " << i << endl;
      }
      void print(double  f) {
        cout << "������Ϊ: " << f << endl;
      }
      void print(char c[]) {
        cout << "�ַ���Ϊ: " << c << endl;
      }
};
int main_7(void)
{
   printData pd;
   pd.print(5); // �������
   pd.print(500.263);   // ���������
   char c[] = "Hello C++";   // ����ַ���
   pd.print(c);
   return 0;
}
