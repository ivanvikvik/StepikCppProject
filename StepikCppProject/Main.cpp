#include <iostream>
using namespace std;

/*
* Даны три целых числа. 
* Определите, сколько среди них совпадающих.
* Программа должна вывести одно из чисел:
* 3 (если все совпадают), 2 (если два совпадает) 
* или 0 (если все числа различны). 
*/

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;

	int result = 0;

	if (a == b && b == c) {
		result = 3;
	}
	else if (a == b || b == c || a == c) {
		result = 2;
	}

	cout << result;

	return 0;
}
