#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map        //hashing container
#define bbit bitset <64>    // convert to binary as after it a(n); alloted to a


// repeating and missing number

int32_t main()
{

// optimal approach xor property....
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int num = 0; // xoring aint the array elements

	for (int i = 0; i < n; i++)
		num = num ^ arr[i] ;



	for (int i = 1; i <= n; i++) // xoring from 1 to n
		num = num ^ i;

	//now left over is missing and repeation ones  (X^Y = num)

	//now find the rightmost bit of the num
	int idx;
	for (int i = 0; i < 32; i++)
		if (num & (1 << i))
		{
			idx = (1 << i);
			break;

		}


	int  x = 0 , y = 0;

	// separating in buckets and xoring them
	for (int i = 0; i < n; i++)
	{
		if (arr[i]&idx)
			x ^= arr[i];
		else
			y ^= arr[i];

	}
	for (int i = 1; i <= n; i++)
	{
		if (i & idx)
			x ^= i;
		else
			y ^= i;

	}


	cout << "Missing number = " << x << endl;
	cout << "Repeating number = " << y << endl;
    

	return 0;

}

