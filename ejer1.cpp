#include <iostream>
using namespace std;
class Rectangulo{
    private:    //atributos
        float largo;
        float ancho;

    public: //metodos
        Rectangulo(float, float);   //constructor
        void calcPerm();
        void calcAr();
};

Rectangulo::Rectangulo(float _l,float _a){
    largo=_l;
    ancho=_a;
}
void Rectangulo::calcPerm(){
    float perimetro;
    perimetro= 2.00*(largo +ancho);
    cout<<"El perimetro es: "<<perimetro<<"\n";
}
void Rectangulo::calcAr(){
    float area;
    area= largo*ancho;
    cout<<"El area es: "<<area<<"\n";
}
int main(){
    Rectangulo r1(12.1,13.6);
    r1.calcPerm();
    r1.calcAr();

    return 0;
}