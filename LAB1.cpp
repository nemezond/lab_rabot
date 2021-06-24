#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

const int M = 10;                //для 1 задания
const int a = 3, b = 3;            //для 3 задания

void zadanie1() {
	int array[M];
	cout << "введите массив: " << endl;
	for (int i = 0; i < M; i++) // заполняем массив с клавиутуры
		cin >> array[i];

	for (int i = 0; i < M; i++) // обрабатываем массив
	{
		if (array[i] % 2 == 0)  //если число четное, то  
			array[i] = 0;       //заменяем четные числа на "0"
	}
	cout << "преобразованный массив: "; //вывод преобразованного массива
	for (int i = 0; i < M; i++)
		cout << array[i] << " ";
	cout << endl;
}

void zadanie2() {
	string str;
	char simvol;
	cout << "ВВЕДИТЕ СИМВОЛ НА АНГЛ. РАСКЛАДКЕ" << endl;
	cin >> simvol; // ввод символа
	if (isalpha(simvol)) // проверка на ввод буквы
		cout << "введена буква" << endl;
	else (cout << "введена не буква" << endl);
	do {
		cout << "Введите строку" << endl; //ввод строки с проверкой
	} while (!getline(cin, str));
	cout << "строка введена" << endl;

	for (int i = 0; i < str[i] != '\0'; i++) {
		if (str[i] == simvol) {
			cout << "Символ " << simvol << " стоит на " << i + 1 << " месте"; break; // вывод номера введенного символа
		}
	}
	cout << endl;
}


void zadanie3() {
	int massiv[a][b];   //наша 2-мерная матрица
	int A;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << "Введите значения массива:";
			cin >> massiv[i][j];  // заполнение матрицы с клавиатуры
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << massiv[i][j] << " ";   //вывод заполненной матрицы
		}
		cout << endl;
	}
	// далее находим определитель по формуле: (а00 //*а00а*а22)+(а20*а01*а12)+(а10*а21*а02)-(а20*а11*а02)-(а00*а21*а12)-(а10*а01*а22)
	A = (massiv[0][0] * massiv[1][1] * massiv[2][2]) + (massiv[2][0] * massiv[0][1] * massiv[1][2]) + (massiv[1][0] * massiv[2][1] * massiv[0][2]) - (massiv[2][0] * massiv[1][1] * massiv[0][2]) - (massiv[0][0] * massiv[2][1] * massiv[1][2]) - (massiv[1][0] * massiv[0][1] * massiv[2][2]);
	cout << "определитель = " << A << endl;   //вывод определителя
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
