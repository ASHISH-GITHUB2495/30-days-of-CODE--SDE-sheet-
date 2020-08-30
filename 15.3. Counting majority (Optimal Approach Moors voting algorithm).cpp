#include<bits/stdc++.h>
using namespace std;


int32_t main()
{

//Here we gonna make progrmm for getting element with occourc more than n/2 of array
	//approach 3 moors voting algorithm O(n)  SC-O(1)

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];



	int cnt = 0; int elem;
	for (int i = 0; i < n; i++)
	{
		if (cnt == 0)
		{
			elem = arr[i];

		}
		if (elem == arr[i])
			cnt++;
		else
			cnt--;
	}

	cout << elem << endl;



	return 0;

}

