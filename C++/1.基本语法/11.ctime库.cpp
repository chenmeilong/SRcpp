#include <iostream>
#include <ctime>
using namespace std;
int main_11( )
{
   time_t now = time(0);// ���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
   cout << "1970 ��Ŀǰ��������:" << now << endl;
   tm *ltm = localtime(&now);// ��� tm �ṹ�ĸ�����ɲ���
   cout << "��: "<< 1900 + ltm->tm_year << endl;
   cout << "��: "<< 1 + ltm->tm_mon<< endl;
   cout << "��: "<<  ltm->tm_mday << endl;
   cout << "ʱ��: "<< ltm->tm_hour << ":";
   cout << ltm->tm_min << ":";
   cout << ltm->tm_sec << endl;
   return 0;
}
