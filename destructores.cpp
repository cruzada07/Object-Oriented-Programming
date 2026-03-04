#include <iostream>
using namespace std;

class Perro{
    private:
        string raza;
        string nombre;
    public:
        Perro(string, string);  //Constructor
        ~Perro();               //Destructor
        void mostrardatos();
        void jugar();
};
//Constructor:
Perro::Perro(string _r, string _n){
    raza=_r;
    nombre=_n;
}
//Destructor:
Perro::~Perro(){
}
void Perro::mostrardatos(){
    cout<<"Mi perro se llama "<<nombre;
    cout<<"\nY es de raza "<<raza<<"\n";
}
void Perro::jugar(){
    cout<<"Mi perro "<<nombre<<" esta jugando"<<"\n";
}

int main(){
    Perro p1("Diego", "Dogeerman");
    p1.mostrardatos();
    p1.jugar();
    //funcion destructor de objetos
    p1.~Perro();



    return 0;
}