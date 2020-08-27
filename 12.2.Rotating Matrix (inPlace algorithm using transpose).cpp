#include<bits/stdc++.h>
using namespace std;



int32_t main()
{

//////////////////////////////////////start...............

//we have to rotate matrix in 90' ;
	// it is also O(n^2) but in place algorithm no extra memory;
	//first transpose row to column then reverse every row;



	int r, c;
	cin >> r >> c;

	int mat[r][c];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			cin >> mat[i][j];


	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < i; j++)
		{	int temp = mat[i][j];
			mat[i][j] = mat[j][i];
			mat[j][i] = temp;
		}
	}// transpose done;

	for (int i = 0; i < r; i++)
		for (int j = 0; j <= c / 2; j++)
			swap(mat[i][j], mat[i][c - 1 - j]); //reversing each row;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << mat[i][j] << " ";
		cout << endl;
	}



	return 0;

}

