#include <iostream>
using namespace std;

/*
* ���� ��� ����� �����.
* ������� ���������� �� ��� (��������� ������
* ������� ����� ���� ����� �����). 
* ��� ���������� � ���� ������ ���������� �����,
* ������� �� ������, ��� ����� ������.
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