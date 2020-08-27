#include<bits/stdc++.h>
using namespace std;


/*
long long int fact(long long int f)
{
	long long int res = 1;
	if (f == 0)
		return res;
	else
	{
		for (long long int i = 2; i <= f; i++)
			res *= i;

	}
	return res;
}

long long int ncr(long long int n , long long int r)
{
	return (fact(n) / (fact(r) * fact(n - r)));
}




*/
int32_t main()
{

//////////////////////////////////////start...............

// Here we will finally prlong long int the pascal triangle using previous approach with minimum time complexity
	// with O(r*log(r));

	unsigned long long int r;
	cin >> r;


	for (unsigned long long int j = 0; j < r; j++) {

		for (unsigned long long int k = 0; k < (r - j); k++)
			cout << " ";

	unsigned	long long int n = j + 1;

	unsigned	long long int p = 1;
		cout << p << " ";
		unsigned long long int q = 1;                // but this approach of mine is for small value of r; but better approach is below....

		for (unsigned long long int i = 1; i < n; i++)
		{

			p = p * (n - i); q *= i;

			cout << p / q << " ";

		}
		cout << endl;
}
	return 0;

}



               //LEET CODE SOLUTION STRIVER_79
/*
class Solution {
public:
    vector<vector<long long int>> generate(long long int numRows)
    {
        vector<vector<long long int>> r(numRows);
        for(long long int i=0;i<numRows;i++)
        {
            r[i].resize(i+1);
            r[i][0]= r[i][i]=1;
            
            for(long long int j=1;j<i;j++)
                r[i][j]=r[i-1][j-1]+r[i-1][j];
                
                
        }
        return r;
    }
};*/

