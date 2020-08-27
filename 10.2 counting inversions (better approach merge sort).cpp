#include<bits/stdc++.h>
using namespace std;




int merge(int arr[], int temp[], int left , int mid , int right)
{
	int i , j, k; int inv_count = 0;
	i = left;
	j = mid;
	k = left;

	while ((i <= mid - 1) && (j <= right))
	{
		if (arr[i] <= arr[j])
		{temp[k++] = arr[i++];}

		else {
			temp[k++] = arr[j++];            // here is the twist
			inv_count = inv_count + (mid - i);
		}
	}


	while (i <= mid - 1)
		temp[k++] = arr[i++];

	while (j <= right)
		temp[k++] = arr[j++];

	for (int i = left; i <= right; i++)
		arr[i] = temp[i];

	return inv_count;


}


int mergeSort(int arr[], int temp[], int left, int right)
{
	int inv_count = 0; int mid;
	if (right > left)
	{
		mid = (right + left) / 2;

		inv_count += mergeSort(arr, temp, left, mid);
		inv_count += mergeSort(arr, temp, mid + 1, right);


		inv_count += merge(arr, temp, left, mid + 1, right);
	}


	return inv_count;


}

int32_t main()
{


// we have to count the a[i]>a[j] where i<j;

//naive approach in O(n^2)

	int n;   // size of array
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int temp[n];
	cout << "Total no. of inversions are " << mergeSort(arr, temp, 0, n - 1) << endl;

	return 0;

}

