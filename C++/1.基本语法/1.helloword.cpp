#include <iostream>
using namespace std; //告诉编译器使用 std 命名空间
//C++字节对齐
int main(void)
{
	struct RmLogItem
	{
	public:
		unsigned       itemHeader;   // Fixed 4 byte header byte                          4
		unsigned       sizeHeader;   // Size of this structure                            4
		unsigned short type;         // Identifer for the contained data type             2
		unsigned short version;      // Version for the data type                         2
		double         time;         // Time item creation                                8
		unsigned short compression;  // Compression type 0 = none, 1 = qCompress          2
		unsigned       originalSize; // Size of the payload prior to any compression      4
		unsigned       payloadSize;  // Size of the following payload                     4
	};
	RmLogItem item;
	cout << sizeof(item) << endl;  //40
	return 0;
}
