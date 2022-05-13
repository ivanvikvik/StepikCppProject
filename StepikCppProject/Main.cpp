/*	Задание 14. Boxes
*
*	Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2.
*	Определите, можно ли разместить одну из этих коробок внутри другой, при условии,
*	что поворачивать коробки можно только на 90 градусов вокруг ребер.
*
*	Предварительные условия:
*	1)	размеры коробок - числа натуральные;
*	2)	стенки коробок имеют нулевую толщину;
*	3)	одна коробка не может "выглядывать" из другой, она должна помещаться в ней полностью,
*		однако признак вложенности допускает равенство одного или двух соответствующих сторон
*		коробок (но не всех трёх одновременно, потому что тогда коробки будут считаться
*		одинаковыми);
*	4)	объёмы коробок не могут служить надёжным критерием для их сравнения!
*
*	Формат входных данных
*	Программа получает на вход числа A1, B1, C1, A2, B2, C2.
*
*	Формат выходных данных
*	Программа должна вывести одну из следующих строчек:
*	Boxes are equal, если коробки одинаковые,
*	The first box is smaller than the second one, если первая коробка может быть положена во вторую,
*	The first box is larger than the second one, если вторая коробка может быть положена в первую,
*	Boxes are incomparable, во всех остальных случаях.
*
*	Sample Input 1: 1 2 3 3 2 1
*	Sample Output 1: Boxes are equal.
*
*	Sample Input 2: 2 2 3 3 2 1
*	Sample Output 2: The first box is larger than the second one.
*
*	Sample Input 3: 3 2 1 2 2 3
*	Sample Output 3: The first box is smaller than the second one.
*/

#include <iostream>
using namespace std;

int main(void) {
	int a1, b1, c1, a2, b2, c2;
	int t;

	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

	if (a1 > b1) { t = a1; a1 = b1; b1 = t; }

	if (b1 > c1) { t = b1; b1 = c1; c1 = t; }

	if (a1 > b1) { t = a1; a1 = b1; b1 = t; }

	if (a2 > b2) { t = a2; a2 = b2; b2 = t; }

	if (b2 > c2) { t = b2; b2 = c2; c2 = t; }

	if (a2 > b2) { t = a2; a2 = b2; b2 = t; }

	if (a1 == a2 && b1 == b2 && c1 == c2) {
		cout << "Boxes are equal";
	}
	else if (a1 >= a2 && b1 >= b2 && c1 >= c2) {
		cout << "The first box is larger than the second one";
	}
	else if (a1 <= a2 && b1 <= b2 && c1 <= c2) {
		cout << "The first box is smaller than the second one";
	}
	else {
		cout << "Boxes are incomparable";
	}

	return 0;
}