#include<bits/stdc++.h>
using namespace std;

int fact(int f)
{
	int res = 1;
	if (f == 0)
		return res;
	else
	{
		for (int i = 2; i <= f; i++)
			res *= i;

	}
	return res;
}

int ncr(int n , int r)
{
	return (fact(n) / (fact(r) * fact(n - r)));
}





int32_t main()
{

//////////////////////////////////////start...............

//Here the second apparoch where you have told to find the elements of pascal triangle at given row
	// here you will chose iterative method using combinaioins

	int r;
	cin >> r;


	for (int i = 1; i <= r; i++)
		cout << ncr(r - 1, i - 1) << " ";
	cout << endl;

///////////////////////end-.........................

	return 0;

}
