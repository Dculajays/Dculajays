#include <iostream>

using namespace std;


    char operacion;
    int cierremenu = 0;
    int cierre = 0;
    int num1 ;
    int num2 ;
    int res ;

    void menu(){

        if (operacion == '0'){
            cierre = 2;
            cierremenu = 2;
        }
        else if (operacion != '+' & operacion != '-' & operacion != '*' & operacion != '/'){
        cout << "Ingrese una operacion valida" << endl;
        }



    }
int main()
{
    while (cierremenu < 1){
        cout << "Escoja una operacion (+,-,*,/)" << endl;
        cout << "Si desea salir ingrese '0'" << endl;
        cin >> operacion;
        menu();
        while (cierre < 1){
            cout << "Ingrese el primer numero:";
            cin >> num1;
            cout << "Ingrese el segundo numero:";
            cin >> num2;
            if (operacion=='+')
                res = num1 + num2;
            else if (operacion == '-')
                res = num1 - num2;
            else if (operacion == '*')
                res =num1 * num2;
            else if (operacion == '/')
                res = num1/num2;
            cout << "El resultado es " << res << endl;
            cierre = 2;

        }
        cierre = 0;
    }


    return 0;
}
