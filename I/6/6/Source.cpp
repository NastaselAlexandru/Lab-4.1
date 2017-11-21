#include <iostream>
#include <math.h>

using namespace std;

float ip(float a, float b)
{
	return sqrt(a*a + b*b);
}

int main()
{
	float cat1, cat2, ip;
	cin >> cat1 >> cat2;
	ip = ip(cat1, cat2);
	cout << ip;
}