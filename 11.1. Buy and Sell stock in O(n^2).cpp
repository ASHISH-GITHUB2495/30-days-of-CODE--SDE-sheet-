#include<bits/stdc++.h>
using namespace std;






int32_t main()
{

// buy or sell stock

//naive approach in O(n^2)

	int n;   // size of array
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int profit = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + i; j < n; j++)
			profit = max(profit, arr[j] - arr[i]);
	}

	cout << "Max profit gain is " << profit << endl;

	return 0;

}

