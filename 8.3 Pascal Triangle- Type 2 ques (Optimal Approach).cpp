#include<bits/stdc++.h>
using namespace std;

/*
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




*/
int32_t main()
{

//////////////////////////////////////start...............

//Here the second apparoch where you have told to find the elements of pascal triangle at given row
	// here you will use optimal approach to print the row

	long long int r;
	cin >> r;

	long long int p = 1;
	cout << p << " ";
	long long int q = 1;

	for (long long int i = 1; i < r; i++)
	{

		p = p * (r - i); q *= i;

		cout << p / q << " ";

	}
	cout << endl;

///////////////////////end-.........................

	return 0;

}

