#include <iostream>
using namespace std;

// Funciones para las operaciones
void ingresarNumeros(int arr[], int &n) {
    cout << "¿Cuántos números quieres ingresar? (máx 10): ";
    cin >> n;
    if (n > 10) n = 10;
    cout << "Ingresa los números:\n";
    for (int i = 0; i < n; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void mostrarNumeros(const int arr[], int n) {
    cout << "Los números son: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void calcularSuma(const int arr[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    cout << "La suma de los números es: " << suma << endl;
}

void calcularPromedio(const int arr[], int n) {
    if (n == 0) {
        cout << "No hay números para calcular el promedio." << endl;
        return;
    }
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    float promedio = static_cast<float>(suma) / n;
    cout << "El promedio de los números es: " << promedio << endl;
}

void encontrarMayor(const int arr[], int n) {
    if (n == 0) {
        cout << "No hay números para encontrar el mayor." << endl;
        return;
    }
    int mayor = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > mayor) mayor = arr[i];
    }
    cout << "El número mayor es: " << mayor << endl;
}

void encontrarMenor(const int arr[], int n) {
    if (n == 0) {
        cout << "No hay números para encontrar el menor." << endl;
        return;
    }
    int menor = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < menor) menor = arr[i];
    }
    cout << "El número menor es: " << menor << endl;
}

void ordenarAscendente(int arr[], int n) {
    sort(arr, arr + n);
    cout << "Array ordenado en forma ascendente: ";
    mostrarNumeros(arr, n);
}

void buscarNumero(const int arr[], int n) {
    int num, posicion = -1;
    cout << "Ingresa el número que quieres buscar: ";
    cin >> num;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            posicion = i;
            break;
        }
    }
    if (posicion != -1) {
        cout << "Número encontrado en la posición " << posicion + 1 << endl;
    } else {
        cout << "Número no encontrado en el array." << endl;
    }
}

void contarOcurrencias(const int arr[], int n) {
    int num, contador = 0;
    cout << "Ingresa el número para contar sus ocurrencias: ";
    cin >> num;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) contador++;
    }
    cout << "El número " << num << " aparece " << contador << " veces en el array." << endl;
}

// Menú principal
int main() {
    int arr[10];
    int n = 0;
    int opcion;

    do {
        cout << "\nMenú de opciones:\n";
        cout << "1. Ingresar números en el array\n";
        cout << "2. Mostrar números\n";
        cout << "3. Calcular suma\n";
        cout << "4. Calcular promedio\n";
        cout << "5. Encontrar número mayor\n";
        cout << "6. Encontrar número menor\n";
        cout << "7. Ordenar array en forma ascendente\n";
        cout << "9. Buscar un número\n";
        cout << "10. Contar ocurrencias de un número\n";
        cout << "11. Salir\n";
        cout << "Selecciona una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                ingresarNumeros(arr, n);
                break;
            case 2:
                mostrarNumeros(arr, n);
                break;
            case 3:
                calcularSuma(arr, n);
                break;
            case 4:
                calcularPromedio(arr, n);
                break;
            case 5:
                encontrarMayor(arr, n);
                break;
            case 6:
                encontrarMenor(arr, n);
                break;
            case 7:
                ordenarAscendente(arr, n);
                break;
            case 9:
                buscarNumero(arr, n);
                break;
            case 10:
                contarOcurrencias(arr, n);
                break;
            case 11:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción no válida, intenta nuevamente.\n";
                break;
        }
    } while (opcion != 11);

    return 0;
}
