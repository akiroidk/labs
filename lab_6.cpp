#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "RUS");

    int row;
    int k = 0; // ��� ����� �������

    cout <<"������� ���������� ����� \n";
    cin >>row;

    int  arr[row];

    for (int i = 0; i < row; i++) {
        arr[i] = rand()%21-10; //�������� ������ ���������� �������
        if (arr[i] >= 0) { // ���� ����� ������������� ��� ����� ��������� � �
            k++;
        }
        cout << arr[i]<< " ";
    }

    cout << endl;
    cout <<"���������� ��������������� ��������� = "<<k << endl;  // ���-�� ��������������� ���������


    return 0 ;
}
