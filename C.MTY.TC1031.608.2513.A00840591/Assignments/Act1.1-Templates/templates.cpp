#include <iostream>
#include <string>

// Suma de dos enteros
int sumar(int a, int b){
    return a + b;
}

// Suma de dos flotantes
float sumar(float a, float b){
    return a + b;
}

// Suma (concatenación) de dos strings
std::string sumar(const std::string& a, const std::string& b){
    return a + b;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    int resultado = sumar(num1, num2);
    std::cout << "La suma de enteros es: " << resultado << std::endl;

    float f1 = 3.5f;
    float f2 = 2.7f;
    float resultadoFloat = sumar(f1, f2);
    std::cout << "La suma de flotantes es: " << resultadoFloat << std::endl;

    std::string s1 = "Hola, ";
    std::string s2 = "mundo!";
    std::string resultadoString = sumar(s1, s2);
    std::cout << "La suma de strings es: " << resultadoString <<  std::endl;

    return 0;
}
