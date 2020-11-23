#include <iostream>
#include <string>

using namespace std;

class Fecha
{
public:
    Fecha();
    Fecha(int d, int m, int a);
    void setFecha(int d, int m, int a){dd=d;mm=m;aa=a;};
    //int getFecha(){return dd, mm, aa;};
    void muestra () {
        cout << "fecha " << dd << endl;
    }
    bool operator>(Fecha);
    bool operator>=(Fecha);
    bool operator<(Fecha);
    bool operator<=(Fecha);
    bool operator==(Fecha);
    Fecha operator+(Fecha);
    friend istream& operator >>(istream&, Fecha &f1);
    friend ostream& operator <<(ostream&, Fecha &f1);
    string nombreMes();
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
    return false;
}

bool Fecha::operator>=(Fecha f1)
{
    if(aa>=f1.aa)
        return true;
    if(mm>=f1.mm)
        return true;
    if(dd>=f1.dd)
        return true;
    return false;
}

bool Fecha::operator<(Fecha f1)
{
    if(aa<f1.aa)
        return true;
    if(mm<f1.mm)
        return true;
    if(dd<f1.dd)
        return true;
    return false;
}

bool Fecha::operator<=(Fecha f1)
{
    if(aa<=f1.aa)
        return true;
    if(mm<=f1.mm)
        return true;
    if(dd<=f1.dd)
        return true;
    return false;
}

bool Fecha::operator==(Fecha f1)
{
    if(aa==f1.aa)
        return true;
    if(mm==f1.mm)
        return true;
    if(dd==f1.dd)
        return true;
    return false;
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

string Fecha::nombreMes()
{
    if(mm==1)
        return "Ene";
    if(mm==2)
        return "Feb";
    if(mm==3)
        return "Mar";
    if(mm==4)
        return "Abr";
    if(mm==5)
        return "May";
    if(mm==6)
        return "Jun";
    if(mm==7)
        return "Jul";
    if(mm==8)
        return "Ago";
    if(mm==9)
        return "Sep";
    if(mm==10)
        return "Oct";
    if(mm==11)
        return "Nov";
    if(mm==12)
        return "Dic";
}


//fecha ...
//  friend istream& operator>>(istream&, Fecha&);
//  friend ostream& operator<<(ostream&, Fecha);
//
//  /////
//istream& operator>>(istream &ins, Fecha &Fecha1){
//  int iD,iM,iA;
//  cout << "Dia: " << endl;
//  ins >> Fecha1.dd;
//  cout << "Mes: " << endl;
//  ins >> Fecha1.mm;
//  cout << "Año: " << endl;
//  ins >> Fecha1.aa;
//  return ins;
//}
//
//ostream& operator << (ostream &out, Fecha Fecha1){
//  out << "Dia: " << Fecha1.dd << endl;
//  out << "Mes: " << Fecha1.mm << endl;
//  out << "Año: " << Fecha1.aa << endl;
//  return out;
//}
