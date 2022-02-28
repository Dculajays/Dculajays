#include <iostream>
using namespace std;

int nu1,nu2,oper,resultado;
int main()
{
    cout << "PRIMER PROGRAMA CALCULADORA"<< endl;
    cout << "PRIMERA OPERACIION SUMA"<< endl;
    cout << "ingrese el primer numero"<< endl;
    cin >> nu1;
    cout << "ingrese el segundo numero"<<endl ;
    cin >> nu2;
    oper= nu1+nu2;
    cout<< "El resultado de la suma es de "<< oper << endl;

    cout << " SEGUNDA OPERACION RESTA "<< endl;
    cout << "ingrese el primer numero"<<endl;
    cin >> nu1;
    cout << "ingrese el segundo numero"<<endl;
    cin >> nu2;
    oper= nu1 - nu2;
    cout<< "El resultado de la resta es de "<< oper << endl;

    cout <<"TERCERA OPERACION MULTIPLICACION"<<endl;
    cout << "ingrese el primer numero"<<endl;
    cin >> nu1;
    cout << "ingrese el segundo numero"<<endl;
    cin >> nu2;
    oper= nu1*nu2;
    cout<< "El resultado de la multiplicacion es de "<< oper << endl;

    cout << "CUARTA OPERACION DIVISION"<<endl;
    cout << "ingrese el primer numero"<<endl;
    cin >> nu1;
    cout << "ingrese el segundo numero"<<endl;
    cin >> nu2;
    oper= nu1/nu2;
    cout<< "El resultado de la Division es de "<< oper << endl;
return 0;

}
