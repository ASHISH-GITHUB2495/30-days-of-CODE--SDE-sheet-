#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;






int32_t main()
{

// we have to count the a[i]>a[j] where i<j;

//naive approach in O(n^2)

	int n;   // size of array
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];

	int inv_count = 0;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (arr[i] > arr[j])
				inv_count++;

	}

	cout << "Total no. of inversions are " << inv_count << endl;

	return 0;

}

