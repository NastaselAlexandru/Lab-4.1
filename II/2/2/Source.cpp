#include <iostream>
#include <cmath>
using namespace std;
float ecuatia_1(float a1, float a2, float a3, float a4, float X,int n)
{
	float ax, bx, cx, dx, sum;
	dx = a4;
	cx = X*a3;
	bx = a2*pow(X, 2);
	ax = a1*pow(X, n);
	sum = ax + bx + cx + dx;
	cout << sum;
}
float ecuatia_2(float a1, float a2, float a3, float X)
{
	float ax, bx, cx, sum;
	ax = X*X*a1;
	bx = a2*X;
	cx = cos(π*a3);
	sum = ax + bx + cx;
	cout << sum;
}
int main()
{
	float a, b, c, d, x;
	int n;
	cin >> n >> a >> b >> c >> d >> x;
	ecuatia_1(a, b, c, d, x, n);
	cout << '\n';
	ecuatia_2(a, b, c, x);
}//nu functioneaza cosinusul