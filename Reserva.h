#include <iostream>
#include "Fecha.h"

using namespace std;

class Reserva
{
public:
    Reserva();
    Reserva(Fecha fr, int imat, int icli);
    void setIDMaterial(int imat){idMaterial=imat;};
    int getIDMaterial(){return idMaterial;};
    void setIDCliente(int icli){idCliente=icli;};
    int getIDCliente(){return idCliente;};
    void setfechaReservacion(Fecha);
    Fecha getfechaReservacion(){return fechaReservacion;};

protected:
    Fecha fechaReservacion;
    int idMaterial, idCliente;

};

Reserva::Reserva()
{
    Fecha temp(13,5,2000);
   idMaterial = 1000;
   idCliente = 1234;
}

Reserva::Reserva(Fecha fr, int imat, int icli)
{
   fechaReservacion = fr;
   idMaterial = imat;
   idCliente = icli;
}


void Reserva::setfechaReservacion(Fecha fr)
{
    fechaReservacion = fr;
}
