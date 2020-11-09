#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    vector<string> cadenas;
    int op;

    while(1){
        cout << "\n\n1. Agregar" << "\t";
        cout << "2. Mostrar" << "\t";
        cout << "3. Inicializar" << endl;
        cout << "4. Frente" << "\t";
        cout << "5. Ultimo" << "\t";
        cout << "6. Ordenar" << endl;
        cout << "7. Insertar" << "\t";
        cout << "8. Eliminar" << "\t";
        cout << "9. Eliminar Ultimo" << endl;
        cout << "0. Salir" << endl << "Opcion: ";
        cin >> op;

        if(op == 0) break;

        cout << endl; //cin.ignore();

        switch(op){
        case 1:
        {
            string cadena;

            cout << "Cadena a agregar: ";
            cin >> cadena;

            cadenas.push_back(cadena);
        }
            break;
        case 2:
            if(cadenas.empty()){
                cout << "Vector vacio";
                break;
            }
            cout << left;
            cout << setw(10) << "Posicion";
            for(size_t i = 0; i < cadenas.size(); i++){
                cout << setw(10) << i;
            }
            cout << setw(10) << "\nValores ";
            for(size_t i = 0; i < cadenas.size(); i++){
                cout << setw(10) << cadenas[i];
            }
            break;
        case 3:
        {
            size_t n;
            string cadena;

            cout << "Tamaño: ";
            cin >> n;
            cout << "cadena: ";
            cin >> cadena;

            cadenas = vector<string>(n, cadena);
        }
            break;
        case 4:
            if(cadenas.empty()){
                cout << "Vector vacio";
                break;
            }
            cout << "Primer agregado: " << cadenas.front();
            break;
        case 5:
            if(cadenas.empty()){
                cout << "Vector vacio";
                break;
            }
            cout << "Ultimo agregado: " << cadenas.back();
            break;
        case 6:
            sort(cadenas.begin(), cadenas.end());
            //sort(cadenas.begin(), cadenas.end(), greater<string>());
            cout << "Ordenado";
            break;
        case 7:
        {
            size_t p;
            string cadena;

            cout << "Posicion: ";
            cin >> p;

            if(p >= cadenas.size()){
                cout << "Posicion invalida";
                break;
            }

            cout << "cadena: ";
            cin >> cadena;
            cadenas.insert(cadenas.begin() + p, cadena);
        }
            break;
        case 8:
        {
            size_t p;
            string cadena;

            cout << "Posicion: ";
            cin >> p;

            if(p >= cadenas.size()){
                cout << "Posicion invalida";
                break;
            }

            cadenas.erase(cadenas.begin() + p);
        }
            break;
        case 9:
            if(cadenas.empty()){
                cout << "Vector vacio";
                break;
            }
            cadenas.pop_back();
            cout << "Se ha eliminado el ultimo valor";
            break;
        default:
            cout << "Opcion incorrecta";
        }
    }

    return 0;
}