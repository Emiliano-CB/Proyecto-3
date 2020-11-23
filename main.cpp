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
    Disco discos[30];
    Software soft[30];
    Libro lib[30];



//    ifstream archEntrada;
//
//    archEntrada.open("Material.txt");
//    int mat;
//    string t;
//    string clave;
//    int cont = 0;
//    string temp;
//
//    getline(archEntrada,temp);
//
//    while (archEntrada >> mat >> t >> clave)
//    {
//        mats[cont].setidMaterial(mat);
//        mats[cont].setTitulo(t);
//        cont++;
//    }
//    archEntrada.close();



    return 0;
}
