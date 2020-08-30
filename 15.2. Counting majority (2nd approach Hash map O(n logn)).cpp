#include<bits/stdc++.h>
using namespace std;


int32_t main()
{
//Here we gonna make progrmm for getting element with occourc more than n/2 of array
	//approach 2 Hash map O(nlogn)  SC-O(n)

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	unordered_map <int, int> u;



	for (int i = 0; i < n; i++)
		u[arr[i]]++;

	int max = -1;
	int elem;

	for (auto i : u)
	{	if (max < i.second)
			max = i.second , elem = i.first;

	}

	cout << elem << endl;



	return 0;

}

