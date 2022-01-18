#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    char c = 'i';
    string s ;
    cout << "введите текст: ";
    cin.ignore(); // используется для игнорирования или очистки одного или нескольких символов из входного буфера
    getline(cin, s); //считываем массив символов
    string s0 ="00";
    string res = "";

    for (int i = 0; s[i] != '\0'; i++) { // будет считать до конечного кол-ва символов в строке
        if (s[i] == c) res += s0;
        res += s[i];
    }

    cout <<"исходные данные: "<< endl;
    cout <<"s = " <<s <<endl;
    cout <<"s0 = " <<s0 <<endl;
    cout <<"c = " <<c << endl;
    cout << "результат\n" << res << endl;

    return 0;
}
