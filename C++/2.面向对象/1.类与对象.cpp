#include <iostream>
using namespace std;
class Box
{
public:
	double height;
	double lenght;
	double width;
	//��Ա��������
	double get(void);
	void Set(double hei, double wid, double len);
};

double Box::get(void) {
	return height * lenght * width;
}

void Box::Set(double hei, double wid, double len) {
	height = hei;
	lenght = len;
	width = wid;
}

int main_1(void) {
	Box box1;
	double voulum = 0;
	box1.Set(1, 2, 3);
	voulum = box1.get();
	cout << "�����" << voulum;
	return 0;
}

