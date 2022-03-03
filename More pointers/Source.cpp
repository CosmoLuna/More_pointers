// ������������ ������ ������� �++
#include <iostream>

using namespace std;

// ������� ������ �������� ���������� ���� ������� ���������� �������
void pSwap(int *pn, int *pm) {
	int tmp = *pn;
	*pn = *pm;
	*pm = tmp;
}
// ������� ������ �������� ���������� ���� ���������� �������
void refSwap(int &refn, int &refm) {
	int tmp = refn;
	refn = refm;
	refm = tmp;
}

void multiply(int &refn1, int &refn2, int num = 2) { // �������� �� � ������, � � ����� ���������� ��������� �������
	refn1 *= num;
	refn2 *= num;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10, m = 15;

	/*int* pn = &n;
	if (pn!= nullptr)
		cout << pn << endl;

	const float pi = 3.14;
	int* const pn = &n; // ���������-��������� | ����������� ���������
	cout << pn << endl;
	*pn = 10;
	cout << *pn << endl;

	const int* pm = &m; // ��������� �� ��������� (����� ��������� ������ �������� ���������� ������)
	const int* const superN = &n; // ����������� ��������� �� ���������
	cout << superN << endl; 
	cout << *superN << endl;

	int &nref = n; // ������ �� ���������� n
	// ������ ���������������� ����� ��� ��������. 
	// ������ ������ ������������� �� ������ ����������
	// ��� ��������� � ������ �� �������� �������� ����������, �� ������� ������ �����
	// ��� ���������� & ��������� ����� (cout << &nref)

	cout << nref << endl; // �� ������ 10
	int* pn = &n;
	cout << pn << endl; // �� ������ ����� 00FC... ����� �������� �������� ����� *
	nref = 15;
	cout << n << endl; // �� ������ 15
*/

	cout << n << " " << m << endl;
	cout << "������� ���������\n";
	pSwap(&n, &m);
	cout << n << " " << m << endl << "--------\n";
	int a = 50, b = 60;
	cout << a << " " << b << endl;
	refSwap(a, b);
	cout << "������� ���������\n";
	cout << a << " " << b << endl << endl;


	multiply(a, b);
	cout << a << " " << b << endl;


	return 0;
}