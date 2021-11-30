#include <iostream>

using namespace std;

int trng1() {
    cout << "Выберите высоту треугольника(n):";
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << ' ';
        }
        for (int c = 1; c <= i * 2 - 1; ++c) {
            cout << '*';
        }
        cout << '\n';
    }
    int a; cin >> a;
    return 0;
}
int trng2() {

    int n;

    cout << "Введите высоту треугольника: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n * 2; j++)
        {
            if (j == ((n + 1) - (i - 1)) || j == ((n + 1) + (i - 1)))
                cout << '*';
            else
                if (i == n && j > 1)
                    cout << '*';
                else
                    cout << ' ';
        }

        cout << endl;
    }

    system("pause");
    return 0;

}
int main() {
    setlocale(0, "");
    cout << "Фигура: ""треугольник""\n\n1. Заполненый\n2. Пустой\nВыберите пункт меню - ";
    int menu = 0;
    cin >> menu;
    if (menu == 1) {
        trng1();
    }
    else if (menu == 2) {
        trng2();
    }
}