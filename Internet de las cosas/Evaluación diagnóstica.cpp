// Fecha de elaboración: 14 de agosto de 2024
// Nombre: Maximiliano Martinez Farias 7*D 

#include <iostream>
#include <vector>
#include <cmath>

// Función para calcular la raíz cuadrática media (desviación estándar)

double calcularRaizCuadraticaMedia(const std::vector<double>& datos) {
    
    // Verificar que el conjunto de datos no esté vacío
    if (datos.empty()) {
        std::cerr << "El conjunto de datos está vacío." << std::endl;
        return 0.0;
    }

    // Calcular la media de los datos
    double suma = 0.0;
    for (double valor : datos) {
        suma += valor;
    }
    double media = suma / datos.size();

    // Calcular la suma de los cuadrados de las diferencias respecto a la media
    
    double sumaCuadrados = 0.0;
    for (double valor : datos) {
        double diferencia = valor - media;
        sumaCuadrados += diferencia * diferencia;
    }

    // Calcular la raíz cuadrática media (desviación estándar)
    double raizCuadraticaMedia = std::sqrt(sumaCuadrados / datos.size());
    return raizCuadraticaMedia;
}

int main() {
    
    // Conjunto de datos proporcionado
    
    std::vector<double> datos = {
        0,
        35.11625796,
        68.88301783,
        100.0026419,
        127.2792206,
        149.6645302,
        166.2983159,
        176.5413505,
        180,
        176.5413505,
        166.2983159,
        149.6645302,
        127.2792206,
        100.0026419,
        68.88301783,
        35.11625796,
        1.02E-13,
        -35.11625796,
        -68.88301783,
        -100.0026419,
        -127.2792206,
        -149.6645302,
        -166.2983159,
        -176.5413505,
        -180,
        -176.5413505,
        -166.2983159,
        -149.6645302,
        -127.2792206,
        -100.0026419,
        -68.88301783,
        -35.11625796,
        -2.04E-13
    };

    // Calcular la raíz cuadrática media
    
    double resultado = calcularRaizCuadraticaMedia(datos);

    // Imprimir el resultado
    
    std::cout << "La raíz cuadrática media del conjunto de datos es: " << resultado << std::endl;

    return 0;
}
