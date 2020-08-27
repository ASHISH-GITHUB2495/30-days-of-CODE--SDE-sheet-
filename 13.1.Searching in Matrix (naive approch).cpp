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


// Here is the naive approach .. applicable in both GFG and leetcode

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

	int flag = 1;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (mat[i][j] == key)
			{
				cout << "Element Found at : " << i << "," << j << " index" << endl;
				flag = 0;
			}


	if (flag == 1)
		cout << "Element not found \n";




	return 0;

}
