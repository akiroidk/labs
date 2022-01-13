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

    cout <<"введите количество строк ";
    cin >>row;
    cout <<"введите количество столбцов ";
    cin >>col;

    int arr[row][col];
    for (int i = 0; i < row; i++) {

        cout << endl;
        for (int j = 0; j < col; j++) {
            arr[i][j] = rand()%20-10; //заполяет массив рандомными числами
            if (arr[i][j] >= 0) { // если число положительное оно будет засчитано в К
                k++;
            }
            cout << arr[i][j]<< "\t";
        }
    }
    cout << endl;

    cout <<"кол-во неотрицательных элементов = "<<k << endl;  // кол-во неотрицательных элементов


    return 0 ;
}

