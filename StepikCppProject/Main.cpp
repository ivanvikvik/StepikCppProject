/*

Последовательность Фибоначчи определяется так:
F(0) = 0, F(1) = 1, F(2) = 1, F(3) = 2, F(4) = 3, F(5) = 5, …, F(n) = F(n−1) + F(n−2).

Дано натуральное число A. Определите, каким по счету числом Фибоначчи оно является, 
то есть выведите такое число N, что F(N) = A.
Если А не является числом Фибоначчи, выведите число -1.

Формат входных данных
Вводится число A > 1.

Формат выходных данных
Выведите ответ на задачу.

Sample Input: 8
Sample Output: 6

0->0, 1->1, 2->1, 3->2, 4->3, 5->5, 6->8, 7->13, 8->21, 9->34, 10->55, 
11->89, 12->144, 13->233, 14->377, 15->610, ..., 25->75025

*/

#include <iostream>
using namespace std;

int main(void) {
	int number;
	cin >> number;
	int first = 0;
	int second = 1;
	int result = -1;

	if (number < 2) {
		cout << number;
	}
	else {
		int i = 2;
		while (second < number) {
			int t = first + second;
			first = second;
			second = t;
			if (second == number) {
				result = i;
				break;
			}
			i++;
		}

		cout << result;
	}

	return 0;
}