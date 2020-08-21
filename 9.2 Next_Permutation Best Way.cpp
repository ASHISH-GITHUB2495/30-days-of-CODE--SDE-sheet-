#include<bits/stdc++.h>
using namespace std;


void swap(vector<int>& v , int i, int j)
{
	int temp = v[i];
	v[i] = v[j];
	v[j] = temp;
	return ;

}

void reverse(vector<int> & v, int i, int j)
{
	while (i < j)
		swap(v, i++, j--);
}
int32_t main()
{

//Here we are going to find the next permutation which is just greater than the number;
	//first interview approach we are going to use the stl library .

	vector<int> v;
	int n;
	cin >> n;

	while (n != 0)
	{
		v.push_back(n % 10);
		n /= 10;
	}

	reverse(v.begin(), v.end());
	//Striver_79 approach
	int i = v.size() - 2;
	while (i >= 0 && v[i] >= v[i + 1])i--;
	if (i >= 0)
	{
		int j = v.size() - 1;
		while (v[j] < v[i]) j--;

		swap(v, i, j);

	}
	reverse(v, i + 1, v.size() - 1);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout<<endl;




	return 0;

}

