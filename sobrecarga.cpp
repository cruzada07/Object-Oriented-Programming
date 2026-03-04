#include <iostream>
using namespace std;

class Fecha{
    private:    //atributos
        int dia;
        int mes;
        int anio;

    public:     //metodos
        Fecha(int, int, int);
        Fecha(long);    //constructor 2
        void mostrarFecha();
};
Fecha::Fecha(int _d, int _m , int _a){
    dia=_d;
    mes=_m;
    anio=_a;
}


//13102017
//20171013
//20170000




//constructor 2
Fecha::Fecha(long _f){
    anio=int(_f/10000);
    mes=int((_f-(anio*10000))/100);
    dia=_f - (anio*10000) - (mes*100);
}

void Fecha::mostrarFecha(){
    cout<<"Hoy es "<<dia<<"/"<<mes<<"/"<<anio<<"\n";
}
int main(){
    Fecha hoy(1,4,2019);
    Fecha ayer(20191013);
    hoy.mostrarFecha();
    ayer.mostrarFecha();
    return 0;
}