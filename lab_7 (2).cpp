#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "RUS");

    int row;
    int col;
    int k = 0; // это будет счетчик

    cout <<"введите количесвто рядов ";
    cin >>row;
    cout <<"введите количество коло ";
    cin >>col;

    int arr[row][col];
    for (int i = 0; i < row; i++) {

        cout << endl;
        for (int j = 0; j < col; j++) {
            arr[i][j] = rand()%20-10; //заполняем массив раномными числами
            if (arr[i][j] >= 0) { // перебирает числа больше 0
                k++;
            }
            cout << arr[i][j]<< "\t";
        }
    }
    cout << endl;

    cout <<"количество неотрицательных чисел = "<<k << endl;


    return 0 ;
}
