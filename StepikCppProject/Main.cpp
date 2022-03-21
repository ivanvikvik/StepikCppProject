#include <iostream>
using namespace std;

/*
* ƒаны три целых числа. 
* ќпределите, сколько среди них совпадающих.
* ѕрограмма должна вывести одно из чисел:
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