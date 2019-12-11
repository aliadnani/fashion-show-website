#include <iostream>
using namespace std;

class ratNo {
};

void loop() {
	int a, b, c, d;
	int ret;
	cout << "Input a/b" << endl;
	cin >> a >> b;
	cout << "Input c/d" << endl;
	cin >> c >> d;
	if (a * d > b * c) {
		ret = 1;
	}

	if (a * d == b * c) {
		ret = 0;
	}

	if (a * d < b * c) {
		ret = -1;
	}

	cout << ret << endl;
}


int main() {
	while (true) {
		loop();
	}
}