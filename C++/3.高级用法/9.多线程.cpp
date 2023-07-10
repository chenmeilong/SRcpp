
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
 
 
DWORD WINAPI ThreadProFunc(LPVOID lpParam);
 
int main_9(int argc, char **argv)
{
	HANDLE hThread;
	DWORD dwThreadId;
	
	hThread = CreateThread( NULL	// 默认安全属性
						, NULL		// 默认堆栈大小
						, ThreadProFunc // 线程入口地址
						, NULL	//传递给线程函数的参数
						, 0		// 指定线程立即运行
						, &dwThreadId	//线程ID号
						);
 
	for(int i = 0; i < 4; i++) {
		printf("nihao\n");
	}
 
	CloseHandle(hThread);	//关闭线程句柄，内核引用计数减一
 
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