#include <cmath>
#include <iostream>

using namespace std;

void in(int& in) { //Функция инвертирования числа 
    int st = 10; 
    long int dv = 0;
    long int r = 0;

    while (st > -1) { //перевод в двоичный вид
        dv = pow(2, st);
        if (dv <= in) {
            in -= dv;
            r += pow(10, st);
        }
        st = st - 1;
    }
    long int rez = 0;
    st = 0;
    while (r > 0) { //инвертирование
        dv = r % 10;
        r /= 10;
        if (dv == 1) {

        }
        else
        {
            rez = rez + pow(2, st);
        }
        st++;
    }
    in = rez;
}

void srgar(int rr, int rrt) { //Функция среднего гармонического
    if (rr != 0 && rrt != 0)
    {
        double rrtt = (2 * rr * rrt) / (rr + rrt);
        cout << rrtt << endl;
    }
}

void sort(double* cc, double* vv, double* bb) { // принимает адреса чисел и сортирует их.
    double a = *cc, b = *vv, c = *bb;
    if (a < b) {
        if (a < c) {
            if (b < c) {
                *cc = a;
                *vv = b;
                *bb = c;
            }
            else
            {
                *cc = a;
                *vv = c;
                *bb = b;
            }
        }
        else
        {
            *cc = c;
            *vv = a;
            *bb = b;
        }
    }
    else
    {
        if (b < c) {
            if (a > c) {
                *cc = b;
                *vv = c;
                *bb = a;
            }
            else {
                *cc = b;
                *vv = a;
                *bb = c;
            }
        }
        else {
            *cc = c;
            *vv = b;
            *bb = a;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    int ch1, ch2;
    cout << "1 число - ";
    cin >> ch1;
    cout << "2 число - ";
    cin >> ch2;
    cout << "Инвертирование числа - ";
    in(ch1);
    cout << ch1 << endl;
    cout << "Инвертирование  числа - ";
    in(ch2);
    cout << ch2 << endl;
    cout << "Среднее значение инверсий: " << (ch1 + ch2) / 2 << endl;
    cout << "Среднее гармоническое : ";
    srgar(ch1, ch2);

    double rr, tt, yy;
    cout << "1 число - " << endl;
    cin >> rr;
    cout << "2 число - " << endl;
    cin >> tt;
    cout << "3 число - " << endl;
    cin >> yy;
    sort(&rr, &tt, &yy);
    cout << "Отсортированные числа " << endl;
    cout << "1 число - " << rr << endl;
    cout << "2 число - " << tt << endl;
    cout << "3 число - " << yy << endl;
}