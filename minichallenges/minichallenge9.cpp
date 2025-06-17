#include <iostream>

// Declaración de la función correctamente
void clasificar(int arreglo[], int tam);

int main() {
    int arreglo[] = {10, 4, 5, 6, 43, 7, 8};
    int tam = sizeof(arreglo) / sizeof(int);
    
    clasificar(arreglo, tam);
    
    for (int elementos : arreglo) {
        std::cout << elementos << " ";
    }

    return 0;
}

// Definición correcta de la función
void clasificar(int arreglo[], int tam) {
    int temp;
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                // Intercambiar
                temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}
