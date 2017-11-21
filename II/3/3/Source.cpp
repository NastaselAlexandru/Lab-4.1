#include <iostream>

using namespace std;
int i, j, a[2][31];
void average(int v[2][31])
{
	float mmin, mmax, sum1=0, sum2=0;

	for (i = 1; i <= 31; i++)
		sum1 += v[1][i];
	mmax = sum1 / 31;

	for (i = 1; i <= 31; i++)
		sum2 += v[2][i];
	mmin = sum2 / 31;
	cout << mmin << ' ' << mmax;
}
void max_min(int v[2][31])
{
	int max = v[1][1], min = v[2][1];

	for (i = 2; i <= 31; i++)
	{
		if (max <= v[1][i]) max = v[1][i];
	}

	for (i = 2; i <= 31; i++)
	{
		if (min >= v[2][i]) min = v[2][i];
	}
	cout << max << ' ' << min;
}
int main()
{
	j = 1;
	for (i = 1; i <= 31; i++)
		cin >> a[1][i];
	for (i = 1; i <= 31; i++)
		cin >> a[2][i];
	average(a);
	max_min(a);
	return 0;
}