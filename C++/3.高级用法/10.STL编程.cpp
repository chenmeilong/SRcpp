#include <iostream>
#include <vector>
using namespace std;
int main_10()
{
   vector<int> vec;//����һ�������洢 int
   int i;
   cout << "vector size = " << vec.size() << endl;//��ʾ vec ��ԭʼ��С
   for(i = 0; i < 5; i++){
      vec.push_back(i);  // ���� 5 ��ֵ��������
   }
   // ��ʾ vec ��չ��Ĵ�С
   cout << "extended vector size = " << vec.size() << endl;
   for(i = 0; i < 5; i++){                //���������е� 5 ��ֵ
      cout << "value of vec [" << i << "] = " << vec[i] << endl;
   }
   vector<int>::iterator v = vec.begin();//ʹ�õ����� iterator ����ֵ
   while( v != vec.end()) {
      cout << "value of v = " << *v << endl;
      v++;
   }
   return 0;
}
