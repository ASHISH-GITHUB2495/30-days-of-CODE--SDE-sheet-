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


// Here is the 2nd approach .. applicable in both GFG and leetcode
	//we will apply binary search in each row

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

	int i = 0;
	int flag = 1;
	while (i < r)
	{
		int low = 0 , high = c - 1;

		while (low <= high)
		{
			int mid = (low + (high - low) / 2) ;

			if (mat[i][mid] == key)
			{
				cout << "Element found at index " << i << "," << mid << endl;
				flag = 0;
				break;
			}
			else if (mat[i][mid] < key)
				low = mid + 1;
			else
				high = mid - 1;


		}

		if (flag == 0)
			break;

		i++;
	}





	if (flag == 1)
		cout << "Element not found \n";



	return 0;

}

