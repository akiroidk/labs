#include <iostream>
#include <math.h>

using namespace std;

double f(double x) {
    return (sin(2*x)+sin(5*x)-sin(3*x))/(cos(x)-cos(3*x)+cos(5*x));
}

int main() {
    double a, b;
    int n;
    cout << "a = ";
    cin >>a;
    cout << "b = ";
    cin >>b;
    cout << "n = ";
    cin >>n;

    double s = (f(a)+f(b))/2;
    double h = (b-a)/n;
    for (int i = 0; i < n-1 ; ++i) {
        s += f(a+i*h);
    }
    double I = h*s;

    cout <<I<< endl;


    return 0;
}
