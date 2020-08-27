#include<bits/stdc++.h>
using namespace std;



float binomial(float a, int n)
{
	float ans = 1;
	while (n)
	{
		if (n % 2 == 1)
			ans *= a , n--;

		else
			n /= 2 , a *= a;
	}

	return ans;



}


int32_t main()
{

//////////////////////////////////////start...............
// Here we gonna find the X^n
	// here is optimal approach in log2(n);
	//using binomial arithematic


	float x;
	int n;
	cout << "Enter value of X and n \n";
	cin >> x >> n;

	cout << "The answre is " << binomial(x, n) << endl;


	return 0;

}


