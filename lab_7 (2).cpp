#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "RUS");

    int row;
    int col;
    int k = 0; // ��� ����� �������

    cout <<"������� ���������� ����� ";
    cin >>row;
    cout <<"������� ���������� �������� ";
    cin >>col;

    int arr[row][col];
    for (int i = 0; i < row; i++) {

        cout << endl;
        for (int j = 0; j < col; j++) {
            arr[i][j] = rand()%20-10; //�������� ������ ���������� �������
            if (arr[i][j] >= 0) { // ���� ����� ������������� ��� ����� ��������� � �
                k++;
            }
            cout << arr[i][j]<< "\t";
        }
    }
    cout << endl;

    cout <<"���-�� ��������������� ��������� = "<<k << endl;  // ���-�� ��������������� ���������


    return 0 ;
}

