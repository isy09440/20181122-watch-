#include <iostream>

using namespace std;

class watch
{public:
	int hour;
	int minute;
	int second;
	watch (int h, int m, int s);
	void getTime();
};

watch::watch(int h, int m, int s)
{	
	hour = h;
	minute = m;
	second = s;
};

void watch::getTime()
{
	cout << hour << "hour ";
	cout << minute << "minutes ";
	cout << second << "seconds" << endl;
};

int main()
{
	class watch *abc = new watch(1, 23, 45);
	abc -> getTime();

	return 0;
}
