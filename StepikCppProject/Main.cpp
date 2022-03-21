#include <iostream>
using namespace std;

/*	Даны два целых числа. 
	Выведите значение наибольшего из них. 
	Если числа равны, выведите любое из них. */

int main(void) {
	int a, b;

	cin >> a >> b;
	cout << (a > b ? a : b);

	return 0;
}