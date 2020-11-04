#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int A[100];
	int N;
	cout << "Введите длину массива: ";
	cin >> N;
	for (int i = 0; i < N; i++) {
		cout << "A[" << i << "]=";
		cin >> A[i];
	}
	int k, j;
	cout << "Введите длину на которую необходимо сдвинуть элементы массива: ";
	cin >> k;
	k = k % N;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < N-1; j++) {
			int t = A[j];
			A[j] = A[j + 1];
			A[j + 1] = t;
		}
	}
	for (int i = 0; i < N; i++) cout << A[i] << ' ';
}

