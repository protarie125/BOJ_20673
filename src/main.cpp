#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int p, q;
	cin >> p >> q;

	if (p <= 50 && q <= 10) {
		cout << "White";
		return 0;
	}

	if (30 < q) {
		cout << "Red";
		return 0;
	}

	cout << "Yellow";

	return 0;
}