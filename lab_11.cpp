#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    char c = 'i';
    string s ;
    cout << "������� �����: ";
    cin.ignore(); // ������������ ��� ������������� ��� ������� ������ ��� ���������� �������� �� �������� ������
    getline(cin, s); //��������� ������ ��������
    string s0 ="00";
    string res = "";

    for (int i = 0; s[i] != '\0'; i++) { // ����� ������� �� ��������� ���-�� �������� � ������
        if (s[i] == c) res += s0;
        res += s[i];
    }

    cout <<"�������� ������: "<< endl;
    cout <<"s = " <<s <<endl;
    cout <<"s0 = " <<s0 <<endl;
    cout <<"c = " <<c << endl;
    cout << "���������\n" << res << endl;

    return 0;
}
