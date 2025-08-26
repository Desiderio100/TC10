#include <iostream>

//funcion factorial 
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
    }
int main() {
    // Tu código va aquí
    int numero;
    std::cout << "Ingresa un numero ;";
    std::cin >> numero;

    int resultado = factorial(numero);
    std::cout << "El factorial de " << numero << " es: " << resultado << std::endl;
   
    return 0;
}


