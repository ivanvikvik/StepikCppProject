#include <iostream>
using namespace std;

/*
* ƒаны три целых числа.
* Ќайдите наибольшее из них (программа должна
* вывести ровно одно целое число). 
* ѕод наибольшим в этой задаче понимаетс€ число,
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