#include <iostream>
using namespace std;
int main ()
{
 int nu1,nu2,suma=0,resta=0,multiplicacion=0,divison=0,resultado;

    cout<< "Ingrese el primer numero" << endl;
    cin>> nu1;
    cout<< "ingrese el segundo numero"<< endl;
    cin>> nu2;
    suma = nu1+nu2;
    cout<< "El resultado de la suma es de "<< suma << endl;
    cout<< "Ingrese el primer numero" << endl;
    cin>> nu1;
    cout<< "ingrese el segundo numero"<< endl;
    cin>> nu2;
    resta= nu1-nu2;
     cout<< "El resultado de la resta es de " << resta << endl;
    cout<< "Ingrese el primer numero" << endl;
    cin>> nu1;
    cout<< "ingrese el segundo numero"<< endl;
    cin>> nu2;
    multiplicacion=nu1*nu2;
    cout<< "El resultado de la multiplicacion es de " << multiplicacion << endl;

    cout<< "Ingrese el primer numero" << endl;
    cin>> nu1;
    cout<< "ingrese el segundo numero"<< endl;
    cin>> nu2;

    divison= nu1/nu2;

    cout<< "El resultado de la division es de " << divison << endl;
    return 0;
}
