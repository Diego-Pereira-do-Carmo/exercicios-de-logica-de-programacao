#include <bits/stdc++.h>

using namespace std;

int main() {

    double base, altura, area, perimetro, diagonal;

    cout << "Base do Retangulo: ";
    cin >> base;

    cout << "Altura do Retangulo: ";
    cin >> altura;

    area = base *  altura;

    perimetro = base * 2 + altura * 2;

    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));



    cout << endl<< fixed << setprecision(2) << "Perimetro : " << perimetro << endl;

    cout << "Area do Retangulo: " << area << endl;

    cout << "Diagonal: " << diagonal << endl;


    return 0;
}
