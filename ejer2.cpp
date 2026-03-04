#include <iostream>
using namespace std;

class Tiempo{
    private:
        int horas;
        int minutos;
        int segundos;
    public:
        Tiempo(int, int, int);
        Tiempo(int);
        void mostrarHora();
};

//primer constructor:
Tiempo::Tiempo(int _h, int _m, int _s){
    horas=_h;
    minutos=_m;
    segundos= _s;
}
//segundo constructor:
//  4:13:54
//  4*3600 , +13*60, + 54 
Tiempo::Tiempo(int _segundostotales){
    horas=int(_segundostotales/3600);
    minutos=int( (_segundostotales-horas*3600)/60 );
    segundos=_segundostotales - (horas*3600) - (minutos*60);
}
void Tiempo::mostrarHora(){
    cout<<"La hora es: "<<horas<<":"<<minutos<<":"<<segundos<<"\n";
}


int main(){

    Tiempo t1(3,13,54);
    Tiempo t2(15234);
    t1.mostrarHora();
    t2.mostrarHora();


    return 0;
}