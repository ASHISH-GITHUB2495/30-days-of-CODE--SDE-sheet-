#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;


int32_t main()
{

//////////////////////////////////////start...............
	/* this program , as you have given n * m matrix , you have to make a row and column to zero if any elem foud to zero at their */

//APPROACH 2...

	int n, m;
	cin >> n >> m;

	int arr[n][m];
	int row[n];
	int col[m];

	fill(row, row + n, 1);
	fill(col, col + m, 1);


	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];



	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == 0)
			{
				row[i] = 0;
				col[j] = 0;

			}
		}
	}





	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (row[i] == 0 || col[j] == 0)
				arr[i][j] = 0;
		}
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


