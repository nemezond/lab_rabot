#include <iostream>
using namespace std;
const int N = 4;  // для 3 задания
void zadanie1() {
	int chislo, t;  //t - вспомогательная переменная
	do {
		cout << "введите пятизначное число "; // ввод с проверкой 5-значного числа
		cin >> chislo;
	} while (chislo < 10000 || chislo > 100000);

	while (chislo != 0) {
		t = chislo % 10;   //отсекаем последнюю цифру
		chislo /= 10;
		cout << t << endl;  //выводим последнюю цифру с новой строки
	}

}
void zadanie2() {
	char a;
	cout << "введите символ ";
	cin >> a;
	a = a - 32;
	cout << a << endl;
}
void zadanie3() {
	int array[N];
	int sr = 0;
	cout << "введите массив из 4 чисел: ";
	for (int i = 0; i < N; i++)
		cin >> array[i];   //ввод массива из 4 элементов
	for (int i = 0; i < N; i++) {
		sr += array[i];  // подсчет суммы всех элементов
	}
	cout << "среднее арифметическое = " << sr / 4 << endl;  //вывод ср.арифметического
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 1:" << endl;
	zadanie1();
	cout << "Задание 2:" << endl;
	zadanie2();
	cout << "Задание 3:" << endl;
	zadanie3();
}


