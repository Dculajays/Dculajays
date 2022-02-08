#include <iostream>

using namespace std;

int main()
{
    int proceso = 0;
    int calculo = 0;
    int fisica = 0;
    int derecho = 0;
    int programacion = 0;
    int materia;
    cout<< "ingrese la nota de Proceso administrativo "<< endl;
    cin >> proceso;
    cout << "ingrese la nota de calculo " << endl;
    cin >>calculo;
    cout<< "ingrese la nota de Fisica "<< endl;
    cin >>fisica;
    cout << "ingrese la nota de Derecho Informativo" << endl;
    cin >>derecho;
    cout << "ingrese la nota de Programacion 1"<< endl;
    cin >>programacion;
    cout << "Que nota le gustaria saber que aprobo"<< endl;
    cout<< " 1.Proceso administrativo "<< endl;
    cout << " 2.Calculo " << endl;
    cout<< " 3.Fisica " << endl;
    cout << " 4.Derecho Informativo" << endl;
    cout << " 5.Programacion 1"<< endl;
    cin >>materia;
    switch(materia)
    {
case 1:

   if ( proceso >= 60 )
    {
    cout<< "ESTE CURSO ESTA APROBADO"<<endl;
    cout<< "FELICIDADES";

    }
   else if (proceso < 60)
   {
       cout << "ESTE CURSO ESTA REPROBADO"<<endl;
       cout<< "LO SIENTO";
   }
   break;
case 2:
     if ( calculo >= 60 )
    {
    cout<< "ESTE CURSO ESTA APROBADO"<<endl;
    cout<< "FELICIDADES";

    }
   else if ( calculo < 60)
   {
       cout << "ESTE CURSO ESTA REPROBADO"<<endl;
       cout<< "LO SIENTO";
   }
   break;

case 3:
     if ( fisica >= 60 )
    {
    cout<< "ESTE CURSO ESTA APROBADO"<<endl;
    cout<< "FELICIDADES";

    }
   else if ( fisica < 60)
   {
       cout << "ESTE CURSO ESTA REPROBADO"<<endl;
       cout<< "LO SIENTO";
   }
   break;

case 4:
     if ( derecho >= 60 )
    {
    cout<< "ESTE CURSO ESTA APROBADO"<<endl;
    cout<< "FELICIDADES";

    }
   else if (derecho < 60)
   {
       cout << "ESTE CURSO ESTA REPROBADO"<<endl;
       cout<< "LO SIENTO";
   }
   break;
case 5:
     if ( programacion>= 60 )
    {
    cout<< "ESTE CURSO ESTA APROBADO"<<endl;
    cout<< "FELICIDADES";

    }
   else if (programacion < 60)
   {
       cout << "ESTE CURSO ESTA REPROBADO"<<endl;
       cout<< "LO SIENTO";
   }
   break;


   }
return 0;

}
