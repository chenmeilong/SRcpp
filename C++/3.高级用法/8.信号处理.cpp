#include <iostream>
#include <csignal>
#include<windows.h>

using namespace std;
void signalHandler( int signum )
{
   cout << "Interrupt signal (" << signum << ") received.\n";
   exit(signum);   // �����ر� // ��ֹ����
}
int main_8()
{
    signal(SIGINT, signalHandler);  // ע���ź� SIGINT ���źŴ������
    while(1){
       cout << "Going to sleep...." << endl;
       Sleep(1);
    }
    return 0;
}
