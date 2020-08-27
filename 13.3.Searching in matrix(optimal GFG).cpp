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


// Here is the OPTIMAL approach .. applicable in GFG type of this question


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

	int i = 0 , j = c - 1;

	while (i < r && j >= 0)
	{
		if (mat[i][j] == key)
		{
			cout << "Element is found at index " << i << "," << j << endl;
			flag = 0;
			break;
		}
		else if (mat[i][j] < key)
			i++;
		else
			j--;

	}



	if (flag == 1)
		cout << "Element not found \n";

	return 0;

}

