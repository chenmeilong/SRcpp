#include <iostream>
using namespace std;
int main_3 ()
{
   double* pvalue  = NULL; // ��ʼ��Ϊ null ��ָ��
   pvalue  = new double;   // Ϊ���������ڴ�
   *pvalue = 29494.99;     // �ڷ���ĵ�ַ�洢ֵ
   cout << "Value of pvalue : " << *pvalue << endl;
   delete pvalue;         // �ͷ��ڴ�
   return 0;
}
//int *array=new int [m];//��̬����,���鳤��Ϊ m
//delete [] array;  //�ͷ��ڴ�

/*
int **array
// �ٶ������һά����Ϊ m�� �ڶ�ά����Ϊ n
// ��̬����ռ�
array = new int *[m];
for( int i=0; i<m; i++ )
{
    array[i] = new int [n]  ;
}
//�ͷ�
for( int i=0; i<m; i++ )
{
    delete [] array[i];
}
delete [] array;
*/
