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

//Here the first apparoch where you have told to find the element of pascal triangle at given row and column
	// the you will fing it by r-1Cc-1  (nCr) types

	int r, c;
	cin >> r >> c;

	cout << ncr(r - 1, c - 1) << endl;

///////////////////////end-.........................

	return 0;

}

