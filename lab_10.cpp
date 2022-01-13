#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt"); // входные данные
    ofstream fout("output.txt"); // выходные данные
    string data;
    getline(file, data);// считывает целую строку
    for (int i = 0; i < data.length(); i++) { // выполнит столькораз, сколько символов в строке
        if (data[i] == data[i + 1]) {

            fout <<data[i] << data[i + 1]<< " ";

        }

    }
    cout <<"текст обработан "<< endl;
}
