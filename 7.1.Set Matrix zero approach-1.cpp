#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;




int32_t main()
{

	/* this program , as you have given n * m matrix , you have to make a row and column to zero if any elem foud to zero at their */

//APPROACH 1...

	int n, m;
	cin >> n >> m;

	int arr[n][m];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == 0)
			{
				for (int k = 0; k < n; k++)
					if (arr[i][k] != 0)
						arr[i][k] = -1;

				for (int k = 0; k < m; k++)
					if (arr[k][j] != 0)
						arr[k][j] = -1;
			}
		}
	}






	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == -1)
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

