#include <bits/stdc++.h>
using namespace std;

int main (void) {

	int n;
	int tmp;
	int max = 0;
	int search = 1;
	int actualsearch = 1;
	int days = 0;
	int size = 0;

	vector<int> numbers;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		numbers.push_back(tmp);
	}

	sort (numbers.begin(), numbers.end());
	size = numbers.size();
	max = numbers[size-1];
	
	for (auto it = numbers.begin(); it != numbers.end(); it++) {
		if (actualsearch > max) break;
		if (actualsearch > *it) continue;
		search = actualsearch;

		while ( search <= *it) {
			if ( *it == search ) {
				days++;
				break;
			}
			else search++;
		}
		actualsearch++;
	}

	cout << days << endl;

	return 0;
}
