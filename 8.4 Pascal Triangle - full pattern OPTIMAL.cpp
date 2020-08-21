#include<bits/stdc++.h>
using namespace std;


/*
int fact(int f)
{
	int res = 1;
	if (f == 0)
		return res;
	else
	{
		for (int i = 2; i <= f; i++)
			res *= i;

	}
	return res;
}

int ncr(int n , int r)
{
	return (fact(n) / (fact(r) * fact(n - r)));
}




*/
int32_t main()
{

//////////////////////////////////////start...............

// Here we will finally print the pascal triangle using previous approach with minimum time complexity
	// with O(r*log(r));

	int r;
	cin >> r;


	for (int j = 0; j < r; j++) {

		for (int k = 0; k < (r - j); k++)
			cout << " ";

		int n = j + 1;

		int p = 1;
		cout << p << " ";
		int q = 1;                // but this approach of mine is for small value of r; but better approach is below....

		for (int i = 1; i < n; i++)
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
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> r(numRows);
        for(int i=0;i<numRows;i++)
        {
            r[i].resize(i+1);
            r[i][0]= r[i][i]=1;
            
            for(int j=1;j<i;j++)
                r[i][j]=r[i-1][j-1]+r[i-1][j];
                
                
        }
        return r;
    }
};*/

