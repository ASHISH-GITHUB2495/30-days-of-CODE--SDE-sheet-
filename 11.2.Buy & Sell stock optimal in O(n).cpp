#include<bits/stdc++.h>
using namespace std;

int32_t main()
{

//////////////////////////////////////start...............

// buy or sell stock

//naive approach in O(n^2)

	int n;   // size of array
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int profit = 0; int minPrice = INT_MAX;

	for (int i = 1; i < n; i++)
	{
		minPrice = min(arr[i], minPrice);

		profit = max(profit, arr[i] - minPrice);
	}
	cout << "Max profit gain is " << profit << endl;

	return 0;

}

