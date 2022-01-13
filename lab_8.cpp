#include <iostream>
#include <locale.h>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    int i, j, n;
    int max_sum = 0;
    int a[20][20];
    cout << "Введите количество строк и столбцов: ";
    cin >> n;


    cout << "Матрица: " << endl;

    for (i = 0; i < n; i++) {   // заполняет массив рандомными числами
        for (j = 0; j < n; j++)
            a[i][j] = rand()%30-5;
    }

    for (i = 0; i < n; i++) {  // выводит матрицу
        for (j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    for (i = 0; i < n; i++) {
        int S = 0, k = 0;
        for (j = 0; j < n; j++) {
            if (a[i][j] < 0) k++; //проверяет наличие отрицательных чисел
            S += a[i][j]; // сюда записывается сумма неотрицательных элемнтов
        }
        if (k == 0) cout << "Сумма чисел в " << i + 1 << " столбце равна " << S << endl; //если она равна нулю выводим сумму
        else cout << "В " << i + 1 << " столбце встречаются отрицательные числа" << endl; //если нет, то  это
    }
    cout << endl;

    for (int i = 0; i<n; ++i) {
        int index = i;
        int sum = 0;
        for (int j = 0; j<n; ++j) {
            cout<<"a["<<i<<"]["<<j<<"]";
            sum += a[index++][j]; // это закономерность сдвига чисел, согласно диагонали
            if (index == n)
                index = 0;
            if (j != n - 1)
                cout<<" + ";
            if (sum>max_sum) // находим максимаоьную суму диагонали
                max_sum=sum;

        }
        cout<<" = "<<sum<<"\n";
    }
    cout <<"Максимальная сумма элементов диагоналей = " <<max_sum<< endl;
    return 0;
}
