#include <iostream>
using namespace std;

/*
* Даны три целых числа.
* Найдите наибольшее из них (программа должна
* вывести ровно одно целое число). 
* Под наибольшим в этой задаче понимается число,
* которое не меньше, чем любое другое.
*/

int main(void) {
	int a, b, c;

	cin >> a >> b >> c;

	int max = c;

	if (a > b && a > c) {
		max = a;
	}
	else if (b > c) {
		max = b;
	}

	cout << max;

	return 0;
}
