#include <iostream>
#include <string>
#include <limits>   // Necesario para numeric_limits para limpiar el buffer

using namespace std;

void registrarNuevoServicio();

int main() {
    registrarNuevoServicio();
    return 0;
}

// Función para registrar un nuevo servicio
void registrarNuevoServicio() {
    cout << "--- REGISTRO DE NUEVO SERVICIO ---" << endl;
    string fechaServicio;
    string tipoServicio;
    string observaciones;
    bool datosCompletos = false;

    // Bucle para asegurar que se ingresen datos obligatorios
    while (!datosCompletos) {
        cout << "Ingrese la fecha del servicio (ej: \"DD/MM/AAAA\"): ";
        getline(cin, fechaServicio); // Lee la línea completa [fuera de las fuentes]

        cout << "Ingrese el tipo de servicio (ej. 'Cambio de aceite', 'Revision general'): ";
        getline(cin, tipoServicio);

        cout << "Ingrese observaciones (opcional): ";
        getline(cin, observaciones);

        // Validación simple de datos obligatorios (fecha y tipo de servicio)
        if (fechaServicio.empty() || tipoServicio.empty()) {
            cout << "ADVERTENCIA La fecha y el tipo de servicio son campos obligatorios. Por favor, complete la informacion." << endl;
            // Limpia el buffer de entrada para evitar problemas en futuras lecturas [fuera de las fuentes]
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            datosCompletos = true;
        }
    }

    // Si los datos están completos, el sistema procede a "guardar" (en este caso, mostrar) los datos del servicio.
    cout << "\n--- SERVICIO REGISTRADO EXITOSAMENTE ---" << endl;
    cout << "Fecha del Servicio: " << fechaServicio << endl;
    cout << "Tipo de Servicio: " << tipoServicio << endl;
    cout << "Observaciones: " << observaciones << endl;
    cout << "El servicio ha sido guardado en el historial del vehiculo." << endl;
}