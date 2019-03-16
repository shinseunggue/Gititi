#include <iostream>
#include <vector>

using namespace std;

void sol(int n) {
	int sum = 0;

	vector<int> ary(n);

	for (int i = 1; i < n + 1; i++) {
		int count = 0;
		for (int j = 1; j < i + 1; j++) {
			int a = i;
			if (a%j == 0) {
				count++;
			}
		}
		ary.at(i - 1) = count;
	}
	for (int i = 0; i < n; i++) {
		if (ary.at(i) % 2 == 1) {
			int b = ary.at(i);
			sum = sum + 1;
		}
	}
	cout << sum << endl;

}

int main() {
	int t = 0;
	int n = 0;

	cin >> t;

	vector<int> arr;

	for (int i = 0; i < t; i++) {
		cin >> n;
		arr.push_back(n);
	}

	for (int i = 0; i < t; i++) {
		int a = 0;
		a = arr.at(i);
		sol(a);
	}

	return 0;
}