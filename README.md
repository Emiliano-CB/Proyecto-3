# Proyecto-3

#include <iostream>
#include <string>
#include <fstream>
//#include "Fecha.h"
#include "Material.h"
#include "Reserva.h"


using namespace std;

//istream y ostream
istream& operator >>(istream &ins, Fecha &f1){

  cout << "Dia: " << endl;
  ins >> f1.dd;
  cout << "Mes: " << endl;
  ins >> f1.mm;
  cout << "Anio: " << endl;
  ins >> f1.aa;
  cout<<endl;
  return ins;
}

ostream& operator <<(ostream &out, Fecha &f1){
//  out << "Dia: " << f1.dd << endl;
//  out << "Mes: " << f1.nombreMes() << endl;
//  out << "Año: " << f1.aa << endl;
  out << f1.dd <<"/"<< f1.nombreMes()<<"/"<< f1.aa <<endl;
  return out;
}

int main()
{

//    Fecha f2;
////    f1.muestra();
//    cin >> f2;
//    cout << f2;

    Material *mats[30];   //--------Objeto y apuntador
    Disco disc[30];
    Software soft[30];
    Libro lib[30];


    ifstream archEntrada;

    archEntrada.open("Material.txt");
    int mat;
    string t;
    char clave;
    int cont = 0;
    string temp;
    int contL = 0;
    int contD = 0;
    int contS = 0;
    int entero;
    string texto;

    getline(archEntrada,temp);
    while (archEntrada >> mat >> t >> clave >> entero >> texto)
    {
        if(clave=='L')
            {
         lib[contL].setidMaterial(mat);
         lib[contL].setTitulo(t);
         lib[contL].setnumPag(entero);
         lib[contL].setAutor(texto);
         mats[cont]=&lib[contL];
         contL++;
            }
        else if(clave=='D')
            {
         disc[contD].setidMaterial(mat);
         disc[contD].setTitulo(t);
         disc[contD].setduracion(entero);
         disc[contD].setGenero(texto);
         mats[cont]=&disc[contD];
         contD++;
            }

        else if(clave=='S')
        {
         soft[contS].setidMaterial(mat);
         soft[contS].setTitulo(t);
         soft[contS].setVersion(entero);
         soft[contS].setSO(texto);
         mats[cont]=&soft[contS];
         contS++;
        }

        cont++;
    }
    archEntrada.close();

    //Reserva.txt
    Reserva reserva[60];

    ifstream archEntrada2;

    archEntrada2.open("Reserva.txt");
    int dd;
    int mm;
    int aa;
    int imat;
    int icli;
    int cont2=0;
    string temp2;

    getline(archEntrada2,temp2);
    while (archEntrada2 >> dd >> mm >> aa >> imat >> icli)
    {
        Fecha tempo(dd,mm,aa);
        reserva[cont2].setfechaReservacion(tempo);
        reserva[cont2].setIDMaterial(imat);
        reserva[cont2].setIDCliente(icli);
        cont2++;
    }
    archEntrada.close();

    char opcion;
    int conta = 0;
    while (opcion != 'f')
    {
        cout << "\na. Consultar lista de materiales" << endl;
        cout << "b. Consultar lista de reservaciones" << endl;
        cout << "c. Consultar reservaciones de un material dado" << endl;
        cout << "d. Consultar las reservaciones de una fecha dada" << endl;
        cout << "e. Hacer una reservacion" << endl;
        cout << "f. Salir" << endl;
        cout << "\nIngrese una opcion: "; cin >> opcion;

        if (opcion == 'a')
        {
            while(conta<contL)
            {
            cout<<endl;
            lib[conta].muestraDatos();
                conta++;
            }
            conta = 0;

             while(conta<contD)
            {
            cout<<endl;
            disc[conta].muestraDatos();
                conta++;
            }
            conta = 0;

             while(conta<contS)
            {
            cout<<endl;
            soft[conta].muestraDatos();
                conta++;
            }
            conta = 0;
        }

        if (opcion == 'b')
        {
//            while(conta<cont2)
//            {
//            cout<<endl;
//            cout<<reserva[conta].getfechaReservacion()<<endl;
//                conta++;
//            }
//            conta = 0;
        }


        if (opcion == 'c')
        {

        }


        if (opcion == 'd')
        {

        }


        if (opcion == 'e')
        {
            cout << "Ingrese su id: "; cin >> icli;
            cout << "Ingrese el id del material: "; cin >> imat;
            cout << "Ingrese el dia que quiere reservar: "; cin >> dd;
            cout << "Ingrese el mes que quiere reservar: "; cin >> mm;
            cout << "Ingrese el anio que quiere reservar: "; cin >> aa;
            while(conta<cont2)
            {
                Fecha fr(dd,mm,aa);
                reserva[conta].setIDCliente(icli);
                reserva[conta].setIDMaterial(imat);
                reserva[conta].setfechaReservacion(fr);
                conta++;
            }
            cout<<"Su reservacion fue completada"<<endl;
            conta=0;
        }
    }

    cout << "\nGracias, vuelva pronto" <<endl;

    return 0;
}
