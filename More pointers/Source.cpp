// Персональный шаблон проекта С++
#include <iostream>

using namespace std;

// функция меняет значения переданных двух адресов переменных местами
void pSwap(int *pn, int *pm) {
	int tmp = *pn;
	*pn = *pm;
	*pm = tmp;
}
// функция меняет значения переданных двух переменных местами
void refSwap(int &refn, int &refm) {
	int tmp = refn;
	refn = refm;
	refm = tmp;
}

void multiply(int &refn1, int &refn2, int num = 2) { // работаем не с копией, а с самой переменной благодаря ссылкам
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
	int* const pn = &n; // указатель-константа | константный указатель
	cout << pn << endl;
	*pn = 10;
	cout << *pn << endl;

	const int* pm = &m; // указатель на константу (через указатель менять значение переменной нельзя)
	const int* const superN = &n; // константный указатель на константу
	cout << superN << endl; 
	cout << *superN << endl;

	int &nref = n; // ссылка на переменную n
	// ссылки инициализируются сразу при создании. 
	// ссылки нельзя перенаправить на другие переменные
	// при обращении к ссылке мы получает значение переменной, на которую ссылка ведет
	// при добавлении & выводится адрес (cout << &nref)

	cout << nref << endl; // на экране 10
	int* pn = &n;
	cout << pn << endl; // на экране адрес 00FC... Чтобы получить значение нужна *
	nref = 15;
	cout << n << endl; // на экране 15
*/

	cout << n << " " << m << endl;
	cout << "Функция сработала\n";
	pSwap(&n, &m);
	cout << n << " " << m << endl << "--------\n";
	int a = 50, b = 60;
	cout << a << " " << b << endl;
	refSwap(a, b);
	cout << "Функция сработала\n";
	cout << a << " " << b << endl << endl;


	multiply(a, b);
	cout << a << " " << b << endl;


	return 0;
}