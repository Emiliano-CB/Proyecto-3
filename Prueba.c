#include <iostream>
//#include "Fecha.h"
#include "Material.h"
#include "Reserva.h"


using namespace std;


class Fecha
{
public:
    Fecha();
    Fecha(int d, int m, int a);
    int setFecha(int d, int m, int a){dd=d;mm=m;aa=a;};
    int getFecha(){return dd, mm, aa;};
    bool operator>(Fecha);
    bool operator>=(Fecha);
    bool operator<(Fecha);
    bool operator<=(Fecha);
    bool operator==(Fecha);
    Fecha operator+(Fecha);
    friend istream& operator <<(istream&, Fecha &f1);
    friend ostream& operator >>(ostream&, Fecha &f1);
private:
    int dd, mm, aa;
};

Fecha::Fecha()
{
    dd=13;
    mm=5;
    aa=2020;
}

Fecha::Fecha(int d, int m, int a)
{
    dd=d;
    mm=m;
    aa=a;
}

bool Fecha::operator>(Fecha f1)
{
    if(aa>f1.aa)
        return true;
    if(mm>f1.mm)
        return true;
    if(dd>f1.dd)
        return true;
}

bool Fecha::operator>=(Fecha f1)
{
    if(aa>=f1.aa)
        return true;
    if(mm>=f1.mm)
        return true;
    if(dd>=f1.dd)
        return true;
}

bool Fecha::operator<(Fecha f1)
{
    if(aa<f1.aa)
        return true;
    if(mm<f1.mm)
        return true;
    if(dd<f1.dd)
        return true;
}

bool Fecha::operator<=(Fecha f1)
{
    if(aa<=f1.aa)
        return true;
    if(mm<=f1.mm)
        return true;
    if(dd<=f1.dd)
        return true;
}

bool Fecha::operator==(Fecha f1)
{
    if(aa==f1.aa)
        return true;
    if(mm==f1.mm)
        return true;
    if(dd==f1.dd)
        return true;
}


Fecha Fecha::operator+(Fecha f1)
{
    int Naa, Nmm, Ndd;

    Naa= aa+f1.aa;
    Nmm= mm+f1.mm;
    Ndd= dd+f1.dd;
    Fecha temp(Naa, Nmm, Ndd);
    return temp;
}

//istream y ostream
istream& operator>>(istream &ins, Fecha &f1){
  int iD,iM,iA;
  Fecha temp(1,2,3);
  cout << "Dia: " << endl;
  ins >> f1.dd;
  cout << "Mes: " << endl;
  ins >> f1.mm;
  cout << "Año: " << endl;
  ins >> f1.aa;
  return ins;
}

ostream& operator << (ostream &out, Fecha &f1){
  out << "Dia: " << f1.dd << endl;
  out << "Mes: " << f1.mm << endl;
  out << "Año: " << f1.aa << endl;
  return out;
}

int main()
{


    cout << "Hello world!" << endl;
    return 0;
}


