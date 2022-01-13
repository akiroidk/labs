#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "RUS");

    int row;
    int k = 0; // это будет счетчик

    cout <<"введите количество чисел \n";
    cin >>row;

    int  arr[row];

    for (int i = 0; i < row; i++) {
        arr[i] = rand()%21-10; //запол€ет массив рандомными числами
        if (arr[i] >= 0) { // если число положительное оно будет засчитано в  
            k++;
        }
        cout << arr[i]<< " ";
    }

    cout << endl;
    cout <<"количество неотрицательных элементов = "<<k << endl;  // кол-во неотрицательных элементов


    return 0 ;
}
