#include<bits/stdc++.h>
using namespace std;



int32_t main()
{

// Here we gonna deal with searching in 2d matrix ....
	/*
	where properties of matrix are:
	GFG : the row elements are sorted from left to right;
	      column elemts are also sorted from top to bottom;

	LeetCode : the row elements are sorted from left to right
	          the first elements of row to greater then the last element of previous row
	*/


// Here is the OPTIMAL approach .. applicable in both Leetcode type of this question


	int r, c;
	cout << "Enter row and coloumn size\n";
	cin >> r >> c;
	int mat[r][c];
	cout << "Enter elements\n";
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			cin >> mat[i][j];

	int key;
	cout << "Enter element to search\n";
	cin >> key;



	//let whole matrix be a sigle 1d array;

	int flag = 1;
	int low = 0 , high = (r * c) - 1;

	while (low <= high)
	{
		// access row as mid/column_size and access column as mid%column_size
		int mid = (low + (high - low) / 2);
		if (mat[mid / c][mid % c] == key)
		{
			cout << "Element found at " << mid / c << "," << mid % c << endl;
			flag = 0;
			break;
		}
		else if (mat[mid / c][mid % c] < key)
			low = mid + 1;
		else
			high = mid - 1;
	}







	if (flag == 1)
		cout << "Element not found \n";

	return 0;

}


