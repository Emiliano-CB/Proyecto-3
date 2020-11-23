#include <iostream>
#include <string>

using namespace std;

class Material
{
public:
    Material();
    Material(int mat, string t);
    void setidMaterial(int mat){idMaterial=mat;};
    int getidMaterial(){return idMaterial;};
    void setTitulo(string t){titulo=t;};
    string getTitulo(){return titulo;};

    virtual void muestraDatos()=0;
    virtual int CantidadDiasPrestamo()=0;

protected:
    int idMaterial;
    string titulo;
};

Material::Material()
{
    idMaterial=1;
    titulo="METAL";
}

Material::Material(int mat, string t)
{
    idMaterial=mat;
    titulo=t;
}



#pragma once
class Libro : public Material
{
public:
    Libro();
    Libro(int pag, string aut);
    void muestraDatos();
    int CantidadDiasPrestamo();
    void setnumPag(int pag){numPag=pag;};
    int getnumPag(){return numPag;};
    void setAutor(string aut){Autor=aut;};
    string getAutor(){return Autor;};
protected:
    int numPag;
    string Autor;
    };

Libro::Libro()
{
    numPag=100;
    Autor="William Shakespeare";
}

Libro::Libro(int pag, string aut)
{
    numPag=pag;
    Autor=aut;
}

int Libro::CantidadDiasPrestamo()
{
    return 5;
}

void Libro::muestraDatos()
{
    cout<<"ID del material: "<<idMaterial<<endl;
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Libro"<<endl;
    cout<<"Numero de paginas: "<<numPag<<endl;
    cout<<"Autor: "<<Autor<<endl;
}

#pragma once
class Disco : public Material
{
public:
    Disco();
    Disco(int dur, string gen);
    void muestraDatos();
    int CantidadDiasPrestamo();
    void setduracion(int dur){duracion=dur;};
    int getduracion(){return duracion;};
    void setGenero(string gen){Genero=gen;};
    string getGenero(){return Genero;};
protected:
    int duracion;
    string Genero;
    };

Disco::Disco()
{
    duracion=160;
    Genero="Terror";
}

Disco::Disco(int dur, string gen)
{
    duracion=dur;
    Genero=gen;
}

int Disco::CantidadDiasPrestamo()
{
    return 3;
}

void Disco::muestraDatos()
{
    cout<<"ID del material: "<<idMaterial<<endl;
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Disco"<<endl;
    cout<<"Duracion: "<<duracion<<endl;
    cout<<"Genero: "<<Genero<<endl;
}

#pragma once
class Software : public Material
{
public:
    Software();
    Software(int ver, string so);
    void muestraDatos();
    int CantidadDiasPrestamo();
    void setVersion(int ver){Version=ver;};
    int getVersion(){return Version;};
    void setSO(string so){SO=so;};
    string getSO(){return SO;};
protected:
    int Version;
    string SO;
    };

Software::Software()
{
    Version=1.2;
    SO="Windows";
}

Software::Software(int ver, string so)
{
    Version=ver;
    SO=so;
}

int Software::CantidadDiasPrestamo()
{
    return 1;
}

void Software::muestraDatos()
{
    cout<<"ID del material: "<<idMaterial<<endl;
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Software"<<endl;
    cout<<"Version: "<<Version<<endl;
    cout<<"Software: "<<SO<<endl;
}

