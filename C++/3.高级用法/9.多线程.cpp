
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
 
 
DWORD WINAPI ThreadProFunc(LPVOID lpParam);
 
int main_9(int argc, char **argv)
{
	HANDLE hThread;
	DWORD dwThreadId;
	
	hThread = CreateThread( NULL	// Ĭ�ϰ�ȫ����
						, NULL		// Ĭ�϶�ջ��С
						, ThreadProFunc // �߳���ڵ�ַ
						, NULL	//���ݸ��̺߳����Ĳ���
						, 0		// ָ���߳���������
						, &dwThreadId	//�߳�ID��
						);
 
	for(int i = 0; i < 4; i++) {
		printf("nihao\n");
	}
 
	CloseHandle(hThread);	//�ر��߳̾�����ں����ü�����һ
 
	system("pause");
	return 0;
}
 
DWORD WINAPI ThreadProFunc(LPVOID lpParam)
{
	for(int i = 0; i < 4; i++) {
		printf("hello\n");
	}
	return 0;
}