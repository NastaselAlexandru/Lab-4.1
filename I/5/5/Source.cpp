#include <iostream>

using namespace std;

int main()
{
	int i;
	cout << ' ';
	for (i = 2; i <= 60; i++)
	{
		if (i < 60)
			cout << i << ',';
		else
			cout << i << '.' << '\n';
	}
	i = 2; cout << ' ';
	while (i <= 60)
	{
		if (i < 60)
			cout << i << ',';
		else
			cout<<i<<'.'<< '\n';
		i += 2;
	}
	i = 2; cout << ' ';
	do
	{
		if (i < 60)
			cout << i << ',';
		else
			cout << i << '.' << '\n';
		i += 2;
	} while (!(i <= 60));
	return 0;
		
}