#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<time.h>

//Дана целочисленная квадратная матрица. Опередить:
//1) произведение элементов в тех строках, которые не содержат отрицательных элементов.
//2) максимум среди сумм элементов диагоналей, параллельных главной диагонали матрицы.

using namespace std;
const int N = 4;
const int M = 4;
int main() {
    setlocale(LC_ALL,"");
    srand(time(NULL));
    int Array[N][M];

    cout<<"Массив:";
    for(int i=0; i<N; i++) {
        cout<<endl;
        for(int j=0; j<M; j++) {
            Array[i][j] = rand()%22 - 2; //задаём рандомное значение массива
            cout<<setw(3)<<Array[i][j];

        }
    }

//2) максимум среди сумм элементов диагоналей, параллельных главной диагонали матрицы

    cout<<endl;
    int sum;
    bool flag;
    for (int i=0; i<N; i++) {
        sum = 1;
        flag = true;
        for (int j=0; j<N; j++) {
            if (Array[i][j]<0) {
                flag = false;
                break;
            }
            sum*=Array[i][j];
        }
        if (flag)
            cout <<"Произведение "<<i + 1 <<" строка: " <<sum<< endl;
    }

//2) максимум среди сумм элементов диагоналей, параллельных главной диагонали матрицы.

    int SumMax = Array[0][N-1];
    int SumDiag;
    for(int i=1; i<N; i++) {
        SumDiag=0;
        for(int j=0; j<N-i; j++) {

            SumDiag+=Array[i+j][j];
        }
        if(SumDiag>SumMax) SumMax = SumDiag;
    }
    cout<<"Максимальная сумма диагоналей паралельных главной = "<<SumMax<<endl;

    system("pause");
    return 0;
}
