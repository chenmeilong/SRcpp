#include <iostream>
using namespace std;
int main_9 ()
{
    int  var;
    int  *ptr;
    int  **pptr;
    var = 3000;
    // 获取 var 的地址
    ptr = &var;
    // 使用运算符 & 获取 ptr 的地址
    pptr = &ptr;
    // 使用 pptr 获取值
    cout << "var 值为 :" << var << endl;
    cout << "*ptr 值为:" << *ptr << endl;
    cout << "**pptr 值为:" << **pptr << endl;
    return 0;
}
