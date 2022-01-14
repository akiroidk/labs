#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    setlocale( LC_ALL,"Russian" );
    ifstream file("data.txt"); // откуда берём данные
    ofstream fout("output.txt"); // куда данные отправляем
    string data;
    getline(file, data); // извлекает данные из входного потока до строкового разделителя, грубо говоря похоже на cin
    for (int i = 0; i < data.length(); i++) { //
        if (data[i] == data[i + 1]) {

            fout <<data[i] << data[i + 1]<< " "; // записывает в output.txt два одинаковых соседних символа


        }

    }
    cout <<"выполнено"<< endl;
}
