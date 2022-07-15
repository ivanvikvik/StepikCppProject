/*

Даны длины сторон треугольника. Вычислите площадь треугольника.

Формат входных данных
Вводятся три вещественных числа.

Формат выходных данных
Выведите ответ на задачу.

Sample Input: 3 4 5
Sample Output: 6

Дополнительный материал тут: https://skysmart.ru/articles/mathematic/ploshad-treugolnika

Формула Герона для вычисления площади треугольника
Сначала необходимо подсчитать разность полупериметра и каждой его стороны.
Потом найти произведение полученных чисел, умножить результат на полупериметр 
и найти корень из полученного числа.

S = \sqrt{p \cdot (p - a) \cdot (p - b) \cdot (p - c)}
p — полупериметр, который можно найти по формуле: p=(a+b+c)÷2

*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(void) {
	double a, b, c;
	cin >> a >> b >> c;
	
	double p = (a + b + c) / 2;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	
	cout << setprecision(6) << fixed;
	cout << s;
	
	return 0;
}