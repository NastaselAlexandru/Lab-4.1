#include <iostream>

using namespace std;

void f(int a, int b)
{
	int aux;
	aux = a;
	a = b;
	b = aux;
}
int main()
{
	int x, y;
	cin >> x >> y;
	cout << "x=" << x << '\n' << "y=" << y;
	f(x, y);
	cout << "x=" << x << '\n' << "y=" << y;
}