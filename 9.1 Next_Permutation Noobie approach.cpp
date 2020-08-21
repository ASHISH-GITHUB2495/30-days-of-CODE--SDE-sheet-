#include<bits/stdc++.h>
using namespace std;


int32_t main()
{

//////////////////////////////////////start...............

//Here we are going to find the next permutation which is just greater than the number;
	//first approach we are going to use the stl library .

	vector<int> v;
	int n;
	cin >> n;

	while (n != 0)
	{
		v.push_back(n % 10);
		n /= 10;
	}

	reverse(v.begin(), v.end());
	next_permutation(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";


	return 0;

}
