#include <iostream>
#include <Windows.h>

int main()
{
	using namespace std;
	int i = 0;
	int num = 0;
	while (i < 100)
	{
		i++;
		num += i;
	}
	cout << num << endl;
	system("pause");
	return 0;
}