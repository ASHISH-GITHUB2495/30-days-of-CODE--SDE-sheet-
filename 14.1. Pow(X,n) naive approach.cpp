#include<bits/stdc++.h>
using namespace std;





int32_t main()
{

// Here we gonna find the X^n
	// here is naive approach


	int x, n;
	cout << "Enter value of X and n \n";
	cin >> x >> n;

	int ans = 1 ;

	//we will keep multiplying x with it self upto n;

	while (n--)
		ans *= x;

	cout << "The required answer is " << ans << endl;



	return 0;

}

