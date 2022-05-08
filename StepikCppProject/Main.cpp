/*	Дано три числа. Упорядочите их в порядке неубывания.
* 
*	Формат входных данных
*	Вводятся три числа: a, b, c
* 
*	Формат выходных данных
*	Выведите ответ на задачу. 
* 
*	Sample Input 1: 3 1 2 
*	Sample Output 1: 1 2 3
* 
*	Sample Input 2: 1 2 1
*	Sample Output 3: 1 1 2
*/

#include <iostream>
using namespace std;

int main(void) {
	int a, b, c;
	int t;

	cin >> a >> b >> c;
	
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}

	if (b > c) {
		t = b;
		b = c;
		c = t;
	}

	if (a > b) {
		t = a;
		a = b;
		b = t;
	}

	cout << a << ' ' << b << ' ' << c;
	
	return 0;
}