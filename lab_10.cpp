#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt"); // ������� ������
    ofstream fout("output.txt"); // �������� ������
    string data;
    getline(file, data);// ��������� ����� ������
    for (int i = 0; i < data.length(); i++) { // �������� ����������, ������� �������� � ������
        if (data[i] == data[i + 1]) {

            fout <<data[i] << data[i + 1]<< " ";

        }

    }
    cout <<"����� ��������� "<< endl;
}
