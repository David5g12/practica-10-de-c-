#include <iostream>

int SumaIterativa(int n) {
    int suma = 0;
    while (n > 9) {
        suma += n % 10;
        n /= 10;
    }
    suma += n;
    return suma;
}

int SumaRecursiva(int n) {
    if (n <= 9) {
        return n;
    }
    else {
        return SumaRecursiva(n / 10) + n % 10;
    }
}

using namespace std;

int main() {
    int n, numero;
    cout << "Ingresa un numero para la suma recursiva y iterativa: " << endl;
    cin >> n;

    int sumaTotalIterativa = 0;
    int sumaTotalRecursiva = 0;

    cout << "Ingresa los numeros que deseas sumar:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "numero" << "-->";
        cin >> numero;
        sumaTotalIterativa += SumaIterativa(numero);
        sumaTotalRecursiva += SumaRecursiva(numero);
    }

    cout << "Suma Total Iterativa: " << sumaTotalIterativa << endl;
    cout << "Suma Total Recursiva: " << sumaTotalRecursiva << endl;

    return 0;
}