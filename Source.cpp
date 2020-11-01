#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N ;
	double S;
	
	cout << "N = "; cin >> N;
	
	S = 1;
	k = 1;
	while (k <= N)
	{
		S += 1 /(2.0*k+1)*(2.0*k+1);
		k++;
	}
	cout << S << endl;

		S = 1;
	k = 1;
	do {
		S += 1 / (2.0 * k + 1) * (2.0* k + 1);
		k++;
	} while (k <= N);
	cout << S << endl;
	S = 1;
	for (k=1; k <= N; k++)
	{
		S += 1 / (2.0 * k + 1) * (2.0 * k + 1);
	}
	cout << S << endl;
	S = 1;
	for (k=N; k--;)

	{
		S += 1 / (2.0 * k + 1) * (2.0 * k + 1);
	}
	cout << S << endl;
	return 0;
}