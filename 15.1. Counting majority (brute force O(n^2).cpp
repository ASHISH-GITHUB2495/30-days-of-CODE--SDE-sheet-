#include<bits/stdc++.h>
using namespace std;



int32_t main()
{

	
//Here we gonna make progrmm for getting element with occourc more than n/2 of array
	//approach 1 brute force O(n^2)  SC-O(1)

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int maxx = -1;
	int elem;


	for (int i = 0; i < n; i++)
	{	int count = 0;
		for (int j = 0; j < n; j++)
			if (arr[i] == arr[j])
				count++;
		if (maxx < count)
			elem = arr[i] , maxx = count;
	}

	cout << elem << endl;



	return 0;

}


