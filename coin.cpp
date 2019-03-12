/11047 동전문제
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int k, n = 0;
	int j;
	int ans = 0;
	int val = 0;
	vector<int> arry;

	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> j;
		arry.push_back(j);
	}

	for (int i = 0; i < n; i++) {
		if (k / arry[n - 1 - i] >= 1) {
			val = k / arry[n - 1 - i];
			ans = ans + val;
			k = k - (arry[n - 1 - i])*val;
		}
	}

	cout << ans;

	return 0;
}