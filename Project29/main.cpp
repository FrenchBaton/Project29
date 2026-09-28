#include<iostream>
#include"Var.h"
using namespace std;

typedef Var<int> Vari;
typedef Var<double> Vard;
typedef Var<string> Vars;

int main() {
    Vari a = 15;
    Vari a2 = 15;
    Vard c = 7.8;
    Vars d = "50";
    a.Show();
    d.Show();

    cout << endl;

    Vari b = a + d;
    b.Show();
    b = a - d;
    b.Show();
    b = a * d;
    b.Show();

    cout << endl;

    c.Show();
    c = c / d;
    c.Show();

    d.Show();
    b.Show();

    cout << endl;

    b += d;
    b.Show();
    b -= d;
    b.Show();
    b *= d;
    b.Show();

    cout << endl;

    c.Show();
    c /= d;
    c.Show();

    cout << (c < d) << endl;
    cout << (c > d) << endl;
    cout << (b >= d) << endl;
    cout << (b != d) << endl;
    cout << (b == d) << endl;
    cout << (b == b) << endl;

    Vars g = "Hello";
    Vars i = "World";
    g.Show();
    i.Show();

    Vars h = g * i;
    h.Show();
    Vars h2 = g / i;
    h2.Show();
	return 0;
}