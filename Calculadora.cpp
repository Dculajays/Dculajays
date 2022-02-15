#include <iostream>
using namespace std;

int operacion;
int b;
int a;
int nu1,nu2,oper=0,resultado;
void menu(){
if ( operacion == 1){
    cout << " A elegido Suma"<<endl;
    cout << "ingrese el primer numero"<< endl;
    cin >> nu1;
    cout << "ingrese el segundo numero"<<endl ;
    cin >> nu2;
    oper= nu1+nu2;
    cout<< "El resultado de la suma es de "<< oper << endl;
    }
    else if (operacion == 2){
    cout << " A elegido Resta "<< endl;
    cout << "ingrese el primer numero"<<endl;
    cin >> nu1;
    cout << "ingrese el segundo numero"<<endl;
    cin >> nu2;
    oper= nu1 - nu2;
    cout<< "El resultado de la resta es de "<< oper << endl;

    }
    else if (operacion == 3){
    cout << " A elegido Multiplicacion"<<endl;
    cout << "ingrese el primer numero"<<endl;
    cin >> nu1;
    cout << "ingrese el segundo numero"<<endl;
    cin >> nu2;
    oper= nu1*nu2;
    cout<< "El resultado de la multiplicacion es de "<< oper << endl;
    }
    else if (operacion == 4){
    cout << " A elegido Division"<<endl;
    cout << "ingrese el primer numero"<<endl;
    cin >> nu1;
    cout << "ingrese el segundo numero"<<endl;
    cin >> nu2;
    oper= nu1/nu2;
    cout<< "El resultado de la Division es de "<< oper << endl;
    }
}


int main ()
{
    while (a < 1 ){
    cout << "Eliga la operacion segun el numero " <<endl;
    cout << "1. Suma"<<endl;
    cout << "2. Resta "<<endl;
    cout << "3. Multiplicacion"<<endl;
    cout << "4. Division"<<endl;
    cin >> operacion;
    menu();
    a=2;

    }
    return 0;
}
