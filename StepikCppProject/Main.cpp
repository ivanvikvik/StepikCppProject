#include <iostream>
using namespace std;

/*
* ���� ��� ����� �����. 
* ����������, ������� ����� ��� �����������.
* ��������� ������ ������� ���� �� �����:
* 3 (���� ��� ���������), 2 (���� ��� ���������) 
* ��� 0 (���� ��� ����� ��������). 
*/

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;

	int result = 0;

	if (a == b && b == c) {
		result = 3;
	}
	else if (a == b || b == c || a == c) {
		result = 2;
	}

	cout << result;

	return 0;
}