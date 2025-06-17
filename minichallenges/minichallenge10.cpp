#include <iostream>
#include <string>
#include <algorithm> // Para transform (tolower)

bool esPalindromo(std::string cadena) {
    // Eliminar espacios y pasar a minúsculas
    std::string limpia = "";
    for (char c : cadena) {
        if (std::isalnum(c)) {
            limpia += std::tolower(c);
        }
    }

    // Verificar si es igual al revés
    std::string inversa = limpia;
    std::reverse(inversa.begin(), inversa.end());

    return limpia == inversa;
}

int main() {
    std::string texto;

    std::cout << "Ingresa una cadena: ";
    std::getline(std::cin, texto);  // Permite espacios

    if (esPalindromo(texto)) {
        std::cout << "¡Es un palíndromo! :)\n";
    } else {
        std::cout << "No es un palíndromo.\n";
    }

    return 0;
}
