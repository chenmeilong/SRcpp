#include <iostream>
using namespace std;
int main_9 ()
{
    int  var;
    int  *ptr;
    int  **pptr;
    var = 3000;
    // ��ȡ var �ĵ�ַ
    ptr = &var;
    // ʹ������� & ��ȡ ptr �ĵ�ַ
    pptr = &ptr;
    // ʹ�� pptr ��ȡֵ
    cout << "var ֵΪ :" << var << endl;
    cout << "*ptr ֵΪ:" << *ptr << endl;
    cout << "**pptr ֵΪ:" << **pptr << endl;
    return 0;
}
