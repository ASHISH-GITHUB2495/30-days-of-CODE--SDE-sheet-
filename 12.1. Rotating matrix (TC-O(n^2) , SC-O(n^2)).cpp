#include<bits/stdc++.h>
using namespace std;


int32_t main()
{

//we have to rotate matrix in 90' ;
	// in O(n^2) and space complexity is O(n^2)

	int r, c;
	cin >> r >> c;

	int mat[r][c];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			cin >> mat[i][j];

	int mat2[r][c];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			mat2[j][c - 1 - i] = mat[i][j];
cout<<endl<<endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << mat2[i][j] << " ";
		cout << endl;
	}

system("pause");
	return 0;

}

