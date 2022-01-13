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
    cout << "������� ���������� ����� � ��������: ";
    cin >> n;


    cout << "�������: " << endl;

    for (i = 0; i < n; i++) {   // ��������� ������ ���������� �������
        for (j = 0; j < n; j++)
            a[i][j] = rand()%30-5;
    }

    for (i = 0; i < n; i++) {  // ������� �������
        for (j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    for (i = 0; i < n; i++) {
        int S = 0, k = 0;
        for (j = 0; j < n; j++) {
            if (a[i][j] < 0) k++; //��������� ������� ������������� �����
            S += a[i][j]; // ���� ������������ ����� ��������������� ��������
        }
        if (k == 0) cout << "����� ����� � " << i + 1 << " ������� ����� " << S << endl; //���� ��� ����� ���� ������� �����
        else cout << "� " << i + 1 << " ������� ����������� ������������� �����" << endl; //���� ���, ��  ���
    }
    cout << endl;

    for (int i = 0; i<n; ++i) {
        int index = i;
        int sum = 0;
        for (int j = 0; j<n; ++j) {
            cout<<"a["<<i<<"]["<<j<<"]";
            sum += a[index++][j]; // ��� �������������� ������ �����, �������� ���������
            if (index == n)
                index = 0;
            if (j != n - 1)
                cout<<" + ";
            if (sum>max_sum) // ������� ������������ ���� ���������
                max_sum=sum;

        }
        cout<<" = "<<sum<<"\n";
    }
    cout <<"������������ ����� ��������� ���������� = " <<max_sum<< endl;
    return 0;
}
