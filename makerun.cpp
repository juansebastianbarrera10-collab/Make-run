#include <iostream>
#include <iomanip>
#include <cmath>


long long factorial(int n) {
    long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}


double taylorExp(double x, int n) {
    double suma = 0;

    for (int i = 0; i < n; i++) {
        suma += std::pow(x, i) / factorial(i);
    }

    return suma;
}


double taylorSin(double x, int n) {
    double suma = 0;
    double signo = 1.0;
    for (int i = 0; i < n; i++) {
        suma += signo * std::pow(x, 2 * i + 1) / factorial(2 * i + 1);
        signo = -signo;
    }

    return suma;
}


double taylorCos(double x, int n) {
    double suma = 0;
    double signo = 1.0;
    for (int i = 0; i < n; i++) {
        suma += signo * std::pow(x, 2 * i) / factorial(2 * i);
        signo = -signo;
    }

    return suma;
}

int main() {
    double x;
    int n;

    std::cout << "=================================\n";
    std::cout << "   SERIES DE TAYLOR EN C++\n";
    std::cout << "=================================\n";

    std::cout << "Ingrese el valor de x: ";
    std::cin >> x;

    std::cout << "Ingrese el numero de terminos: ";
    std::cin >> n;

    std::cout << "\n========= RESULTADOS =========\n";

    std::cout << "e^x = "
              << taylorExp(x, n)
              << std::endl;

    std::cout << "sin(x) = "
              << taylorSin(x, n)
              << std::endl;

    std::cout << "cos(x) = "
              << taylorCos(x, n)
              << std::endl;

    std::cout << "==============================\n";

    return 0;
}

