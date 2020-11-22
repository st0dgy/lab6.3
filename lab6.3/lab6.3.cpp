#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>

using namespace std;

// 1 спосіб
void create(int* a, const int n, const int min, const int max)
{
	for (int i = 0; i < n; i++)
		a[i] = min + rand() % (max - min + 1);
}


void print(int* a, const int n)
{
	for (int i = 0; i < n; i++)
		cout << " " << a[i] << "; ";
	cout << endl;
}

template <typename T>
T inverse(T* a, const int n)
{
	T tmp;
	for (int i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[i + 1];
		a[i + 1] = tmp;
		++i;
	}

}


void inverse(int* a, const int n)
{
	int tmp;
	for (int i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[i + 1];
		a[i + 1] = tmp;
		++i;
	}
}
// 2 спосіб із шаблонами функцій
template <typename T>
void create(T* a, const int n, T min, T max)
{
	for (int i = 0; i < n; i++)
		a[i] = min + rand() % (max - min + 1);
}

template <typename T>
void print(T* a, const int n)
{
	for (int i = 0; i < n; i++)
		cout << " " << a[i] << "; ";
	cout << endl;
}

template <typename T>
int inverse(T* a, const int n)
{
	T tmp;
	for (int i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[i + 1];
		a[i + 1] = tmp;
		++i;
	}

}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int min = 3;
	int max = 92;
	const int n = 10;
	int a[n];

	// create<int>(a, n, min, max);
	create(a, n, min, max);
	cout << "Масив із рандомних чисел:" << endl;
	// print<int>(a, n);
	print(a, n);
	cout << endl;
	cout << "Масив із інверсією: " << endl;
	inverse(a, n);
	print(a, n);
	cout << endl;
	inverse(a, n);
	print(a, n);
	cout << endl;
	system("pause");
}
