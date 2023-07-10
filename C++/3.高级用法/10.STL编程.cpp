#include <iostream>
#include <vector>
using namespace std;
int main_10()
{
   vector<int> vec;//创建一个向量存储 int
   int i;
   cout << "vector size = " << vec.size() << endl;//显示 vec 的原始大小
   for(i = 0; i < 5; i++){
      vec.push_back(i);  // 推入 5 个值到向量中
   }
   // 显示 vec 扩展后的大小
   cout << "extended vector size = " << vec.size() << endl;
   for(i = 0; i < 5; i++){                //访问向量中的 5 个值
      cout << "value of vec [" << i << "] = " << vec[i] << endl;
   }
   vector<int>::iterator v = vec.begin();//使用迭代器 iterator 访问值
   while( v != vec.end()) {
      cout << "value of v = " << *v << endl;
      v++;
   }
   return 0;
}
