#include <iostream>
using namespace std;

class Persona {
    private:
        int edad;

    public:
        // SETTER
        void setEdad(int e){
            if(e>=0){
                edad = e;
            }else{
                cout<<"Edad no valida."<<endl;
            }
        }

        // GETTER
        int getEdad(){
            return edad;
        }
};

int main() {
    Persona p1;

    // p1.edad = 25;  <-- Esto daría ERROR porque es privada
    
    p1.setEdad(25); // Usamos el setter para asignar
    
    cout << "La edad es: " << p1.getEdad() << endl; // Usamos el getter para leer

    return 0;
}