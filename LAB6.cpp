#include <iostream>
using namespace std;

void fzd2(int vp, int np) {
    int vch;
    cout << "Входящее число - ";
    cin >> vch;
    int m = 0; //для выбора варианта второго меню
    while (true) {
        if (vp > vch && np < vch) {
            break;
        }
        else {
            while (m != 4) {
                cout << "1)Изменение верхнего предела " << endl;
                cout << "2)Изменение нижнего предела " << endl;
                cout << "3)Изменить входящее число" << endl;
                cout << "4)Продолжить" << endl;
                cin >> m;
                switch (m) {
                case(1):
                    cout << "Изменить верхний предел на - ";
                    cin >> vp;
                    break;
                case(2):
                    cout << "Изменить нижний предел на - ";
                    cin >> np;
                    break;
                case(3):
                    cout << "Изменить входящее число на - ";
                    cin >> vch;
                    break;
                }
                if (m == 4) break;
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Вывод максимального из трёх чисел" << endl;
    int a, b, c;
    cout << "1 - ";
    cin >> a;
    cout << "2 - ";
    cin >> b;
    cout << "3 - ";
    cin >> c;
    cout << "Макс - ";
    if (a > b) a = b;
    if (a > c) a = c;
    cout << a << endl;

    int pn, pv;
    cout << "Нижни предел - ";
    cin >> pn;
    cout << "Верхний предел - ";
    cin >> pv;
    fzd2(pn, pv);

    int kol;
    cout << "Введи количество чисел в масиве" << endl;
    cin >> kol;
    int* m = new int[kol];
    cout << "Введи элементы" << endl;
    for (int i = 0; i < kol; i++) {
        cout << i + 1 << " элемент - ";
        cin >> m[i];
    }

    int u = 0;
    int l = 0;
    for (int i = 0; i < kol - 1; i++)
    {
        u = i + 1;
        l = m[u];
        for (int p = i + 1; p > 0; p--)
        {
            if (l < m[p - 1])
            {
                m[p] = m[p - 1];
                u = p - 1;
            }
        }
        m[u] = l;
    }

    cout << "Вывод массива" << endl;
    for (int i = 0; i < kol; i++) {
        cout << i + 1 << "элемент - " << m[i] << endl;
    }
}
