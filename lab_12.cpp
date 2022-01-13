#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    string message;
    cout << "введите текст: ";
    cin.ignore(); // используется для игнорирования или очистки одного или нескольких символов из входного буфера
   // cin>>message
    getline(cin, message); //считываем массив символов

    for (int i = 0; i < message.length(); i++) {
        if (message[i] == message[i + 1]) {
            cout <<message[i] << message[i + 1]<< endl;
        }
    }
    cout <<"текст: " << message<< endl;
    return 0;
}
