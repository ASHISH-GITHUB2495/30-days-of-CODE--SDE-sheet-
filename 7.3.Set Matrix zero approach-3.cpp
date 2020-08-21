#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;


int32_t main()
{

//////////////////////////////////////start...............
	/* this program , as you have given n * m matrix , you have to make a row and column to zero if any elem foud to zero at their */

//APPROACH 3...

	int n, m;
	cin >> n >> m;

	int arr[n][m];
	int col = 1;



	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];



	for (int i = 0; i < n; i++)
	{
		if (arr[i][0] == 0)
			col = 0;

		for (int j = 1; j < m; j++)
		{
			if (arr[i][j] == 0)
			{
				arr[0][j] = 0;
				arr[i][0] = 0;

			}
		}
	}



	for (int i = n - 1; i >= 0 ; i--)
	{
		for (int j = m - 1; j >= 0; j--)
		{
			if (arr[0][j] == 0 || arr[i][0] == 0)
				arr[i][j] = 0;
		}
		if (col == 0) arr[i][0] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";

		}
		cout << "\n";
	}



	return 0;

}

