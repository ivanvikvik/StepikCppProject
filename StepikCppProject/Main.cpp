#include <iostream>
using namespace std;

/*
* Даны два целых числа.
* Программа должна вывести единицу, 
* если первое число больше второго, 
* двойку, если второе больше первого,
* или ноль, если они равны. 
*/

int main(void) {
	int a, b;
	cin >> a >> b;

	//cout << (a > b ? 1 : (b > a ? 2 : 0));
	cout << (a != b) + (b > a);

	return 0;
}
