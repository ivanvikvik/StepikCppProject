#include <iostream>
using namespace std;

//ConditionalStatements/task05

/*
* ���� ��� ����������� ����� A, B, C. 
* ����������, ���������� �� ����������� 
* � ������ ���������. ���� ����������� ����������,
* �������� ������ YES, ����� �������� ������ NO.
*/

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;

	bool result = a + b > c && a + c > b && b + c > a;
	cout << (result ? "YES" : "NO");

	return 0;
}