#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    string message;
    cout << "������� �����: ";
    cin.ignore(); // ������������ ��� ������������� ��� ������� ������ ��� ���������� �������� �� �������� ������
   // cin>>message
    getline(cin, message); //��������� ������ ��������

    for (int i = 0; i < message.length(); i++) {
        if (message[i] == message[i + 1]) {
            cout <<message[i] << message[i + 1]<< endl;
        }
    }
    cout <<"�����: " << message<< endl;
    return 0;
}
