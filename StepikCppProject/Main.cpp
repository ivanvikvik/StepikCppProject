#include <iostream>
using namespace std;

/*
* Даны три натуральных числа A, B, C. 
* Определите, существует ли треугольник 
* с такими сторонами. Если треугольник существует,
* выведите строку YES, иначе выведите строку NO.
*/

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;

	bool result = a + b > c && a + c > b && b + c > a;
	cout << (result ? "YES" : "NO");

	return 0;
}
