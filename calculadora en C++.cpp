#include <iostream>
using namespace std;

int main() {
    int x1, x2, res;
    int op;
    
    cout << "CALCULADORA DE LA NASA :V\n";
    cout << "[1] - Suma\n";
    cout << "[2] - Resta\n";
    cout << "[3] - Multiplicacion\n";
    cout << "[4] - Division\n";
    cout << "[5] - Modulo\n";
    
    cout << "¿Operación que desea realizar mi Rey? ";
    cin >> op;
    
    switch(op) {
        case 1:
            cout << "Ingrese el primer numero: ";
            cin >> x1;
            cout << "Ingrese el segundo numero: ";
            cin >> x2;
            res = x1 + x2;
            cout << "Resultado= " << res << endl;
            break;
        
        case 2:
            cout << "Ingrese el primer numero: ";
            cin >> x1;
            cout << "Ingrese el segundo numero: ";
            cin >> x2;
            res = x1 - x2;
            cout << "Resultado= " << res << endl;
            break;
        
        case 3:
            cout << "Ingrese el primer numero: ";
            cin >> x1;
            cout << "Ingrese el segundo numero: ";
            cin >> x2;
            res = x1 * x2;
            cout << "Resultado= " << res << endl;
            break;
            
        case 4:
            cout << "Ingrese el primer numero: ";
            cin >> x1;
            cout << "Ingrese el segundo numero: ";
            cin >> x2;
            if (x2 != 0) {
                res = x1 / x2;
                cout << "Resultado= " << res << endl;
            } else {
                cout << "Error: División por cero no permitida.\n";
            }
            break;
            
        case 5:
            cout << "Ingrese el primer numero: ";
            cin >> x1;
            cout << "Ingrese el segundo numero: ";
            cin >> x2;
            if (x2 != 0) {
                res = x1 % x2;
                cout << "Resultado= " << res << endl;
            } else {
                cout << "Error: Modulo por cero no permitido.\n";
            }
            break;
        
        default:
            cout << "No escogió un número adecuado\n";
            break;
    }
    
    return 0;
}

